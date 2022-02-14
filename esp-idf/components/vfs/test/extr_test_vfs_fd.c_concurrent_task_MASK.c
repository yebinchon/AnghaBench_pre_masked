
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int path; } ;
typedef TYPE_1__ concurrent_test_task_param_t ;


 int FUNC_0 (int const,int) ;
 int const FUNC_1 (int const) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
    concurrent_test_task_param_t *VAR_1 = (concurrent_test_task_param_t *) VAR_0;

    FUNC_3(10);
    for (int VAR_2 = 0; VAR_2 < 10; ++VAR_2) {
        const int VAR_3 = FUNC_2(VAR_1->path, 0, 0);
        FUNC_0(VAR_3, -1);
        FUNC_3(10);
        FUNC_0(FUNC_1(VAR_3), -1);
        FUNC_3(10);
    }
    FUNC_5(VAR_1->done);
    FUNC_4(((void*)0));
}
