
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_4__ {TYPE_1__* tcb; } ;
struct TYPE_3__ {scalar_t__ ch_state; int transport; int peer_bda; scalar_t__ in_use; } ;
typedef int BOOLEAN ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,size_t,...) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;

BOOLEAN FUNC_2(UINT8 VAR_6, BD_ADDR VAR_7, UINT8 *VAR_8,
                                    tBT_TRANSPORT *VAR_9)
{
    UINT8 VAR_10;
    BOOLEAN VAR_11 = VAR_1;
    FUNC_0("gatt_find_the_connected_bda start_idx=%d", VAR_6);

    for (VAR_10 = VAR_6 ; VAR_10 < VAR_3; VAR_10 ++) {
        if (VAR_5.tcb[VAR_10].in_use && VAR_5.tcb[VAR_10].ch_state == VAR_2) {
            FUNC_1( VAR_7, VAR_5.tcb[VAR_10].peer_bda, VAR_0);
            *VAR_8 = VAR_10;
            *VAR_9 = VAR_5.tcb[VAR_10].transport;
            VAR_11 = VAR_4;
            FUNC_0("gatt_find_the_connected_bda bda :%02x-%02x-%02x-%02x-%02x-%02x",
                             VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3], VAR_7[4], VAR_7[5]);
            break;
        }
    }
    FUNC_0("gatt_find_the_connected_bda found=%d found_idx=%d", VAR_11, VAR_10);
    return VAR_11;
}
