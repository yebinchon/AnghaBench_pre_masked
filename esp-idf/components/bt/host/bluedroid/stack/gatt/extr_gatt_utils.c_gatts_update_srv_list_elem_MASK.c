
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_6__ {TYPE_1__* srv_list; TYPE_2__* sr_reg; } ;
struct TYPE_5__ {int s_hdl; } ;
struct TYPE_4__ {size_t i_sreg; int is_primary; int s_hdl; int in_use; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;

void FUNC_1(UINT8 VAR_2, UINT16 VAR_3, BOOLEAN VAR_4)
{
    FUNC_0(VAR_3);

    VAR_1.srv_list[VAR_2].in_use = VAR_0;
    VAR_1.srv_list[VAR_2].i_sreg = VAR_2;
    VAR_1.srv_list[VAR_2].s_hdl = VAR_1.sr_reg[VAR_2].s_hdl;
    VAR_1.srv_list[VAR_2].is_primary = VAR_4;

    return;
}
