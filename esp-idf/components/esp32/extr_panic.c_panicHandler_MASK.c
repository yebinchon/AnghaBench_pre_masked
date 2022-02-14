
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t exccause; int pc; } ;
typedef TYPE_1__ XtExcFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 TYPE_1__* VAR_17 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;

void FUNC_17(XtExcFrame *VAR_18)
{
    int VAR_19 = FUNC_15();

    const char *VAR_20[] = {
        "Unknown reason",
        "Unhandled debug exception",
        "Double exception",
        "Unhandled kernel exception",
        "Coprocessor exception",
        "Interrupt wdt timeout on CPU0",
        "Interrupt wdt timeout on CPU1",
        "Cache disabled but cached memory region accessed",
    };
    const char *VAR_21 = VAR_20[0];

    if (VAR_18->exccause <= VAR_8) {
        VAR_21 = VAR_20[VAR_18->exccause];
    }



    if ((VAR_18->exccause == VAR_6 && VAR_19 == 1) || (VAR_18->exccause == VAR_7 && VAR_19 == 0)) {
        VAR_17 = VAR_18;
        while (1);
    }


    if (VAR_18->exccause == VAR_6 || VAR_18->exccause == VAR_7) {
        FUNC_8(1);
    }

    if (VAR_18->exccause == VAR_4 && FUNC_4() != VAR_19) {


        while (1);
    }


    if (VAR_18->exccause == VAR_6 || VAR_18->exccause == VAR_7) {
        FUNC_7(VAR_3);
    }

    FUNC_9();
    FUNC_6();
    FUNC_11("Guru Meditation Error: Core ");
    FUNC_10(VAR_19);
    FUNC_11(" panic'ed (");
    FUNC_11(VAR_21);
    FUNC_11(")\r\n");
    if (VAR_18->exccause == VAR_5) {
        int VAR_22;
        asm("rsr.debugcause %0":"=r"(VAR_22));
        FUNC_11("Debug exception reason: ");
        if (VAR_22 & VAR_16) {
            FUNC_11("SingleStep ");
        }
        if (VAR_22 & VAR_15) {
            FUNC_11("HwBreakpoint ");
        }
        if (VAR_22 & VAR_13) {



            if (VAR_22 & (1 << 8)) {






                FUNC_11("Watchpoint 1 triggered ");

            } else {
                FUNC_11("Watchpoint 0 triggered ");
            }
        }
        if (VAR_22 & VAR_12) {
            FUNC_11("BREAK instr ");
        }
        if (VAR_22 & VAR_11) {
            FUNC_11("BREAKN instr ");
        }
        if (VAR_22 & VAR_14) {
            FUNC_11("DebugIntr ");
        }
        FUNC_11("\r\n");
    }

    if (FUNC_5()) {
        FUNC_2();
        if (VAR_18->exccause == VAR_6 ||
            VAR_18->exccause == VAR_7) {
            FUNC_14(VAR_9, VAR_10);
        }
        FUNC_13(VAR_18->pc);
        return;
    }
    FUNC_1(VAR_18);
}
