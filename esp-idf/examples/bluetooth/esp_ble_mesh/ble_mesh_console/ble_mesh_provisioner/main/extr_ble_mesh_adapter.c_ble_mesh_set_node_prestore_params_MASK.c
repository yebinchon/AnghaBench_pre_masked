
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {int net_idx; int unicast_addr; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(uint16_t VAR_4, uint16_t VAR_5)
{
    uint16_t VAR_6;
    FUNC_1(VAR_2, VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_1[VAR_6].net_idx != 0xFFFF && VAR_1[VAR_6].unicast_addr != 0xFFFF) {
            VAR_1[VAR_6].net_idx = VAR_4;
            VAR_1[VAR_6].unicast_addr = VAR_5;
        }
    }
    FUNC_0(VAR_2);
}
