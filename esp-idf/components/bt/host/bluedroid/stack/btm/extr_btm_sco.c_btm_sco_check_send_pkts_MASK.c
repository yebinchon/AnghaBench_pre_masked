
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sent_not_acked; int xmit_data_q; } ;
typedef TYPE_1__ tSCO_CONN ;
struct TYPE_5__ {scalar_t__ xmit_window_size; TYPE_1__* sco_db; } ;
typedef TYPE_2__ tSCO_CB ;
typedef size_t UINT16 ;
struct TYPE_6__ {TYPE_2__ sco_cb; } ;
typedef int BT_HDR ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4 (UINT16 VAR_1)
{
    tSCO_CB *VAR_2 = &VAR_0.sco_cb;
    tSCO_CONN *VAR_3 = &VAR_2->sco_db[VAR_1];


    BT_HDR *VAR_4;
    while (VAR_2->xmit_window_size != 0)
    {
        if ((VAR_4 = (BT_HDR *)FUNC_1(VAR_3->xmit_data_q, 0)) == ((void*)0)) {
            break;
        }





        VAR_2->xmit_window_size -= 1;
        VAR_3->sent_not_acked += 1;


        FUNC_3(VAR_4);
    }
}
