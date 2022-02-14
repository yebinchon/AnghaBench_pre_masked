
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SemaphoreHandle_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void* VAR_1)
{
    FUNC_3(2);
    for (int VAR_2 = 0; VAR_2 < 1000; ++VAR_2) {
        FUNC_2("%d %d\n", FUNC_5(), VAR_2);
        FUNC_1(VAR_0);
        FUNC_0();
    }
    SemaphoreHandle_t VAR_3 = (SemaphoreHandle_t) VAR_1;
    FUNC_6(VAR_3);
    FUNC_4(((void*)0));
}
