
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ link_state; int partial_segment_being_sent; int link_xmit_data_q; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {int offset; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7 (BT_HDR *VAR_2)
{
    UINT8 *VAR_3 = (UINT8 *)(VAR_2 + 1) + VAR_2->offset;
    UINT16 VAR_4;
    tL2C_LCB *VAR_5;


    FUNC_2 (VAR_4, VAR_3);
    VAR_4 = FUNC_0 (VAR_4);


    if ((VAR_5 = FUNC_4 (VAR_4)) == ((void*)0)) {
        FUNC_1 ("L2CAP - rcvd segment complete, unknown handle: %d\n", VAR_4);
        FUNC_6 (VAR_2);
        return;
    }

    if (VAR_5->link_state == VAR_1) {


        FUNC_5(VAR_5->link_xmit_data_q, VAR_2);

        VAR_5->partial_segment_being_sent = VAR_0;

        FUNC_3 (VAR_5, ((void*)0), ((void*)0));
    } else {
        FUNC_6 (VAR_2);
    }
}
