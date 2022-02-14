
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int (* btc_hf_client_outgoing_data_cb ) (int *,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

uint32_t FUNC_1(uint8_t *VAR_1, uint32_t VAR_2)
{

    if (VAR_0.btc_hf_client_outgoing_data_cb) {
        return VAR_0.btc_hf_client_outgoing_data_cb(VAR_1, VAR_2);
    } else {
        return 0;
    }
}
