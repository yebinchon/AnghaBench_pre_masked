
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acelp_apply_order_2_transfer_function; int acelp_interpolatef; } ;
typedef TYPE_1__ ACELPFContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

void FUNC_1(ACELPFContext *VAR_3)
{
    VAR_3->acelp_interpolatef = VAR_2;
    VAR_3->acelp_apply_order_2_transfer_function = VAR_1;

    if(VAR_0)
        FUNC_0(VAR_3);
}
