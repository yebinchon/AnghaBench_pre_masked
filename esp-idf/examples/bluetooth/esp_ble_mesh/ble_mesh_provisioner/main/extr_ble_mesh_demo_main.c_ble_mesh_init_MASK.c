
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int match ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int app_idx; int net_idx; int app_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,int) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static esp_err_t FUNC_10(void)
{
    uint8_t VAR_12[2] = {0xdd, 0xdd};
    esp_err_t VAR_13;

    VAR_10.net_idx = VAR_2;
    VAR_10.app_idx = VAR_0;
    FUNC_9(VAR_10.app_key, VAR_1, sizeof(VAR_10.app_key));

    FUNC_8(VAR_9);
    FUNC_6(VAR_7);
    FUNC_7(VAR_8);


    VAR_13 = FUNC_2(&VAR_11, &VAR_6);
    if (VAR_13) {
        FUNC_0(VAR_5, "Initializing mesh failed (err %d)", VAR_13);
        return VAR_13;
    }

    FUNC_5(VAR_12, sizeof(VAR_12), 0x0, 0);

    FUNC_4(VAR_3 | VAR_4);

    FUNC_3(VAR_10.app_key, VAR_10.net_idx, VAR_10.app_idx);

    FUNC_1(VAR_5, "BLE Mesh Provisioner initialized");

    return VAR_13;
}
