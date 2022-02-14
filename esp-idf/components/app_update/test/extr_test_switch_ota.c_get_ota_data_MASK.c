
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ address; scalar_t__ size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_select_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_4(const esp_partition_t *VAR_1, esp_ota_select_entry_t *VAR_2, esp_ota_select_entry_t *VAR_3)
{
    uint32_t VAR_4 = VAR_1->address;
    uint32_t VAR_5 = VAR_1->size;
    if (VAR_4 != 0) {
        const esp_ota_select_entry_t *VAR_6;
        VAR_6 = FUNC_1(VAR_4, VAR_5);
        FUNC_0(((void*)0), VAR_6);

        FUNC_3(VAR_2, VAR_6, sizeof(esp_ota_select_entry_t));
        FUNC_3(VAR_3, (uint8_t *)VAR_6 + VAR_0, sizeof(esp_ota_select_entry_t));
        FUNC_2(VAR_6);
    }
}
