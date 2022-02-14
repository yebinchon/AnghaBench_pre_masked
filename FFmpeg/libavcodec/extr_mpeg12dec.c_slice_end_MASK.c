
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int f; } ;
struct TYPE_17__ {TYPE_1__* hwaccel; } ;
struct TYPE_16__ {int active_thread_type; TYPE_3__* priv_data; } ;
struct TYPE_14__ {scalar_t__ pict_type; TYPE_8__* last_picture_ptr; int picture_number; TYPE_8__* current_picture_ptr; scalar_t__ low_delay; int er; int first_field; TYPE_5__* avctx; } ;
struct TYPE_15__ {int first_slice; int mpeg_enc_ctx_allocated; TYPE_2__ mpeg_enc_ctx; } ;
struct TYPE_13__ {int (* end_frame ) (TYPE_5__*) ;} ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ Mpeg1Context ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4, AVFrame *VAR_5)
{
    Mpeg1Context *VAR_6 = VAR_4->priv_data;
    MpegEncContext *VAR_7 = &VAR_6->mpeg_enc_ctx;

    if (!VAR_6->mpeg_enc_ctx_allocated || !VAR_7->current_picture_ptr)
        return 0;

    if (VAR_7->avctx->hwaccel) {
        int VAR_8 = VAR_7->avctx->hwaccel->end_frame(VAR_7->avctx);
        if (VAR_8 < 0) {
            FUNC_1(VAR_4, VAR_0,
                   "hardware accelerator failed to decode picture\n");
            return VAR_8;
        }
    }


    if ( !VAR_7->first_field && !VAR_6->first_slice) {


        FUNC_2(&VAR_7->er);

        FUNC_4(VAR_7);

        if (VAR_7->pict_type == VAR_1 || VAR_7->low_delay) {
            int VAR_9 = FUNC_0(VAR_5, VAR_7->current_picture_ptr->f);
            if (VAR_9 < 0)
                return VAR_9;
            FUNC_5(VAR_7, VAR_7->current_picture_ptr, VAR_5);
            FUNC_3(VAR_7, VAR_5, VAR_7->current_picture_ptr, VAR_2);
        } else {
            if (VAR_4->active_thread_type & VAR_3)
                VAR_7->picture_number++;


            if (VAR_7->last_picture_ptr) {
                int VAR_10 = FUNC_0(VAR_5, VAR_7->last_picture_ptr->f);
                if (VAR_10 < 0)
                    return VAR_10;
                FUNC_5(VAR_7, VAR_7->last_picture_ptr, VAR_5);
                FUNC_3(VAR_7, VAR_5, VAR_7->last_picture_ptr, VAR_2);
            }
        }

        return 1;
    } else {
        return 0;
    }
}
