
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_hf_btrh_cmd_t ;
typedef int bt_status_t ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ btc_hf_client_cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;



 TYPE_2__ VAR_3 ;

__attribute__((used)) static bt_status_t FUNC_2(esp_hf_btrh_cmd_t VAR_4)
{
    FUNC_1();

    switch (VAR_4) {
    case 129:
        FUNC_0(VAR_3.btc_hf_client_cb.handle, VAR_0, 0, 0, ((void*)0));
        break;
    case 130:
        FUNC_0(VAR_3.btc_hf_client_cb.handle, VAR_0, 1, 0, ((void*)0));
        break;
    case 128:
        FUNC_0(VAR_3.btc_hf_client_cb.handle, VAR_0, 2, 0, ((void*)0));
        break;
    default:
        return VAR_1;
    }

    return VAR_2;
}
