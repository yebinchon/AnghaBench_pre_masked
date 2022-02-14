
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exccause; int pc; } ;
typedef TYPE_1__ XtExcFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 char** VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

void FUNC_10(XtExcFrame *VAR_6)
{
    FUNC_4();
    if (!VAR_4) {
        FUNC_7("Guru Meditation Error: Core ");
        FUNC_5(FUNC_9());
        FUNC_7(" panic'ed (");
        int VAR_7 = VAR_6->exccause;
        if (VAR_7 < VAR_3) {
            FUNC_7(VAR_5[VAR_7]);
        } else {
            FUNC_7("Unknown");
        }
        FUNC_7(")");
        FUNC_7(". Exception was unhandled.\r\n");
    }
    FUNC_1(VAR_6);
}
