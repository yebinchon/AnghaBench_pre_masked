
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int bt_status_t ;
struct TYPE_9__ {int address; } ;
typedef TYPE_3__ bt_bdaddr_t ;
struct TYPE_7__ {int address; } ;
struct TYPE_8__ {TYPE_1__ connected_bda; int handle; int state; } ;
struct TYPE_10__ {TYPE_2__ btc_hf_client_cb; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static bt_status_t FUNC_3( bt_bdaddr_t *VAR_5, uint16_t VAR_6 )
{
    if (FUNC_2(VAR_5)) {
        return VAR_1;
    }

    VAR_4.btc_hf_client_cb.state = VAR_3;
    FUNC_1(VAR_4.btc_hf_client_cb.connected_bda.address, VAR_5->address);

    FUNC_0(VAR_4.btc_hf_client_cb.handle, VAR_4.btc_hf_client_cb.connected_bda.address,
               VAR_0);

    return VAR_2;
}
