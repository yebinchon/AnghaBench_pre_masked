
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BT_HDR ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*,scalar_t__,int ,int ) ;

void FUNC_5 (tL2C_LCB *VAR_7, UINT8 *VAR_8, UINT16 VAR_9)
{
    BT_HDR *VAR_10;
    UINT8 *VAR_11;

    VAR_7->id++;
    FUNC_3(VAR_7, VAR_1);

    if ((VAR_10 = FUNC_4(VAR_7, (UINT16) (VAR_4 + VAR_9), VAR_2, VAR_7->id)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no buffer for echo_req");
        return;
    }

    VAR_11 = (UINT8 *)(VAR_10 + 1) + VAR_6 + VAR_0 + VAR_5 + VAR_3;

    if (VAR_9) {
        FUNC_0 (VAR_11, VAR_8, VAR_9);
    }

    FUNC_2 (VAR_7, ((void*)0), VAR_10);
}
