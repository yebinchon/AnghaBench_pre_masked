
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

void FUNC_4 (tL2C_LCB *VAR_6, UINT16 VAR_7, UINT8 VAR_8, UINT16 VAR_9)
{
    BT_HDR *VAR_10;
    UINT8 *VAR_11;

    if ((VAR_10 = FUNC_3(VAR_6, VAR_3, VAR_1, VAR_8)) == ((void*)0) ) {
        FUNC_0 ("L2CAP - no buffer for conn_req");
        return;
    }

    VAR_11 = (UINT8 *)(VAR_10 + 1) + VAR_5 + VAR_0 + VAR_4 + VAR_2;

    FUNC_1 (VAR_11, 0);
    FUNC_1 (VAR_11, VAR_7);
    FUNC_1 (VAR_11, VAR_9);
    FUNC_1 (VAR_11, 0);

    FUNC_2 (VAR_6, ((void*)0), VAR_10);
}
