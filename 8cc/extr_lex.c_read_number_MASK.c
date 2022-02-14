
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Token ;
typedef int Buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static Token *FUNC_9(char VAR_0) {
    Buffer *VAR_1 = FUNC_4();
    FUNC_1(VAR_1, VAR_0);
    char VAR_2 = VAR_0;
    for (;;) {
        int VAR_3 = FUNC_6();
        bool VAR_4 = FUNC_7("eEpP", VAR_2) && FUNC_7("+-", VAR_3);
        if (!FUNC_3(VAR_3) && !FUNC_2(VAR_3) && VAR_3 != '.' && !VAR_4) {
            FUNC_8(VAR_3);
            FUNC_1(VAR_1, '\0');
            return FUNC_5(FUNC_0(VAR_1));
        }
        FUNC_1(VAR_1, VAR_3);
        VAR_2 = VAR_3;
    }
}
