
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info_timer_entry; int w4_info_rsp; int id; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int * FUNC_6 (TYPE_1__*,int,int ,int ) ;

void FUNC_7 (tL2C_LCB *VAR_9, UINT16 VAR_10)
{
    BT_HDR *VAR_11;
    UINT8 *VAR_12;


    VAR_9->id++;
    FUNC_5(VAR_9, VAR_2);

    if ((VAR_11 = FUNC_6(VAR_9, 2, VAR_3, VAR_9->id)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no buffer for info_req");
        return;
    }

    FUNC_0 ("l2cu_send_peer_info_req: type 0x%04x", VAR_10);

    VAR_12 = (UINT8 *)(VAR_11 + 1) + VAR_6 + VAR_1 +
        VAR_5 + VAR_4;

    FUNC_2 (VAR_12, VAR_10);

    VAR_9->w4_info_rsp = VAR_8;
    FUNC_3 (&VAR_9->info_timer_entry, VAR_0, VAR_7);

    FUNC_4 (VAR_9, ((void*)0), VAR_11);
}
