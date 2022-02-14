
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int async_mutex; int async_cond; scalar_t__ async_lock; } ;
typedef TYPE_1__ FrameThreadContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(FrameThreadContext *VAR_0)
{
    FUNC_2(&VAR_0->async_mutex);
    FUNC_0(VAR_0->async_lock);
    VAR_0->async_lock = 0;
    FUNC_1(&VAR_0->async_cond);
    FUNC_3(&VAR_0->async_mutex);
}
