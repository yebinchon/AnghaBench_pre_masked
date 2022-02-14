
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int todo_before_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_3 ;

void FUNC_2(void) {

    if (VAR_3.cluster->todo_before_sleep & VAR_2)
        FUNC_1();


    if (VAR_3.cluster->todo_before_sleep & VAR_1) {
        int VAR_4 = VAR_3.cluster->todo_before_sleep &
                    VAR_0;
        FUNC_0(VAR_4);
    }



    VAR_3.cluster->todo_before_sleep = 0;
}
