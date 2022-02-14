
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int sds ;


 int FUNC_0 (struct rewriteConfigState*,char*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(struct rewriteConfigState *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3) {
    int VAR_4 = 1;
    sds VAR_5;



    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0,VAR_1);
        return;
    }


    if (VAR_3 && FUNC_5(VAR_2,VAR_3) == 0) VAR_4 = 0;

    VAR_5 = FUNC_4(VAR_1);
    VAR_5 = FUNC_2(VAR_5, " ", 1);
    VAR_5 = FUNC_3(VAR_5, VAR_2, FUNC_6(VAR_2));

    FUNC_1(VAR_0,VAR_1,VAR_5,VAR_4);
}
