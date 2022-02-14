
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ exccause; } ;
typedef TYPE_1__ XtExcFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int * VAR_9 ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;

__attribute__((used)) static __attribute__((noreturn)) void FUNC_22(XtExcFrame *VAR_10)
{

    int VAR_11 = FUNC_21();

    if (!FUNC_13()) {
        FUNC_14();
        FUNC_11();
        FUNC_16(VAR_8, VAR_5);
        FUNC_16(VAR_4, VAR_5);
        FUNC_17(VAR_6, VAR_7);


        FUNC_18(VAR_6, 7000);
        FUNC_12();
        FUNC_15();
    }


    FUNC_10();

    FUNC_1(VAR_10, VAR_11);

    if (VAR_9 != ((void*)0)) {
        FUNC_1((XtExcFrame *)VAR_9, (VAR_11 ? 0 : 1));
    }
    if (!FUNC_19()) {
        FUNC_20(VAR_11);
        FUNC_9("Re-enable cpu cache.\r\n");
    }
    FUNC_11();
    FUNC_2();
    FUNC_9("CPU halted.\r\n");
    while (1);


}
