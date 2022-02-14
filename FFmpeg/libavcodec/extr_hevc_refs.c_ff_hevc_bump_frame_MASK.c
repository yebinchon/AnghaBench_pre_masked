
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sps; } ;
struct TYPE_12__ {scalar_t__ seq_output; scalar_t__ poc; TYPE_4__* DPB; TYPE_3__ ps; } ;
struct TYPE_11__ {int flags; scalar_t__ sequence; scalar_t__ poc; } ;
struct TYPE_9__ {int max_sub_layers; TYPE_1__* temporal_layer; } ;
struct TYPE_8__ {int max_dec_pic_buffering; } ;
typedef TYPE_4__ HEVCFrame ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(HEVCContext *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = VAR_2;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->DPB); VAR_6++) {
        HEVCFrame *VAR_7 = &VAR_3->DPB[VAR_6];
        if ((VAR_7->flags) &&
            VAR_7->sequence == VAR_3->seq_output &&
            VAR_7->poc != VAR_3->poc) {
            VAR_4++;
        }
    }

    if (VAR_3->ps.sps && VAR_4 >= VAR_3->ps.sps->temporal_layer[VAR_3->ps.sps->max_sub_layers - 1].max_dec_pic_buffering) {
        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->DPB); VAR_6++) {
            HEVCFrame *VAR_8 = &VAR_3->DPB[VAR_6];
            if ((VAR_8->flags) &&
                VAR_8->sequence == VAR_3->seq_output &&
                VAR_8->poc != VAR_3->poc) {
                if (VAR_8->flags == VAR_1 && VAR_8->poc < VAR_5) {
                    VAR_5 = VAR_8->poc;
                }
            }
        }

        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->DPB); VAR_6++) {
            HEVCFrame *VAR_9 = &VAR_3->DPB[VAR_6];
            if (VAR_9->flags & VAR_1 &&
                VAR_9->sequence == VAR_3->seq_output &&
                VAR_9->poc <= VAR_5) {
                VAR_9->flags |= VAR_0;
            }
        }

        VAR_4--;
    }
}
