
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int*,scalar_t__,int) ;
 int FUNC_5 (int *,char const*,scalar_t__,int) ;
 TYPE_1__* FUNC_6 () ;

void FUNC_7(esp_flash_t *VAR_2)
{
    FUNC_0(VAR_1, "Testing chip %p...", VAR_2);

    const esp_partition_t *VAR_3 = FUNC_6();


    const char *VAR_4 = "OHAI";
    uint32_t VAR_5;
    FUNC_1(VAR_0, FUNC_5(VAR_2, VAR_4, VAR_3->address, 5));
    FUNC_1(VAR_0, FUNC_5(VAR_2, VAR_4, VAR_3->address + VAR_3->size - 5, 5));


    uint32_t VAR_6 = *((const uint32_t *)VAR_4);
    FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_5, VAR_3->address + VAR_3->size - 5, 4));
    FUNC_2(0, VAR_5 & (~VAR_6));
    FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_5, VAR_3->address, 4));
    FUNC_2(0, VAR_5 & (~VAR_6));


    FUNC_1(VAR_0, FUNC_3(VAR_2, VAR_3->address, VAR_3->size));


    FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_5, VAR_3->address, 4));
    FUNC_2(0xFFFFFFFF, VAR_5);

    FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_5, VAR_3->address + VAR_3->size - 5, 4));
    FUNC_2(0xFFFFFFFF, VAR_5);
}
