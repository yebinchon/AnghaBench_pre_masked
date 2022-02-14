
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sem; int select_ret; int tv; int errfds; int wrfds; int rdfds; int maxfds; } ;
typedef TYPE_1__ test_select_task_param_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    const test_select_task_param_t *VAR_1 = VAR_0;

    int VAR_2 = FUNC_1(VAR_1->maxfds, VAR_1->rdfds, VAR_1->wrfds, VAR_1->errfds, VAR_1->tv);
    FUNC_0(VAR_1->select_ret, VAR_2);

    if (VAR_1->sem) {
        FUNC_3(VAR_1->sem);
    }
    FUNC_2(((void*)0));
}
