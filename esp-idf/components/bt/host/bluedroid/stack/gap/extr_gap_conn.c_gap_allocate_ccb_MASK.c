
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ con_state; int rem_mtu_size; scalar_t__ gap_handle; void* rx_queue; void* tx_queue; } ;
typedef TYPE_2__ tGAP_CCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_2__* ccb_pool; } ;
struct TYPE_8__ {TYPE_1__ conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static tGAP_CCB *FUNC_2 (void)
{
    UINT16 VAR_5;
    tGAP_CCB *VAR_6;


    for (VAR_5 = 0, VAR_6 = VAR_4.conn.ccb_pool; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if (VAR_6->con_state == VAR_0) {
            FUNC_1 (VAR_6, 0, sizeof (tGAP_CCB));
            VAR_6->tx_queue = FUNC_0(VAR_3);
            VAR_6->rx_queue = FUNC_0(VAR_3);

            VAR_6->gap_handle = VAR_5;
            VAR_6->rem_mtu_size = VAR_2;

            return (VAR_6);
        }
    }


    return (((void*)0));
}
