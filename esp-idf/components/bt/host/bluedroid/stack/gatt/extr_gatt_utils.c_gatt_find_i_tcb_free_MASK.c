
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_4__ {TYPE_1__* tcb; } ;
struct TYPE_3__ {int in_use; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;

UINT8 FUNC_0(void)
{
    UINT8 VAR_3 = 0, VAR_4 = VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 ++) {
        if (!VAR_2.tcb[VAR_3].in_use) {
            VAR_4 = VAR_3;
            break;
        }
    }
    return VAR_4;
}
