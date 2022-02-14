
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;
typedef int dbuf ;
typedef int client ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (char*,int,char*,int,...) ;

void FUNC_4(client *VAR_0, double VAR_1) {
    char VAR_2[128], VAR_3[128];
    int VAR_4, VAR_5;
    if (FUNC_2(VAR_1)) {


        FUNC_0(VAR_0, VAR_1 > 0 ? "inf" : "-inf");
    } else {
        VAR_4 = FUNC_3(VAR_2,sizeof(VAR_2),"%.17g",VAR_1);
        VAR_5 = FUNC_3(VAR_3,sizeof(VAR_3),"$%d\r\n%s\r\n",VAR_4,VAR_2);
        FUNC_1(VAR_0,VAR_3,VAR_5);
    }
}
