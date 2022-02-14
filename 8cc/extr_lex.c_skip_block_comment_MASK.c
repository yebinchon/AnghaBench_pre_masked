
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Pos ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3() {
    Pos VAR_1 = FUNC_1(-2);
    bool VAR_2 = 0;
    for (;;) {
        int VAR_3 = FUNC_2();
        if (VAR_3 == VAR_0)
            FUNC_0(VAR_1, "premature end of block comment");
        if (VAR_3 == '/' && VAR_2)
            return;
        VAR_2 = (VAR_3 == '*');
    }
}
