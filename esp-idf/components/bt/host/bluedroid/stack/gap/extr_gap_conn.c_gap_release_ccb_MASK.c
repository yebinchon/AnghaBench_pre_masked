
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ psm; scalar_t__ con_state; int * tx_queue; int * rx_queue; scalar_t__ rx_queue_size; int service_id; } ;
typedef TYPE_2__ tGAP_CCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_2__* ccb_pool; } ;
struct TYPE_7__ {TYPE_1__ conn; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (tGAP_CCB *VAR_3)
{
    UINT16 VAR_4;
    UINT16 VAR_5 = VAR_3->psm;
    UINT8 VAR_6 = VAR_3->service_id;


    VAR_3->rx_queue_size = 0;

    while (!FUNC_4(VAR_3->rx_queue)) {
        FUNC_5(FUNC_2(VAR_3->rx_queue, 0));
 }
    FUNC_3(VAR_3->rx_queue, ((void*)0));
    VAR_3->rx_queue = ((void*)0);

    while (!FUNC_4(VAR_3->tx_queue)) {
        FUNC_5(FUNC_2(VAR_3->tx_queue, 0));
 }
    FUNC_3(VAR_3->tx_queue, ((void*)0));
    VAR_3->tx_queue = ((void*)0);

    VAR_3->con_state = VAR_0;


    for (VAR_4 = 0, VAR_3 = VAR_2.conn.ccb_pool; VAR_4 < VAR_1; VAR_4++, VAR_3++) {
        if ((VAR_3->con_state != VAR_0) && (VAR_3->psm == VAR_5)) {
            return;
        }
    }


    FUNC_0(VAR_6);

    FUNC_1 (VAR_5);
}
