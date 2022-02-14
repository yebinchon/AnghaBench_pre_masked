
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ bootloader_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

void __attribute__((noreturn)) FUNC_5(void)
{

    if (FUNC_0() != VAR_0) {
        FUNC_1();
    }
    bootloader_state_t VAR_2 = { 0 };
    int VAR_3 = FUNC_4(&VAR_2);
    if (VAR_3 == VAR_1) {
        FUNC_1();
    }


    FUNC_2(&VAR_2, VAR_3);
}
