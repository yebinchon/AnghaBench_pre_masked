
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int f; int tf; } ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {scalar_t__ pict_type; TYPE_7__* last_picture_ptr; TYPE_7__* current_picture_ptr; scalar_t__ low_delay; TYPE_1__* avctx; scalar_t__ mb_num_left; int er; } ;
struct TYPE_12__ {TYPE_3__ s; } ;
struct TYPE_11__ {int active_thread_type; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_5, AVFrame *VAR_6)
{
    RV34DecContext *VAR_7 = VAR_5->priv_data;
    MpegEncContext *VAR_8 = &VAR_7->s;
    int VAR_9 = 0, VAR_10;

    FUNC_1(&VAR_8->er);
    FUNC_3(VAR_8);
    VAR_8->mb_num_left = 0;

    if (VAR_3 && (VAR_8->avctx->active_thread_type & VAR_2))
        FUNC_5(&VAR_8->current_picture_ptr->tf, VAR_4, 0);

    if (VAR_8->pict_type == VAR_0 || VAR_8->low_delay) {
        if ((VAR_10 = FUNC_0(VAR_6, VAR_8->current_picture_ptr->f)) < 0)
            return VAR_10;
        FUNC_4(VAR_8, VAR_8->current_picture_ptr, VAR_6);
        FUNC_2(VAR_8, VAR_6, VAR_8->current_picture_ptr, VAR_1);
        VAR_9 = 1;
    } else if (VAR_8->last_picture_ptr) {
        if ((VAR_10 = FUNC_0(VAR_6, VAR_8->last_picture_ptr->f)) < 0)
            return VAR_10;
        FUNC_4(VAR_8, VAR_8->last_picture_ptr, VAR_6);
        FUNC_2(VAR_8, VAR_6, VAR_8->last_picture_ptr, VAR_1);
        VAR_9 = 1;
    }

    return VAR_9;
}
