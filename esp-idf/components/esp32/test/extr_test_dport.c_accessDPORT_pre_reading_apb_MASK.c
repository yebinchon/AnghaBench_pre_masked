
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_5)
{
    xSemaphoreHandle *VAR_6 = (xSemaphoreHandle *) VAR_5;
    uint32_t VAR_7 = FUNC_0(VAR_0);
    uint32_t VAR_8;
    VAR_2 = 1;
    VAR_4 = 0;

    while (VAR_3 == 0) {
        ++VAR_4;
        VAR_8 = FUNC_0(VAR_0);
        if (VAR_7 != VAR_8) {
            VAR_1 = 0;
            break;
        }
    }

    FUNC_2(*VAR_6);
    FUNC_1(((void*)0));
}
