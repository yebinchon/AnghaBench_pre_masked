
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int size; } ;
typedef TYPE_1__ esp_partition_t ;
struct TYPE_12__ {scalar_t__ crc; } ;
typedef TYPE_2__ esp_ota_select_entry_t ;
typedef int corrupt_ota_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__ const*,int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(corrupt_ota_data_t VAR_4)
{
    esp_ota_select_entry_t VAR_5[2];

    const esp_partition_t *VAR_6 = FUNC_3(VAR_3, VAR_2, ((void*)0));
    FUNC_0(((void*)0), VAR_6);
    FUNC_4(VAR_6, &VAR_5[0], &VAR_5[1]);

    if (VAR_4 & VAR_0) {
        VAR_5[0].crc = 0;
    }
    if (VAR_4 & VAR_1) {
        VAR_5[1].crc = 0;
    }
    FUNC_1(FUNC_2(VAR_6, 0, VAR_6->size));
    FUNC_5(VAR_6, &VAR_5[0], 0);
    FUNC_5(VAR_6, &VAR_5[1], 1);
}
