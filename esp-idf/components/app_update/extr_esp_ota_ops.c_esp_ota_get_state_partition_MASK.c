
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;
struct TYPE_8__ {int ota_seq; scalar_t__ crc; int ota_state; } ;
typedef TYPE_2__ esp_ota_select_entry_t ;
typedef int esp_ota_img_states_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__ const*) ;
 int * FUNC_3 (TYPE_2__*) ;

esp_err_t FUNC_4(const esp_partition_t *VAR_5, esp_ota_img_states_t *VAR_6)
{
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    if (!FUNC_2(VAR_5)) {
        return VAR_2;
    }

    esp_ota_select_entry_t VAR_7[2];
    int VAR_8 = FUNC_1();
    if (FUNC_3(VAR_7) == ((void*)0) || VAR_8 == 0) {
        return VAR_1;
    }

    int VAR_9 = VAR_5->subtype - VAR_4;
    bool VAR_10 = 1;
    for (int VAR_11 = 0; VAR_11 < 2; ++VAR_11) {
        int VAR_12 = (VAR_7[VAR_11].ota_seq - 1) % VAR_8;
        if (VAR_12 == VAR_9 && VAR_7[VAR_11].crc == FUNC_0(&VAR_7[VAR_11])) {
            *VAR_6 = VAR_7[VAR_11].ota_state;
            VAR_10 = 0;
            break;
        }
    }

    if (VAR_10) {
        return VAR_1;
    }

    return VAR_3;
}
