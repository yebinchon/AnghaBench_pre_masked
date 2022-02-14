
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(void *VAR_5)
{
    xSemaphoreHandle *VAR_6 = (xSemaphoreHandle *) VAR_5;
    VAR_2 = 1;
    while (VAR_3 == 0) {
        FUNC_1();
        FUNC_3(2, FUNC_2());
        VAR_4 = 1;
        for (int VAR_7 = 0; VAR_7 < 200; ++VAR_7) {
            if (FUNC_4(VAR_0) != FUNC_4(VAR_0)) {
                VAR_1 = 0;
                break;
            }
        }
        VAR_4 = 0;
        FUNC_0();
    }
    FUNC_5("accessDPORT2_stall_other_cpu finish\n");

    FUNC_7(*VAR_6);
    FUNC_6(((void*)0));
}
