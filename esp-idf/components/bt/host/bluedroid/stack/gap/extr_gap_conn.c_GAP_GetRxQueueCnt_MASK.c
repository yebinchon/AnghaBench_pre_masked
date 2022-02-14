
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ con_state; int rx_queue_size; } ;
typedef TYPE_2__ tGAP_CCB ;
typedef int UINT32 ;
typedef size_t UINT16 ;
struct TYPE_4__ {TYPE_2__* ccb_pool; } ;
struct TYPE_6__ {TYPE_1__ conn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 TYPE_3__ VAR_4 ;

int FUNC_1 (UINT16 VAR_5, UINT32 *VAR_6)
{
    tGAP_CCB *VAR_7;
    int VAR_8 = VAR_0;


    if (VAR_5 < VAR_3) {
        VAR_7 = &VAR_4.conn.ccb_pool[VAR_5];

        if (VAR_7->con_state == VAR_1) {
            *VAR_6 = VAR_7->rx_queue_size;
        } else {
            VAR_8 = VAR_2;
        }
    } else {
        VAR_8 = VAR_2;
    }

    FUNC_0 ("GAP_GetRxQueueCnt - rc = 0x%04x, rx_queue_count=%d",
                     VAR_8 , *VAR_6);

    return (VAR_8);
}
