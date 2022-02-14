
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int action_func2 ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int * func2; } ;
struct TYPE_6__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *,void*,int*,int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, action_func2* VAR_1, void *VAR_2, int *VAR_3, int VAR_4)
{
    SliceThreadContext *VAR_5 = VAR_0->internal->thread_ctx;
    VAR_5->func2 = VAR_1;
    return FUNC_0(VAR_0, ((void*)0), VAR_2, VAR_3, VAR_4, 0);
}
