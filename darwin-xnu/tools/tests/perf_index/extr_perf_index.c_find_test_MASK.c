
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int binpath ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

int FUNC_5(char* VAR_2, char* VAR_3) {
    char VAR_4[VAR_1];
    char* VAR_5;
    uint32_t VAR_6 = sizeof(VAR_4);
    int VAR_7;

    VAR_7 = FUNC_0(VAR_4, &VAR_6);
    FUNC_2(VAR_7 == 0);
    VAR_5 = FUNC_3(VAR_4);

    FUNC_4(VAR_3, VAR_1, "%s/perfindex-%s.dylib", VAR_5, VAR_2);
    if(FUNC_1(VAR_3, VAR_0) == 0)
        return 0;
    else
        return -1;
}
