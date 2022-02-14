
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delete_done; int timer; int delete_start; } ;
typedef TYPE_1__ timer_delete_test_args_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_1)
{
    timer_delete_test_args_t* VAR_2 = (timer_delete_test_args_t*) VAR_1;
    FUNC_4(VAR_2->delete_start, VAR_0);
    FUNC_1("Deleting the timer\n");
    FUNC_0(VAR_2->timer);
    FUNC_1("Timer deleted\n");
    FUNC_3(VAR_2->delete_done);
    FUNC_2(((void*)0));
}
