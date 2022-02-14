
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int,int ,int ) ;

void FUNC_4 (tL2C_LCB *VAR_8, UINT16 VAR_9, UINT8 VAR_10,
                                UINT16 VAR_11, UINT16 VAR_12)
{
    UINT16 VAR_13;
    BT_HDR *VAR_14;
    UINT8 *VAR_15;


    if (VAR_9 == VAR_5) {
        VAR_13 = 2;
    } else if (VAR_9 == VAR_4) {
        VAR_13 = 4;
    } else {
        VAR_13 = 0;
    }

    if ((VAR_14 = FUNC_3 (VAR_8, (UINT16) (VAR_3 + VAR_13), VAR_2, VAR_10)) == ((void*)0) ) {
        FUNC_0 ("L2CAP - no buffer cmd_rej");
        return;
    }

    VAR_15 = (UINT8 *)(VAR_14 + 1) + VAR_7 + VAR_0 +
        VAR_6 + VAR_1;

    FUNC_1 (VAR_15, VAR_9);

    if (VAR_13 >= 2) {
        FUNC_1 (VAR_15, VAR_11);
    }

    if (VAR_13 >= 4) {
        FUNC_1 (VAR_15, VAR_12);
    }

    FUNC_2 (VAR_8, ((void*)0), VAR_14);
}
