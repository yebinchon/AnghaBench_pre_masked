
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int closeable; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;



 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 double FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static void FUNC_6(GLFWwindow* VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    Slot* VAR_7 = FUNC_4(VAR_2);

    FUNC_5("%08x to %i at %0.3f: Key 0x%04x Scancode 0x%04x (%s) (with%s) was %s\n",
           VAR_1++, VAR_7->number, FUNC_3(), VAR_3, VAR_4,
           FUNC_1(VAR_3),
           FUNC_2(VAR_6),
           FUNC_0(VAR_5));

    if (VAR_5 != VAR_0)
        return;

    switch (VAR_3)
    {
        case 128:
        {
            VAR_7->closeable = !VAR_7->closeable;

            FUNC_5("(( closing %s ))\n", VAR_7->closeable ? "enabled" : "disabled");
            break;
        }
    }
}
