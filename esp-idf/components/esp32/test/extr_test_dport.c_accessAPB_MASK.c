
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
    xSemaphoreHandle *VAR_3 = (xSemaphoreHandle *) VAR_2;
    uint32_t VAR_4 = FUNC_0(FUNC_1(0));

    VAR_0 = 1;


    while (VAR_1 == 0) {
        if (VAR_4 != FUNC_0(FUNC_1(0))) {
            VAR_0 = 0;
            break;
        }
    }

    FUNC_3(*VAR_3);
    FUNC_2(((void*)0));
}
