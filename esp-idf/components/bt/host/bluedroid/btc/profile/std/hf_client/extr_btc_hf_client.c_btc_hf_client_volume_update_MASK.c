
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_hf_volume_control_target_t ;
typedef int bt_status_t ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ btc_hf_client_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;


 TYPE_2__ VAR_4 ;

__attribute__((used)) static bt_status_t FUNC_2(esp_hf_volume_control_target_t VAR_5, int VAR_6)
{
    FUNC_1();

    switch (VAR_5)
    {
        case 128:
            FUNC_0(VAR_4.btc_hf_client_cb.handle, VAR_1, VAR_6, 0, ((void*)0));
            break;
        case 129:
            FUNC_0(VAR_4.btc_hf_client_cb.handle, VAR_0, VAR_6, 0, ((void*)0));
            break;
        default:
            return VAR_3;
    }

    return VAR_2;
}
