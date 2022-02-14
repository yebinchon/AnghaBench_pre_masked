
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;
typedef int cbuf ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

size_t FUNC_2(rio *VAR_0, char VAR_1, int VAR_2) {
    char VAR_3[128];
    int VAR_4;

    VAR_3[0] = VAR_1;
    VAR_4 = 1+FUNC_0(VAR_3+1,sizeof(VAR_3)-1,VAR_2);
    VAR_3[VAR_4++] = '\r';
    VAR_3[VAR_4++] = '\n';
    if (FUNC_1(VAR_0,VAR_3,VAR_4) == 0) return 0;
    return VAR_4;
}
