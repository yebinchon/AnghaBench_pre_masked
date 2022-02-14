
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state; } ;
typedef TYPE_2__ tBTA_AG_RES_DATA ;
typedef int esp_hf_in_band_ring_state_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
typedef int ag_res ;
struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ btc_hf_cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static bt_status_t FUNC_5(bt_bdaddr_t *VAR_5, esp_hf_in_band_ring_state_t VAR_6)
{
    int VAR_7 = FUNC_2(VAR_5);
    FUNC_1();

    if (FUNC_3(VAR_5) && (VAR_7 != VAR_1)) {
        tBTA_AG_RES_DATA VAR_8;
        FUNC_4 (&VAR_8, 0, sizeof (VAR_8));
        VAR_8.state = VAR_6;
        FUNC_0(VAR_4[VAR_7].btc_hf_cb.handle, VAR_0, &VAR_8);
        return VAR_3;
    }
    return VAR_2;
}
