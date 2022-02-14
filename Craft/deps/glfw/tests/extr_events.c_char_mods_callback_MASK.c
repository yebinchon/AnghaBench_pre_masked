
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;


 int VAR_0 ;
 char* FUNC_0 (unsigned int) ;
 char* FUNC_1 (int) ;
 double FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int,double,unsigned int,char*,char*) ;

__attribute__((used)) static void FUNC_5(GLFWwindow* VAR_1, unsigned int VAR_2, int VAR_3)
{
    Slot* VAR_4 = FUNC_3(VAR_1);
    FUNC_4("%08x to %i at %0.3f: Character 0x%08x (%s) with modifiers (with%s) input\n",
            VAR_0++, VAR_4->number, FUNC_2(), VAR_2,
            FUNC_0(VAR_2),
            FUNC_1(VAR_3));
}
