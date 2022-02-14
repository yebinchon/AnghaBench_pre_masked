
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rx_queue_size; int rx_queue; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

UINT16 FUNC_2 (UINT16 VAR_3, BT_HDR **VAR_4)
{
    tGAP_CCB *VAR_5 = FUNC_1 (VAR_3);
    BT_HDR *VAR_6;

    if (!VAR_5) {
        return (VAR_1);
    }

    VAR_6 = (BT_HDR *)FUNC_0(VAR_5->rx_queue, 0);

    if (VAR_6) {
        *VAR_4 = VAR_6;

        VAR_5->rx_queue_size -= VAR_6->len;
        return (VAR_0);
    } else {
        *VAR_4 = ((void*)0);
        return (VAR_2);
    }
}
