
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *,int) ;

__attribute__((used)) static sds FUNC_6(void) {
    sds VAR_1;
    VAR_1 = FUNC_3(FUNC_4(), "%s", VAR_0);


    if (FUNC_5(FUNC_1(),((void*)0),16)) {
        VAR_1 = FUNC_3(VAR_1, " (git:%s", FUNC_1());
        if (FUNC_5(FUNC_0(),((void*)0),10))
            VAR_1 = FUNC_3(VAR_1, "-dirty");
        VAR_1 = FUNC_2(VAR_1, ")");
    }
    return VAR_1;
}
