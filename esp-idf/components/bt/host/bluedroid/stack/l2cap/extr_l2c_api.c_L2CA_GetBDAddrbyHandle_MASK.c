
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote_bd_addr; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT16 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

BOOLEAN FUNC_2 (UINT16 VAR_3, BD_ADDR VAR_4)
{
    tL2C_LCB *VAR_5 = ((void*)0);
    BOOLEAN VAR_6 = VAR_1;

    VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5) {
        VAR_6 = VAR_2;
        FUNC_1 (VAR_4, VAR_5->remote_bd_addr, VAR_0);
    }

    return VAR_6;
}
