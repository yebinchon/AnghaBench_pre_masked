
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int async_lock; int async_mutex; int async_cond; } ;
typedef TYPE_1__ FrameThreadContext ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(FrameThreadContext *VAR_0)
{
    FUNC_1(&VAR_0->async_mutex);
    while (VAR_0->async_lock)
        FUNC_0(&VAR_0->async_cond, &VAR_0->async_mutex);
    VAR_0->async_lock = 1;
    FUNC_2(&VAR_0->async_mutex);
}
