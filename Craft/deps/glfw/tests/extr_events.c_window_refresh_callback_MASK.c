
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 double FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int,double) ;

__attribute__((used)) static void FUNC_6(GLFWwindow* VAR_2)
{
    Slot* VAR_3 = FUNC_2(VAR_2);
    FUNC_5("%08x to %i at %0.3f: Window refresh\n",
           VAR_1++, VAR_3->number, FUNC_1());

    FUNC_3(VAR_2);
    FUNC_0(VAR_0);
    FUNC_4(VAR_2);
}
