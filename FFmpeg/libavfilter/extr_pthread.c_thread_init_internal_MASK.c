
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int thread; } ;
typedef TYPE_1__ ThreadContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(ThreadContext *VAR_1, int VAR_2)
{
    VAR_2 = FUNC_1(&VAR_1->thread, VAR_1, VAR_0, ((void*)0), VAR_2);
    if (VAR_2 <= 1)
        FUNC_2(&VAR_1->thread);
    return FUNC_0(VAR_2, 1);
}
