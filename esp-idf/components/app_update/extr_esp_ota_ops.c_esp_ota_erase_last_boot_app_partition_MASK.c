
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
struct TYPE_11__ {int ota_seq; scalar_t__ crc; } ;
typedef TYPE_2__ esp_ota_select_entry_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,int,int) ;
 TYPE_1__* FUNC_5 (int ,scalar_t__,int *) ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;

esp_err_t FUNC_8(void)
{
    esp_ota_select_entry_t VAR_7[2];
    const esp_partition_t* VAR_8 = FUNC_7(VAR_7);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    int VAR_9 = FUNC_1(VAR_7);
    int VAR_10 = FUNC_6();
    if (VAR_9 == -1 || VAR_10 == 0) {
        return VAR_0;
    }

    int VAR_11 = (~VAR_9)&1;
    if (VAR_7[VAR_11].ota_seq == VAR_6 || VAR_7[VAR_11].crc != FUNC_2(&VAR_7[VAR_11])) {
        return VAR_0;
    }

    int VAR_12 = (VAR_7[VAR_11].ota_seq - 1) % VAR_10;
    FUNC_0(VAR_5, "finding last_boot_app_partition ota_%d app...", VAR_2 + VAR_12);

    const esp_partition_t* VAR_13 = FUNC_5(VAR_3, VAR_2 + VAR_12, ((void*)0));
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    const esp_partition_t* VAR_14 = FUNC_3();
    if (VAR_14 == ((void*)0) || VAR_13 == VAR_14) {
        return VAR_0;
    }

    esp_err_t VAR_15 = FUNC_4(VAR_13, 0, VAR_13->size);
    if (VAR_15 != VAR_1) {
        return VAR_15;
    }

    int VAR_16 = VAR_11;
    VAR_15 = FUNC_4(VAR_8, VAR_16 * VAR_4, VAR_4);
    if (VAR_15 != VAR_1) {
        return VAR_15;
    }

    return VAR_1;
}
