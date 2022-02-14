
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_nocp_cb; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int tL2CA_NOCP_CB ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

BOOLEAN FUNC_1(tL2CA_NOCP_CB *VAR_3, BD_ADDR VAR_4)
{
    tL2C_LCB *VAR_5;


    VAR_5 = FUNC_0 (VAR_4, VAR_0);


    if (!VAR_5) {
        return VAR_1;
    }

    VAR_5->p_nocp_cb = VAR_3;

    return VAR_2;
}
