
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_5__ {TYPE_1__* staTable; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct TYPE_4__ {int valid; size_t* addr; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_2, u16_t* VAR_3)
{
    u16_t VAR_4;

    FUNC_0(VAR_2);

    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    {
        if (VAR_1->ap.staTable[VAR_4].valid == 1)
        {
            if ((VAR_1->ap.staTable[VAR_4].addr[0] == VAR_3[0])
                    && (VAR_1->ap.staTable[VAR_4].addr[1] == VAR_3[1])
                    && (VAR_1->ap.staTable[VAR_4].addr[2] == VAR_3[2]))
            {
                return VAR_4;
            }
        }
    }
    return 0xffff;
}
