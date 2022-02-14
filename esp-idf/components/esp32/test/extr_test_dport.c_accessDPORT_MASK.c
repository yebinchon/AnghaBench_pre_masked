
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
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
    xSemaphoreHandle *VAR_4 = (xSemaphoreHandle *) VAR_3;
    uint32_t VAR_5 = FUNC_0(VAR_0);

    VAR_1 = 1;


    while (VAR_2 == 0) {
        if (VAR_5 != FUNC_0(VAR_0)) {
            VAR_1 = 0;
            break;
        }
    }

    FUNC_2(*VAR_4);
    FUNC_1(((void*)0));
}
