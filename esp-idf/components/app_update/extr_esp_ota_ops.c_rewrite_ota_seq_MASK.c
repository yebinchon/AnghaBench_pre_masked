
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int esp_partition_t ;
struct TYPE_5__ {int crc; int ota_seq; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,int,int) ;
 scalar_t__ FUNC_2 (int const*,int,TYPE_1__*,int) ;

__attribute__((used)) static esp_err_t FUNC_3(esp_ota_select_entry_t *VAR_3, uint32_t VAR_4, uint8_t VAR_5, const esp_partition_t *VAR_6)
{
    if (VAR_3 == ((void*)0) || VAR_5 > 1) {
        return VAR_0;
    }

    VAR_3[VAR_5].ota_seq = VAR_4;
    VAR_3[VAR_5].crc = FUNC_0(&VAR_3[VAR_5]);
    esp_err_t VAR_7 = FUNC_1(VAR_6, VAR_5 * VAR_2, VAR_2);
    if (VAR_7 != VAR_1) {
        return VAR_7;
    } else {
        return FUNC_2(VAR_6, VAR_2 * VAR_5, &VAR_3[VAR_5], sizeof(esp_ota_select_entry_t));
    }
}
