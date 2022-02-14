
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*,int ,int ,int ) ;

void FUNC_5 (tL2C_LCB *VAR_7, UINT16 VAR_8, UINT16 VAR_9,
                                 UINT16 VAR_10, UINT16 VAR_11)
{
    BT_HDR *VAR_12;
    UINT8 *VAR_13;


    VAR_7->id++;
    FUNC_3 (VAR_7, VAR_1);

    if ((VAR_12 = FUNC_4 (VAR_7, VAR_3,
                                    VAR_2, VAR_7->id)) == ((void*)0) ) {
        FUNC_0 ("l2cu_send_peer_ble_par_req - no buffer");
        return;
    }

    VAR_13 = (UINT8 *)(VAR_12 + 1) + VAR_6 + VAR_0 +
        VAR_5 + VAR_4;

    FUNC_1 (VAR_13, VAR_8);
    FUNC_1 (VAR_13, VAR_9);
    FUNC_1 (VAR_13, VAR_10);
    FUNC_1 (VAR_13, VAR_11);

    FUNC_2 (VAR_7, ((void*)0), VAR_12);
}
