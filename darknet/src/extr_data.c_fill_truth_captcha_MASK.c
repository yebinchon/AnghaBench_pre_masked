
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;

void FUNC_4(char *VAR_1, int VAR_2, float *VAR_3)
{
    char *VAR_4 = FUNC_3(VAR_1, '/');
    ++VAR_4;
    int VAR_5;
    for(VAR_5 = 0; VAR_5 < FUNC_2(VAR_4) && VAR_5 < VAR_2 && VAR_4[VAR_5] != '.'; ++VAR_5){
        int VAR_6 = FUNC_0(VAR_4[VAR_5]);
        if(VAR_6 > 35) FUNC_1("Bad %c\n", VAR_4[VAR_5]);
        VAR_3[VAR_5*VAR_0+VAR_6] = 1;
    }
    for(;VAR_5 < VAR_2; ++VAR_5){
        VAR_3[VAR_5*VAR_0 + VAR_0-1] = 1;
    }
}
