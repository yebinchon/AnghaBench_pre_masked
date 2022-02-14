
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int (* btc_hf_incoming_data_cb ) (int const*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int const*,int ) ;

void FUNC_1(const uint8_t *VAR_1, uint32_t VAR_2)
{
    int VAR_3 = 0;

    if (VAR_0[VAR_3].btc_hf_incoming_data_cb) {
        VAR_0[VAR_3].btc_hf_incoming_data_cb(VAR_1, VAR_2);
    }
}
