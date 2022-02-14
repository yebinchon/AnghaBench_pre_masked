
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int hwaccel_mutex; } ;
struct TYPE_11__ {int active_thread_type; TYPE_2__* hwaccel; TYPE_1__* internal; } ;
struct TYPE_10__ {int hwaccel_serializing; int async_serializing; int progress_mutex; int progress_cond; int state; TYPE_7__* parent; } ;
struct TYPE_9__ {int caps_internal; } ;
struct TYPE_8__ {TYPE_3__* thread_ctx; } ;
typedef TYPE_3__ PerThreadContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(AVCodecContext *VAR_4) {
    PerThreadContext *VAR_5 = VAR_4->internal->thread_ctx;

    if (!(VAR_4->active_thread_type&VAR_1)) return;

    if (VAR_4->hwaccel && !VAR_5->hwaccel_serializing) {
        FUNC_5(&VAR_5->parent->hwaccel_mutex);
        VAR_5->hwaccel_serializing = 1;
    }


    if (VAR_4->hwaccel &&
        !(VAR_4->hwaccel->caps_internal & VAR_2)) {
        VAR_5->async_serializing = 1;

        FUNC_0(VAR_5->parent);
    }

    FUNC_5(&VAR_5->progress_mutex);
    if(FUNC_1(&VAR_5->state) == VAR_3){
        FUNC_3(VAR_4, VAR_0, "Multiple ff_thread_finish_setup() calls\n");
    }

    FUNC_2(&VAR_5->state, VAR_3);

    FUNC_4(&VAR_5->progress_cond);
    FUNC_6(&VAR_5->progress_mutex);
}
