
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) () ;} ;
struct TYPE_3__ {int (* cleanup ) () ;} ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
    VAR_1 = 0;
    FUNC_0();

    VAR_3->cleanup();


    VAR_0->close();

    FUNC_1(VAR_2);
    VAR_2 = ((void*)0);
}
