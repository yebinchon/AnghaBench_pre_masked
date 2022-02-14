
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* sps; } ;
struct TYPE_11__ {int no_output_of_prior_pics_flag; } ;
struct TYPE_16__ {int no_rasl_output_flag; scalar_t__ poc; scalar_t__ seq_output; scalar_t__ seq_decode; int avctx; TYPE_5__* DPB; TYPE_4__ ps; TYPE_1__ sh; } ;
struct TYPE_15__ {int flags; scalar_t__ poc; scalar_t__ sequence; int frame; } ;
struct TYPE_13__ {int max_sub_layers; TYPE_2__* temporal_layer; } ;
struct TYPE_12__ {int num_reorder_pics; } ;
typedef TYPE_5__ HEVCFrame ;
typedef TYPE_6__ HEVCContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int) ;

int FUNC_4(HEVCContext *VAR_4, AVFrame *VAR_5, int VAR_6)
{
    do {
        int VAR_7 = 0;
        int VAR_8 = VAR_3;
        int VAR_9, VAR_10, VAR_11;

        if (VAR_4->sh.no_output_of_prior_pics_flag == 1 && VAR_4->no_rasl_output_flag == 1) {
            for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->DPB); VAR_9++) {
                HEVCFrame *VAR_12 = &VAR_4->DPB[VAR_9];
                if (!(VAR_12->flags & VAR_1) && VAR_12->poc != VAR_4->poc &&
                        VAR_12->sequence == VAR_4->seq_output) {
                    FUNC_3(VAR_4, VAR_12, VAR_2);
                }
            }
        }

        for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->DPB); VAR_9++) {
            HEVCFrame *VAR_13 = &VAR_4->DPB[VAR_9];
            if ((VAR_13->flags & VAR_2) &&
                VAR_13->sequence == VAR_4->seq_output) {
                VAR_7++;
                if (VAR_13->poc < VAR_8 || VAR_7 == 1) {
                    VAR_8 = VAR_13->poc;
                    VAR_10 = VAR_9;
                }
            }
        }


        if (!VAR_6 && VAR_4->seq_output == VAR_4->seq_decode && VAR_4->ps.sps &&
            VAR_7 <= VAR_4->ps.sps->temporal_layer[VAR_4->ps.sps->max_sub_layers - 1].num_reorder_pics)
            return 0;

        if (VAR_7) {
            HEVCFrame *VAR_14 = &VAR_4->DPB[VAR_10];

            VAR_11 = FUNC_1(VAR_5, VAR_14->frame);
            if (VAR_14->flags & VAR_1)
                FUNC_3(VAR_4, VAR_14, VAR_2 | VAR_1);
            else
                FUNC_3(VAR_4, VAR_14, VAR_2);
            if (VAR_11 < 0)
                return VAR_11;

            FUNC_2(VAR_4->avctx, VAR_0,
                   "Output frame with POC %d.\n", VAR_14->poc);
            return 1;
        }

        if (VAR_4->seq_output != VAR_4->seq_decode)
            VAR_4->seq_output = (VAR_4->seq_output + 1) & 0xff;
        else
            break;
    } while (1);

    return 0;
}
