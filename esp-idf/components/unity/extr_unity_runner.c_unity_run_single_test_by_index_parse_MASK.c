
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int *,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(const char *VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_7(VAR_0, ((void*)0), 10);
    if (VAR_2 >= 1 && VAR_2 <= VAR_1) {
        FUNC_1();
        FUNC_8(VAR_2 - 1);
        FUNC_2();
        FUNC_5("Test ran in ");
        FUNC_6(FUNC_0());
        FUNC_5("ms");
        FUNC_4();
        FUNC_3();
    }
}
