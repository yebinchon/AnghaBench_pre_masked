
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int option_to_line; } ;
typedef int sds ;
typedef int list ;


 int FUNC_0 (int ,int ,int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,void*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(struct rewriteConfigState *VAR_0, sds VAR_1, int VAR_2) {
    list *VAR_3 = FUNC_1(VAR_0->option_to_line,VAR_1);

    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_3();
        FUNC_0(VAR_0->option_to_line,FUNC_4(VAR_1),VAR_3);
    }
    FUNC_2(VAR_3,(void*)(long)VAR_2);
}
