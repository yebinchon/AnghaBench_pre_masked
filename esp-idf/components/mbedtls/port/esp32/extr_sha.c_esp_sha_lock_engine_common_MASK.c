
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_sha_type ;
typedef int TickType_t ;
typedef int SemaphoreHandle_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(esp_sha_type VAR_4, TickType_t VAR_5)
{
    SemaphoreHandle_t VAR_6 = FUNC_4(VAR_4);
    BaseType_t VAR_7 = FUNC_5(VAR_6, VAR_5);

    if (VAR_7 == VAR_3) {

        return 0;
    }

    FUNC_2(&VAR_2);

    if (VAR_1 == 0) {


        FUNC_1(VAR_0);
    }

    VAR_1++;
    FUNC_0(VAR_1 <= 3);

    FUNC_3(&VAR_2);

    return 1;
}
