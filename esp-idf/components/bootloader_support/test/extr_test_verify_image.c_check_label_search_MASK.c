
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int label ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,char const*,char*) ;
 int FUNC_3 (char*,char const*,int) ;

void FUNC_4 (int VAR_0, const char *VAR_1, const char *VAR_2, bool VAR_3)
{



    char VAR_4[16 + 1] = {0};
    FUNC_3(VAR_4, VAR_2, sizeof(VAR_4) - 1);

    bool VAR_5 = FUNC_1(VAR_1, VAR_4);
    if (VAR_5 != VAR_3) {
        FUNC_2("%d) %s  |  %s \n", VAR_0, VAR_1, VAR_4);
    }
    FUNC_0(VAR_5 == VAR_3, "Test failed");
}
