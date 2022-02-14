
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_hf_chld_type_t ;
typedef int bt_status_t ;
struct TYPE_3__ {int chld_feat; int peer_feat; int handle; } ;
struct TYPE_4__ {TYPE_1__ btc_hf_client_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;







 TYPE_2__ VAR_9 ;

__attribute__((used)) static bt_status_t FUNC_2(esp_hf_chld_type_t VAR_10, int VAR_11)
{
    FUNC_1();

    switch (VAR_10)
    {
    case 130:
        if (VAR_9.btc_hf_client_cb.chld_feat & VAR_3)
        {
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 0, 0, ((void*)0));
            break;
        }
        return VAR_8;
    case 129:

        if (VAR_9.btc_hf_client_cb.peer_feat & VAR_5)
        {
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 1, 0, ((void*)0));
            break;
        }
        return VAR_8;
    case 134:

        if (VAR_9.btc_hf_client_cb.peer_feat & VAR_5)
        {
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 2, 0, ((void*)0));
            break;
        }
        return VAR_8;
    case 133:
        if (VAR_9.btc_hf_client_cb.chld_feat & VAR_1)
        {
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 3, 0, ((void*)0));
            break;
        }
        return VAR_8;
    case 132:
        if (VAR_9.btc_hf_client_cb.chld_feat & VAR_2)
        {
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 4, 0, ((void*)0));
            break;
        }
        return VAR_8;
    case 128:
        if (VAR_9.btc_hf_client_cb.peer_feat & VAR_4)
        {
            if (VAR_11 < 1)
            {
                return VAR_6;
            }
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 1, VAR_11, ((void*)0));
            break;
        }
        return VAR_8;
    case 131:
        if (VAR_9.btc_hf_client_cb.peer_feat & VAR_4)
        {
            if (VAR_11 < 1)
            {
                return VAR_6;
            }
            FUNC_0(VAR_9.btc_hf_client_cb.handle, VAR_0, 2, VAR_11, ((void*)0));
            break;
        }
        return VAR_8;

    }
    return VAR_7;
}
