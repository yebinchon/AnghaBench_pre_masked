
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ok_flag; int str; } ;
typedef TYPE_2__ tBTA_AG_RES_DATA ;
typedef int esp_hf_subscriber_service_type_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int ag_res ;
struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ btc_hf_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static bt_status_t FUNC_7(bt_bdaddr_t *VAR_6, const char *VAR_7, esp_hf_subscriber_service_type_t VAR_8)
{
    int VAR_9 = FUNC_3(VAR_6);
    FUNC_2();

    if (FUNC_4(VAR_6) && (VAR_9 != VAR_2)) {
        tBTA_AG_RES_DATA VAR_10;
        FUNC_5(&VAR_10, 0, sizeof (VAR_10));
        FUNC_1("cnum_response: number = %s, type = %d", VAR_7, VAR_8);
        if (VAR_7) {
            FUNC_6(VAR_10.str, ",\"%s\",%d",VAR_7, VAR_8);
        } else {
            FUNC_6(VAR_10.str, ",\"\",%d",VAR_8);
        }
        VAR_10.ok_flag = VAR_1;
        FUNC_0(VAR_5[VAR_9].btc_hf_cb.handle, VAR_0, &VAR_10);
        return VAR_4;
    }
    return VAR_3;
}
