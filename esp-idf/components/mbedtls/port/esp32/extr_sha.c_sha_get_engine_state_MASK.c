
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int esp_sha_type ;
typedef int * SemaphoreHandle_t ;


 int FUNC_0 (int ) ;
 int ** VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ volatile*,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static SemaphoreHandle_t FUNC_6(esp_sha_type VAR_1)
{
    unsigned VAR_2 = FUNC_1(VAR_1);
    volatile SemaphoreHandle_t *VAR_3 = &VAR_0[VAR_2];
    SemaphoreHandle_t VAR_4 = *VAR_3;
    uint32_t VAR_5 = 0;

    if (VAR_4 == ((void*)0)) {

        SemaphoreHandle_t VAR_6 = FUNC_4();
        FUNC_0(VAR_6 != ((void*)0));
        FUNC_5(VAR_6);


        VAR_5 = (uint32_t)VAR_6;
        FUNC_2((volatile uint32_t *)VAR_3, 0, &VAR_5);

        if (VAR_5 != 0) {
            FUNC_3(VAR_6);
        }
        VAR_4 = *VAR_3;
    }
    return VAR_4;
}
