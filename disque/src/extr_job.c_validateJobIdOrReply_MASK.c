
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int client ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t) ;

int FUNC_3(client *VAR_1, char *VAR_2, size_t VAR_3) {
    int VAR_4 = FUNC_2(VAR_2,VAR_3);
    if (VAR_4 == VAR_0 && VAR_1)
        FUNC_0(VAR_1,FUNC_1("-BADID Invalid Job ID format.\r\n"));
    return VAR_4;
}
