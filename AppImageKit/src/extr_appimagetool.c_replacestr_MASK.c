
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    char *VAR_3 = ((void*)0);

    if ((VAR_3 = FUNC_3(VAR_0, VAR_1)) == ((void*)0)) {
        return;
    }
    int VAR_4 = FUNC_2(VAR_1);
    int VAR_5 = FUNC_2(VAR_2);
    int VAR_6 = FUNC_2(VAR_3+VAR_4);

    FUNC_1(VAR_3+VAR_5,VAR_3+VAR_4,VAR_6+1);
    FUNC_0(VAR_3, VAR_2, VAR_5);



    if ((VAR_3 = FUNC_3(VAR_0, VAR_1))) {
        FUNC_4(VAR_0, VAR_1, VAR_2);
    }
}
