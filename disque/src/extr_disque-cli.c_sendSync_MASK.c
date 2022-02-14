
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int VAR_0 ;
 unsigned long long FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int,char*,int) ;

unsigned long long FUNC_6(int VAR_1) {




    char VAR_2[4096], *VAR_3;
    ssize_t VAR_4;


    if (FUNC_5(VAR_1,"SYNC\r\n",6) != 6) {
        FUNC_1(VAR_0,"Error writing to master\n");
        FUNC_0(1);
    }


    VAR_3 = VAR_2;
    while(1) {
        VAR_4 = FUNC_3(VAR_1,VAR_3,1);
        if (VAR_4 <= 0) {
            FUNC_1(VAR_0,"Error reading bulk length while SYNCing\n");
            FUNC_0(1);
        }
        if (*VAR_3 == '\n' && VAR_3 != VAR_2) break;
        if (*VAR_3 != '\n') VAR_3++;
    }
    *VAR_3 = '\0';
    if (VAR_2[0] == '-') {
        FUNC_2("SYNC with master failed: %s\n", VAR_2);
        FUNC_0(1);
    }
    return FUNC_4(VAR_2+1,((void*)0),10);
}
