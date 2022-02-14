
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_partition_t ;
struct TYPE_5__ {scalar_t__ ota_state; int ota_seq; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int * FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int,int const*) ;

__attribute__((used)) static esp_err_t FUNC_10(bool VAR_7)
{
    esp_ota_select_entry_t VAR_8[2];
    const esp_partition_t *VAR_9 = FUNC_8(VAR_8);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    int VAR_10 = FUNC_3(VAR_8);
    if (VAR_10 != -1 && FUNC_7() != 0) {
        if (VAR_7 == 1 && VAR_8[VAR_10].ota_state != VAR_5) {
            VAR_8[VAR_10].ota_state = VAR_5;
            FUNC_0(VAR_6, "OTA[current] partition is marked as VALID");
            esp_err_t VAR_11 = FUNC_9(VAR_8, VAR_8[VAR_10].ota_seq, VAR_10, VAR_9);





            return VAR_11;
        } else if (VAR_7 == 0) {
            if (FUNC_4() == 0) {
                FUNC_1(VAR_6, "Rollback is not possible, do not have any suitable apps in slots");
                return VAR_1;
            }
            FUNC_0(VAR_6, "OTA[current] partition is marked as INVALID");
            VAR_8[VAR_10].ota_state = VAR_4;
            esp_err_t VAR_12 = FUNC_9(VAR_8, VAR_8[VAR_10].ota_seq, VAR_10, VAR_9);
            if (VAR_12 != VAR_3) {
                return VAR_12;
            }
            FUNC_2(VAR_6, "Rollback to previously worked partition. Restart.");
            FUNC_6();
        }
    } else {
        FUNC_1(VAR_6, "Running firmware is factory");
        return VAR_2;
    }
    return VAR_3;
}
