
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_6(void)
{
    VAR_3 = FUNC_5();
    if (VAR_3 != ((void*)0)) {
        err_t VAR_4;




        VAR_4 = FUNC_3(VAR_3, VAR_1, 4242);
        if (VAR_4 == VAR_0) {
            VAR_3 = FUNC_4(VAR_3);
            FUNC_2(VAR_3, VAR_2);
        } else {
            FUNC_1("cannot bind test_pcb\n");
            FUNC_0();
        }
    } else {
        FUNC_1("cannot create test_pcb\n");
        FUNC_0();
    }
}
