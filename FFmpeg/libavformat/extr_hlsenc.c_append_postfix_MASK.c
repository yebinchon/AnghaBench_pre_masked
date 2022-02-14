
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extension ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(char *VAR_1, int VAR_2, int VAR_3)
{
    char *VAR_4;
    char VAR_5[10] = {'\0'};

    VAR_4 = FUNC_4(VAR_1, '.');
    if (VAR_4) {
        FUNC_1(VAR_5, VAR_4, sizeof(VAR_5));
        *VAR_4 = '\0';
    }

    FUNC_2(VAR_1 + FUNC_3(VAR_1), VAR_2 - FUNC_3(VAR_1), VAR_0, VAR_3);

    if (FUNC_3(VAR_5))
        FUNC_0(VAR_1, VAR_5, VAR_2);

    return 0;
}
