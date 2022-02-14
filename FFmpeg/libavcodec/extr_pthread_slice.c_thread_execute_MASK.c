
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int action_func ;
struct TYPE_8__ {int active_thread_type; int thread_count; TYPE_1__* internal; } ;
struct TYPE_7__ {int job_size; int* rets; int mainfunc; int thread; int * func; void* args; } ;
struct TYPE_6__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,void*,int*,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1, action_func* VAR_2, void *VAR_3, int *VAR_4, int VAR_5, int VAR_6)
{
    SliceThreadContext *VAR_7 = VAR_1->internal->thread_ctx;

    if (!(VAR_1->active_thread_type&VAR_0) || VAR_1->thread_count <= 1)
        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_5 <= 0)
        return 0;

    VAR_7->job_size = VAR_6;
    VAR_7->args = VAR_3;
    VAR_7->func = VAR_2;
    VAR_7->rets = VAR_4;

    FUNC_1(VAR_7->thread, VAR_5, !!VAR_7->mainfunc );
    return 0;
}
