
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
struct TYPE_4__ {int encryMode; scalar_t__ vap; scalar_t__ time; scalar_t__* addr; scalar_t__ state; scalar_t__ valid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_3)
{
    u16_t VAR_4;

    FUNC_0(VAR_3);

    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    {
        VAR_2->ap.staTable[VAR_4].valid = 0;
        VAR_2->ap.staTable[VAR_4].state = 0;
        VAR_2->ap.staTable[VAR_4].addr[0] = 0;
        VAR_2->ap.staTable[VAR_4].addr[1] = 0;
        VAR_2->ap.staTable[VAR_4].addr[2] = 0;
        VAR_2->ap.staTable[VAR_4].time = 0;
        VAR_2->ap.staTable[VAR_4].vap = 0;
        VAR_2->ap.staTable[VAR_4].encryMode = VAR_1;
    }
    return;
}
