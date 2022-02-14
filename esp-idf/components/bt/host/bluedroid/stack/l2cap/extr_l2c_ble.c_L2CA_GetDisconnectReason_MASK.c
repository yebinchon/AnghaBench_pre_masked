
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disc_reason; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int tBT_TRANSPORT ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

UINT16 FUNC_2 (BD_ADDR VAR_0, tBT_TRANSPORT VAR_1)
{
    tL2C_LCB *VAR_2;
    UINT16 VAR_3 = 0;

    if ((VAR_2 = FUNC_1 (VAR_0, VAR_1)) != ((void*)0)) {
        VAR_3 = VAR_2->disc_reason;
    }

    FUNC_0 ("L2CA_GetDisconnectReason=%d ", VAR_3);

    return VAR_3;
}
