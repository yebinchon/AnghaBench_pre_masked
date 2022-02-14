
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* sr_reg; } ;
struct TYPE_3__ {scalar_t__ s_hdl; scalar_t__ e_hdl; scalar_t__ in_use; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

UINT8 FUNC_0(UINT16 VAR_2)
{
    UINT8 VAR_3 = 0;

    for ( ; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1.sr_reg[VAR_3].in_use &&
                VAR_1.sr_reg[VAR_3].s_hdl <= VAR_2 &&
                VAR_1.sr_reg[VAR_3].e_hdl >= VAR_2 ) {
            break;
        }
    }
    return VAR_3;
}
