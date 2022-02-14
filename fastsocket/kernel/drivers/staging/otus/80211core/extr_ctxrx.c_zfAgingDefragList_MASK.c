
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_5__ {TYPE_1__* defragEntry; } ;
struct TYPE_6__ {int tick; TYPE_2__ defragTable; } ;
struct TYPE_4__ {scalar_t__ fragCount; int tick; int * fragment; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_5, u16_t VAR_6)
{
    u16_t VAR_7, VAR_8;
    FUNC_4(VAR_5);
    FUNC_2();

    FUNC_3(VAR_5);

    for(VAR_7=0; VAR_7<VAR_2; VAR_7++)
    {
        if (VAR_4->defragTable.defragEntry[VAR_7].fragCount != 0 )
        {
            if (((VAR_4->tick - VAR_4->defragTable.defragEntry[VAR_7].tick) >
                        (VAR_0 * VAR_3))
               || (VAR_6 != 0))
            {
                FUNC_1(VAR_1, "Aging defrag list :", VAR_7);

                for (VAR_8=0; VAR_8<VAR_4->defragTable.defragEntry[VAR_7].fragCount; VAR_8++)
                {
                    FUNC_0(VAR_5, VAR_4->defragTable.defragEntry[VAR_7].fragment[VAR_8], 0);
                }
            }
        }
        VAR_4->defragTable.defragEntry[VAR_7].fragCount = 0;
    }

    FUNC_5(VAR_5);

    return;
}
