
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;

void FUNC_2(const char *VAR_0, char *VAR_1, char *VAR_2)
{


    static char VAR_3[1024 + 1];

    char *VAR_4;

    FUNC_0(VAR_3, VAR_0, 1024);

    VAR_4 = FUNC_1(VAR_3, '/');


    if (!VAR_4)
        VAR_4 = FUNC_1(VAR_3, (int)'\\');


    if (VAR_4 != ((void*)0)) {

        VAR_4[0] = 0;

        FUNC_0(VAR_1, VAR_3, 1024);
        VAR_1[255] = 0;


        FUNC_0(VAR_2, VAR_4 + 1, 128);
        VAR_2[128] = 0;
    } else {
        VAR_1[0] = 0;

        FUNC_0(VAR_2, VAR_3, 128);
        VAR_2[128] = 0;
    }
}
