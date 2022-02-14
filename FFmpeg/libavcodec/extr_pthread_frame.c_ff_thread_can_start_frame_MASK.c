
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int active_thread_type; TYPE_2__* codec; TYPE_1__* internal; } ;
struct TYPE_9__ {int state; } ;
struct TYPE_8__ {scalar_t__ update_thread_context; } ;
struct TYPE_7__ {TYPE_3__* thread_ctx; } ;
typedef TYPE_3__ PerThreadContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(AVCodecContext *VAR_2)
{
    PerThreadContext *VAR_3 = VAR_2->internal->thread_ctx;
    if ((VAR_2->active_thread_type&VAR_0) && FUNC_1(&VAR_3->state) != VAR_1 &&
        (VAR_2->codec->update_thread_context || !FUNC_0(VAR_2))) {
        return 0;
    }
    return 1;
}
