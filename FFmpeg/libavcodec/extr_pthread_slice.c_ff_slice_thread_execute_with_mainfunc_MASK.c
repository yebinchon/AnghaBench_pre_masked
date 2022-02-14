
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int main_func ;
typedef int action_func2 ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int * mainfunc; int * func2; } ;
struct TYPE_6__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *,void*,int*,int,int ) ;

int FUNC_1(AVCodecContext *VAR_0, action_func2* VAR_1, main_func *VAR_2, void *VAR_3, int *VAR_4, int VAR_5)
{
    SliceThreadContext *VAR_6 = VAR_0->internal->thread_ctx;
    VAR_6->func2 = VAR_1;
    VAR_6->mainfunc = VAR_2;
    return FUNC_0(VAR_0, ((void*)0), VAR_3, VAR_4, VAR_5, 0);
}
