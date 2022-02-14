
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_partition_t ;
struct TYPE_4__ {int ota_seq; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 int * FUNC_5 (TYPE_1__*) ;

const esp_partition_t* FUNC_6(void)
{
    esp_ota_select_entry_t VAR_5[2];
    if (FUNC_5(VAR_5) == ((void*)0)) {
        return ((void*)0);
    }

    int VAR_6 = FUNC_2(VAR_5);

    int VAR_7 = FUNC_3();
    if (VAR_6 != -1 && VAR_7 != 0) {
        int VAR_8 = (VAR_5[VAR_6].ota_seq - 1) % VAR_7;
        FUNC_0(VAR_4, "Find invalid ota_%d app", VAR_2 + VAR_8);

        const esp_partition_t* VAR_9 = FUNC_1(VAR_3, VAR_2 + VAR_8, ((void*)0));
        if (VAR_9 != ((void*)0)) {
            if (FUNC_4(VAR_9, VAR_0) != VAR_1) {
                FUNC_0(VAR_4, "Last invalid partition has corrupted app");
                return ((void*)0);
            }
        }
        return VAR_9;
    }
    return ((void*)0);
}
