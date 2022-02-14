
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct TYPE_5__ {TYPE_1__* defragEntry; int replaceNum; } ;
struct TYPE_6__ {TYPE_2__ defragTable; int tick; } ;
struct TYPE_4__ {size_t fragCount; size_t seqNum; int * addr; int tick; int ** fragment; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, zbuf_t* VAR_3, u8_t* VAR_4, u16_t VAR_5)
{
    u16_t VAR_6, VAR_7;
    FUNC_3(VAR_2);
    FUNC_1();

    FUNC_2(VAR_2);


    for(VAR_6=0; VAR_6<VAR_0; VAR_6++)
    {
        if ( VAR_1->defragTable.defragEntry[VAR_6].fragCount == 0 )
        {
            break;
        }
    }


    if (VAR_6 == VAR_0)
    {
        VAR_6 = VAR_1->defragTable.replaceNum++ & (VAR_0-1);

        for (VAR_7=0; VAR_7<VAR_1->defragTable.defragEntry[VAR_6].fragCount; VAR_7++)
        {
            FUNC_0(VAR_2, VAR_1->defragTable.defragEntry[VAR_6].fragment[VAR_7], 0);
        }
    }

    VAR_1->defragTable.defragEntry[VAR_6].fragCount = 1;
    VAR_1->defragTable.defragEntry[VAR_6].fragment[0] = VAR_3;
    VAR_1->defragTable.defragEntry[VAR_6].seqNum = VAR_5;
    VAR_1->defragTable.defragEntry[VAR_6].tick = VAR_1->tick;

    for (VAR_7=0; VAR_7<6; VAR_7++)
    {
        VAR_1->defragTable.defragEntry[VAR_6].addr[VAR_7] = VAR_4[VAR_7];
    }

    FUNC_4(VAR_2);

    return;
}
