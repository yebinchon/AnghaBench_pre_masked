
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,int ,char*) ;

void FUNC_7(const char *VAR_3)
{
    int VAR_4 = FUNC_3(VAR_3, VAR_2 | VAR_0 | VAR_1);
    FUNC_1(-1, VAR_4);
    FUNC_0(0, FUNC_2(VAR_4));

    FUNC_6(VAR_3, 0, "Hello");
    FUNC_5(VAR_3, "Hello");

    FUNC_6(VAR_3, FUNC_4("Hello"), ", world!");
    FUNC_5(VAR_3, "Hello, world!");
    FUNC_6(VAR_3, FUNC_4("Hello, "), "Dolly");
    FUNC_5(VAR_3, "Hello, Dolly!");
}
