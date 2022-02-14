
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {scalar_t__ skip_frame; int codec_id; } ;
struct TYPE_13__ {int nb_nals; TYPE_3__* nals; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {int last_eos; int eos; int overlap; scalar_t__ threads_type; TYPE_1__* ref; TYPE_5__* avctx; TYPE_4__ pkt; int nal_length_size; int is_nalff; } ;
struct TYPE_10__ {int tf; } ;
typedef TYPE_2__ HEVCContext ;
typedef TYPE_3__ H2645NAL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int const*,int,TYPE_5__*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(HEVCContext *VAR_9, const uint8_t *VAR_10, int VAR_11)
{
    int VAR_12, VAR_13 = 0;
    int VAR_14 = 1;

    VAR_9->ref = ((void*)0);
    VAR_9->last_eos = VAR_9->eos;
    VAR_9->eos = 0;
    VAR_9->overlap = 0;



    VAR_13 = FUNC_2(&VAR_9->pkt, VAR_10, VAR_11, VAR_9->avctx, VAR_9->is_nalff,
                                VAR_9->nal_length_size, VAR_9->avctx->codec_id, 1, 0);
    if (VAR_13 < 0) {
        FUNC_0(VAR_9->avctx, VAR_3,
               "Error splitting the input into NAL units.\n");
        return VAR_13;
    }

    for (VAR_12 = 0; VAR_12 < VAR_9->pkt.nb_nals; VAR_12++) {
        if (VAR_9->pkt.nals[VAR_12].type == VAR_6 ||
            VAR_9->pkt.nals[VAR_12].type == VAR_7) {
            if (VAR_14) {
                VAR_9->last_eos = 1;
            } else {
                VAR_9->eos = 1;
            }
        } else {
            VAR_14 = 0;
        }
    }


    for (VAR_12 = 0; VAR_12 < VAR_9->pkt.nb_nals; VAR_12++) {
        H2645NAL *VAR_15 = &VAR_9->pkt.nals[VAR_12];

        if (VAR_9->avctx->skip_frame >= VAR_0 ||
            (VAR_9->avctx->skip_frame >= VAR_1
            && FUNC_3(VAR_15->type)))
            continue;

        VAR_13 = FUNC_1(VAR_9, VAR_15);
        if (VAR_13 >= 0 && VAR_9->overlap > 2)
            VAR_13 = VAR_2;
        if (VAR_13 < 0) {
            FUNC_0(VAR_9->avctx, VAR_4,
                   "Error parsing NAL unit #%d.\n", VAR_12);
            goto fail;
        }
    }

fail:
    if (VAR_9->ref && VAR_9->threads_type == VAR_5)
        FUNC_4(&VAR_9->ref->tf, VAR_8, 0);

    return VAR_13;
}
