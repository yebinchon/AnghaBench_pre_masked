
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filepath ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(char* VAR_2, int VAR_3, long long VAR_4) {
    char VAR_5[VAR_0];
    int VAR_6;

    FUNC_1(VAR_5, sizeof(VAR_5), "%s/file_read", VAR_2);
    VAR_6 = FUNC_2(VAR_5);
    FUNC_0(VAR_6 == 0, "unlink failed");

    return VAR_1;
}
