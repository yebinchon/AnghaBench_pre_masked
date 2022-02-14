
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int exccause; int pc; } ;
typedef TYPE_1__ XtExcFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 char** VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

void FUNC_13(XtExcFrame *VAR_7)
{
    FUNC_6();
    FUNC_4();
    if (!VAR_5) {
        FUNC_10("Guru Meditation Error: Core ");
        FUNC_8(FUNC_12());
        FUNC_10(" panic'ed (");
        int VAR_8 = VAR_7->exccause;
        if (VAR_8 < VAR_4) {
            FUNC_10(VAR_6[VAR_8]);
        } else {
            FUNC_10("Unknown");
        }
        FUNC_10(")");
        if (FUNC_3()) {
            FUNC_10(" at pc=");
            FUNC_9(VAR_7->pc);
            FUNC_10(". Setting bp and returning..\r\n");
            FUNC_11(VAR_7->pc);
            return;
        }
        FUNC_10(". Exception was unhandled.\r\n");
        if (VAR_8 == 0 ) {
            FUNC_7(VAR_7);
        }
        FUNC_5(VAR_3);
    }
    FUNC_1(VAR_7);
}
