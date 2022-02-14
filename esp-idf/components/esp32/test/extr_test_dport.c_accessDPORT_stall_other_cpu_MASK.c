
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_5)
{
    xSemaphoreHandle *VAR_6 = (xSemaphoreHandle *) VAR_5;
    uint32_t VAR_7 = FUNC_0(VAR_0);
    uint32_t VAR_8;
    VAR_2 = 1;
    VAR_4 = 0;

    while (VAR_3 == 0) {
        ++VAR_4;
        FUNC_2();
        VAR_8 = FUNC_3(VAR_0);
        FUNC_1();
        if (VAR_7 != VAR_8) {
            VAR_1 = 0;
            break;
        }
    }

    FUNC_5(*VAR_6);
    FUNC_4(((void*)0));
}
