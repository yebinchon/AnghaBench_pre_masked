
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int test_done; int delete_done; int delete_start; } ;
typedef TYPE_1__ timer_delete_test_args_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_1)
{
    timer_delete_test_args_t* VAR_2 = (timer_delete_test_args_t*) VAR_1;
    FUNC_0("Timer callback called\n");
    FUNC_1(VAR_2->delete_start);
    FUNC_2(VAR_2->delete_done, VAR_0);
    FUNC_0("Callback complete\n");
    FUNC_1(VAR_2->test_done);
}
