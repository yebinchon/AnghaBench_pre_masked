
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ con_state; scalar_t__ is_congested; int connection_id; int tx_queue; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {scalar_t__ offset; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

UINT16 FUNC_6 (UINT16 VAR_10, BT_HDR *VAR_11)
{
    tGAP_CCB *VAR_12 = FUNC_3 (VAR_10);

    if (!VAR_12) {
        FUNC_5 (VAR_11);
        return (VAR_3);
    }

    if (VAR_12->con_state != VAR_2) {
        FUNC_5 (VAR_11);
        return (VAR_4);
    }

    if (VAR_11->offset < VAR_8) {
        FUNC_5 (VAR_11);
        return (VAR_5);
    }

    FUNC_2(VAR_12->tx_queue, VAR_11, VAR_1);

    if (VAR_12->is_congested) {
        return (VAR_0);
    }



    FUNC_4 (VAR_10);
    return (VAR_0);
}
