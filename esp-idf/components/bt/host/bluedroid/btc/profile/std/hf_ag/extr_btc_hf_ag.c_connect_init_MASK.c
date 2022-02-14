
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int bt_status_t ;
struct TYPE_10__ {int address; } ;
typedef TYPE_3__ bt_bdaddr_t ;
struct TYPE_8__ {int address; } ;
struct TYPE_9__ {TYPE_1__ connected_bda; int handle; int connection_state; } ;
struct TYPE_11__ {TYPE_2__ btc_hf_cb; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static bt_status_t FUNC_5(bt_bdaddr_t *VAR_7, uint16_t VAR_8)
{
    int VAR_9 = FUNC_3(VAR_7);
    FUNC_1();
    if (VAR_9 == VAR_5) {
        return VAR_2;
    }

    if (!FUNC_4(VAR_7)) {
        VAR_6[VAR_9].btc_hf_cb.connection_state = VAR_4;
        FUNC_2(VAR_6[VAR_9].btc_hf_cb.connected_bda.address, VAR_7->address);
        FUNC_0(VAR_6[VAR_9].btc_hf_cb.handle, VAR_6[VAR_9].btc_hf_cb.connected_bda.address, VAR_0, VAR_1);
        return VAR_3;
    }
    return VAR_2;
}
