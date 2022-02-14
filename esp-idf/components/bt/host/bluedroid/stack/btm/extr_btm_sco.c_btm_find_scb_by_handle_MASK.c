
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; scalar_t__ hci_handle; } ;
typedef TYPE_2__ tSCO_CONN ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_2__* sco_db; } ;
struct TYPE_6__ {TYPE_1__ sco_cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;

UINT16 FUNC_0 (UINT16 VAR_3)
{
    int VAR_4;
    tSCO_CONN *VAR_5 = &VAR_2.sco_cb.sco_db[0];

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_5++) {
        if ((VAR_5->state == VAR_1) && (VAR_5->hci_handle == VAR_3)) {
            return (VAR_4);
        }
    }


    return (VAR_4);
}
