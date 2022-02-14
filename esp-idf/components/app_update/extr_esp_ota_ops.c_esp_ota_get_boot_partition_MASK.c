
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_partition_t ;
struct TYPE_5__ {int ota_seq; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int const* FUNC_4 (int ,int,int *) ;
 int const* FUNC_5 () ;
 int FUNC_6 () ;
 int * FUNC_7 (TYPE_1__*) ;

const esp_partition_t *FUNC_8(void)
{
    esp_ota_select_entry_t VAR_3[2];
    const esp_partition_t *VAR_4 = FUNC_7(VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    int VAR_5 = FUNC_6();
    FUNC_0(VAR_2, "found ota app max = %d", VAR_5);

    if ((FUNC_3(&VAR_3[0]) &&
         FUNC_3(&VAR_3[1])) ||
         VAR_5 == 0) {
        FUNC_0(VAR_2, "finding factory app...");
        return FUNC_5();
    } else {
        int VAR_6 = FUNC_2(VAR_3);
        if (VAR_6 != -1) {
            int VAR_7 = (VAR_3[VAR_6].ota_seq - 1) % VAR_5;
            FUNC_0(VAR_2, "finding ota_%d app...", VAR_0 + VAR_7);
            return FUNC_4(VAR_1, VAR_0 + VAR_7, ((void*)0));
        } else {
            FUNC_1(VAR_2, "ota data invalid, no current app. Assuming factory");
            return FUNC_5();
        }
    }
}
