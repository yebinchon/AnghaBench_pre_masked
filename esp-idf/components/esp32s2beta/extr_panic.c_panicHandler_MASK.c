
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t exccause; int pc; } ;
typedef TYPE_2__ XtExcFrame ;
struct TYPE_7__ {int wdt; } ;
struct TYPE_9__ {TYPE_1__ int_clr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int ) ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 TYPE_2__* VAR_15 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

void FUNC_15(XtExcFrame *VAR_16)
{
    int VAR_17 = FUNC_13();

    const char *VAR_18[] = {
        "Unknown reason",
        "Unhandled debug exception",
        "Double exception",
        "Unhandled kernel exception",
        "Coprocessor exception",
        "Interrupt wdt timeout on CPU0",
        "Interrupt wdt timeout on CPU1",
        "Cache exception",
    };
    const char *VAR_19 = VAR_18[0];

    if (VAR_16->exccause <= VAR_7) {
        VAR_19 = VAR_18[VAR_16->exccause];
    }



    if ((VAR_16->exccause == VAR_5 && VAR_17 == 1) || (VAR_16->exccause == VAR_6 && VAR_17 == 0)) {
        VAR_15 = VAR_16;
        while (1);
    }


    if (VAR_16->exccause == VAR_5 || VAR_16->exccause == VAR_6) {
        FUNC_6(1);
    }

    if (VAR_16->exccause == VAR_3 && FUNC_4() != VAR_17) {


        while (1);
    }


    FUNC_7();
    FUNC_9("Guru Meditation Error: Core ");
    FUNC_8(VAR_17);
    FUNC_9(" panic'ed (");
    FUNC_9(VAR_19);
    FUNC_9(")\r\n");
    if (VAR_16->exccause == VAR_4) {
        int VAR_20;
        asm("rsr.debugcause %0":"=r"(VAR_20));
        FUNC_9("Debug exception reason: ");
        if (VAR_20 & VAR_14) {
            FUNC_9("SingleStep ");
        }
        if (VAR_20 & VAR_13) {
            FUNC_9("HwBreakpoint ");
        }
        if (VAR_20 & VAR_11) {



            if (VAR_20 & (1 << 8)) {






                FUNC_9("Watchpoint 1 triggered ");

            } else {
                FUNC_9("Watchpoint 0 triggered ");
            }
        }
        if (VAR_20 & VAR_10) {
            FUNC_9("BREAK instr ");
        }
        if (VAR_20 & VAR_9) {
            FUNC_9("BREAKN instr ");
        }
        if (VAR_20 & VAR_12) {
            FUNC_9("DebugIntr ");
        }
        FUNC_9("\r\n");
    } else if (VAR_16->exccause == VAR_3) {
        FUNC_9("                                         ^~~~~~~~~~~~~~~\r\n");
        FUNC_11();
    }

    if (FUNC_5()) {
        FUNC_2();
        if (VAR_16->exccause == VAR_5 ||
            VAR_16->exccause == VAR_6) {
            VAR_8 = 1;
        }
        FUNC_12(VAR_16->pc);
        return;
    }
    FUNC_1(VAR_16);
}
