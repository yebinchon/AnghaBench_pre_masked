
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
struct TYPE_4__ {scalar_t__ valid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t* VAR_3)
{
    u16_t VAR_4;

    FUNC_1(VAR_3);

    for (VAR_4=0; VAR_4<VAR_1; VAR_4++)
    {
        if (VAR_2->ap.staTable[VAR_4].valid == 0)
        {
            FUNC_0(VAR_0, "zfApGetNewSta=", VAR_4);
            return VAR_4;
        }
    }
    return 0xffff;
}
