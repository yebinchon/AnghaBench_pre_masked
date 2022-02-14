
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int uint8_t ;
struct TYPE_26__ {int err_recognition; TYPE_1__* hwaccel; TYPE_4__* priv_data; } ;
struct TYPE_25__ {int size; int data; } ;
struct TYPE_22__ {scalar_t__ is_md5; } ;
struct TYPE_23__ {TYPE_2__ picture_hash; } ;
struct TYPE_24__ {TYPE_18__* output_frame; scalar_t__ is_decoded; int poc; TYPE_3__ sei; TYPE_13__* ref; } ;
struct TYPE_21__ {int (* end_frame ) (TYPE_6__*) ;} ;
struct TYPE_20__ {scalar_t__* buf; } ;
struct TYPE_19__ {int frame; } ;
typedef TYPE_4__ HEVCContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,TYPE_18__*) ;
 int FUNC_1 (TYPE_6__*,int ,char*,...) ;
 int * FUNC_2 (TYPE_5__*,int ,int*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_4__*,void*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_13__*,int ) ;
 int FUNC_6 (TYPE_4__*,int *,int,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                             AVPacket *VAR_8)
{
    int VAR_9;
    int VAR_10;
    uint8_t *VAR_11;
    HEVCContext *VAR_12 = VAR_5->priv_data;

    if (!VAR_8->size) {
        VAR_9 = FUNC_4(VAR_12, VAR_6, 1);
        if (VAR_9 < 0)
            return VAR_9;

        *VAR_7 = VAR_9;
        return 0;
    }

    VAR_11 = FUNC_2(VAR_8, VAR_4,
                                            &VAR_10);
    if (VAR_11 && VAR_10 > 0) {
        VAR_9 = FUNC_6(VAR_12, VAR_11, VAR_10, 0);
        if (VAR_9 < 0)
            return VAR_9;
    }

    VAR_12->ref = ((void*)0);
    VAR_9 = FUNC_3(VAR_12, VAR_8->data, VAR_8->size);
    if (VAR_9 < 0)
        return VAR_9;

    if (VAR_5->hwaccel) {
        if (VAR_12->ref && (VAR_9 = VAR_5->hwaccel->end_frame(VAR_5)) < 0) {
            FUNC_1(VAR_5, VAR_3,
                   "hardware accelerator failed to decode picture\n");
            FUNC_5(VAR_12, VAR_12->ref, ~0);
            return VAR_9;
        }
    } else {

        if (VAR_5->err_recognition & VAR_0 && VAR_12->is_decoded &&
            VAR_12->sei.picture_hash.is_md5) {
            VAR_9 = FUNC_8(VAR_12, VAR_12->ref->frame);
            if (VAR_9 < 0 && VAR_5->err_recognition & VAR_1) {
                FUNC_5(VAR_12, VAR_12->ref, ~0);
                return VAR_9;
            }
        }
    }
    VAR_12->sei.picture_hash.is_md5 = 0;

    if (VAR_12->is_decoded) {
        FUNC_1(VAR_5, VAR_2, "Decoded frame with POC %d.\n", VAR_12->poc);
        VAR_12->is_decoded = 0;
    }

    if (VAR_12->output_frame->buf[0]) {
        FUNC_0(VAR_6, VAR_12->output_frame);
        *VAR_7 = 1;
    }

    return VAR_8->size;
}
