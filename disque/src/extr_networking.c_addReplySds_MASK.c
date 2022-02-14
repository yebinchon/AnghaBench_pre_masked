
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(client *VAR_1, sds VAR_2) {
    if (FUNC_2(VAR_1) != VAR_0) {

        FUNC_3(VAR_2);
        return;
    }
    if (FUNC_1(VAR_1,VAR_2,FUNC_4(VAR_2)) == VAR_0) {
        FUNC_3(VAR_2);
    } else {

        FUNC_0(VAR_1,VAR_2);
    }
}
