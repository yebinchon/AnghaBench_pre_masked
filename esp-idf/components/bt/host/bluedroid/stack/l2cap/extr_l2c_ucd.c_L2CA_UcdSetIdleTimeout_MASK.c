
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tL2C_LCB ;
struct TYPE_3__ {int fixed_chnl_idle_tout; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int UINT16 ;
typedef int BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int*,int ) ;

BOOLEAN FUNC_4 ( BD_ADDR VAR_4, UINT16 VAR_5 )
{
    tL2C_LCB *VAR_6;
    tL2C_CCB *VAR_7;

    FUNC_0 ("L2CA_UcdSetIdleTimeout()  Timeout: 0x%04x  BDA: %08x%04x", VAR_5,
                     (VAR_4[0] << 24) + (VAR_4[1] << 16) + (VAR_4[2] << 8) + VAR_4[3],
                     (VAR_4[4] << 8) + VAR_4[5]);



    if (((VAR_6 = FUNC_3 (VAR_4, VAR_0)) == ((void*)0))
            || ((VAR_7 = FUNC_2 (VAR_6, VAR_2)) == ((void*)0))) {
        FUNC_1 ("L2CAP - no UCD channel");
        return (VAR_1);
    } else {
        VAR_7->fixed_chnl_idle_tout = VAR_5;
        return (VAR_3);
    }
}
