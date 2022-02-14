
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int esp_pthread_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

pthread_t FUNC_5(void)
{
    if (FUNC_3(VAR_2, VAR_1) != VAR_0) {
        FUNC_0(0 && "Failed to lock threads list!");
    }
    esp_pthread_t *VAR_3 = FUNC_1(FUNC_4());
    if (!VAR_3) {
        FUNC_0(0 && "Failed to find current thread ID!");
    }
    FUNC_2(VAR_2);
    return (pthread_t)VAR_3;
}
