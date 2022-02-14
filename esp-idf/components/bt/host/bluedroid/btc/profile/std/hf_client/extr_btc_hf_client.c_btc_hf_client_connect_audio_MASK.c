
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int remote_bda; int state; } ;
struct TYPE_9__ {TYPE_1__ audio_stat; } ;
typedef TYPE_3__ esp_hf_client_cb_param_t ;
typedef int esp_bd_addr_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
struct TYPE_8__ {int peer_feat; int connected_bda; int handle; } ;
struct TYPE_10__ {TYPE_2__ btc_hf_client_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_5__ VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

bt_status_t FUNC_7( bt_bdaddr_t *VAR_7 )
{
    FUNC_2();

    if (FUNC_4(VAR_7))
    {
        if (VAR_6.btc_hf_client_cb.peer_feat & VAR_1)
        {
            FUNC_1(VAR_6.btc_hf_client_cb.handle, VAR_0, 0, 0, ((void*)0));
        }
        else
        {
            FUNC_0(VAR_6.btc_hf_client_cb.handle);
        }


        do {
            esp_hf_client_cb_param_t VAR_8;
            FUNC_6(&VAR_8, 0, sizeof(esp_hf_client_cb_param_t));
            VAR_8.audio_stat.state = VAR_4;
            FUNC_5(VAR_8.audio_stat.remote_bda, &VAR_6.btc_hf_client_cb.connected_bda, sizeof(esp_bd_addr_t));
            FUNC_3(VAR_5, &VAR_8);
        } while (0);

        return VAR_3;
    }

    return VAR_2;
}
