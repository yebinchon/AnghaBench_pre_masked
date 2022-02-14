
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ VAR_9 ;

void FUNC_5() {
    if (!VAR_1) {
        return;
    }
    VAR_8 = 1;
    VAR_5 = (char *)FUNC_0(VAR_0, sizeof(char));
    VAR_4 = 0;
    FUNC_2(&VAR_3, VAR_2);
    if (FUNC_4(&VAR_6, VAR_7, ((void*)0)) != VAR_9) {
        FUNC_3("thrd_create");
        FUNC_1(1);
    }
}
