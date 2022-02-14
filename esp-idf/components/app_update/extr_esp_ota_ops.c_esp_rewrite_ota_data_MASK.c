
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_partition_t ;
typedef int esp_partition_subtype_t ;
struct TYPE_5__ {int ota_seq; void* ota_state; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int const*) ;
 void* FUNC_5 () ;

__attribute__((used)) static esp_err_t FUNC_6(esp_partition_subtype_t VAR_2)
{
    esp_ota_select_entry_t VAR_3[2];
    const esp_partition_t *VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    int VAR_5 = FUNC_2();
    if (FUNC_0(VAR_2) >= VAR_5) {
        return VAR_0;
    }
    int VAR_6 = FUNC_1(VAR_3);
    if (VAR_6 != -1) {
        uint32_t VAR_7 = VAR_3[VAR_6].ota_seq;
        uint32_t VAR_8 = 0;
        while (VAR_7 > (FUNC_0(VAR_2) + 1) % VAR_5 + VAR_8 * VAR_5) {
            VAR_8++;
        }
        int VAR_9 = (~VAR_6)&1;
        VAR_3[VAR_9].ota_state = FUNC_5();
        return FUNC_4(VAR_3, (FUNC_0(VAR_2) + 1) % VAR_5 + VAR_8 * VAR_5, VAR_9, VAR_4);
    } else {

        int VAR_10 = 0;
        VAR_3[VAR_10].ota_state = FUNC_5();
        return FUNC_4(VAR_3, FUNC_0(VAR_2) + 1, VAR_10, VAR_4);
    }
}
