
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tL2C_LCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int ,int ,int ) ;

void FUNC_4 (tL2C_LCB *VAR_6, UINT8 VAR_7, UINT16 VAR_8)
{
    BT_HDR *VAR_9;
    UINT8 *VAR_10;

    if ((VAR_9 = FUNC_3(VAR_6, VAR_2,
                    VAR_1, VAR_7)) == ((void*)0) )
    {
        FUNC_0 ("l2cu_reject_ble_connection - no buffer");
        return;
    }

    VAR_10 = (UINT8 *)(VAR_9 + 1) + VAR_5 + VAR_0 +
                               VAR_4 + VAR_3;

    FUNC_1 (VAR_10, 0);
    FUNC_1 (VAR_10, 0);
    FUNC_1 (VAR_10, 0);
    FUNC_1 (VAR_10, 0);
    FUNC_1 (VAR_10, VAR_8);

    FUNC_2 (VAR_6, ((void*)0), VAR_9);
}
