
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef size_t u16_t ;
struct zsAdditionInfo {int dummy; } ;
struct TYPE_5__ {TYPE_1__* defragEntry; } ;
struct TYPE_6__ {TYPE_2__ defragTable; } ;
struct TYPE_4__ {scalar_t__ fragCount; scalar_t__* addr; size_t seqNum; int ** fragment; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int *,int ,size_t*,size_t*,struct zsAdditionInfo*) ;
 int FUNC_1 (int *,int *,int *,size_t,size_t,size_t) ;
 int FUNC_2 (int *,int *,int ) ;
 size_t FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;

zbuf_t* FUNC_10(zdev_t* VAR_2, zbuf_t* VAR_3, u8_t* VAR_4,
        u16_t VAR_5, u8_t VAR_6, u8_t VAR_7,
        struct zsAdditionInfo* VAR_8)
{
    u16_t VAR_9, VAR_10, VAR_11;
    zbuf_t* VAR_12 = ((void*)0);
    u16_t VAR_13 = 0;
    u16_t VAR_14 = 0;
    u16_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    FUNC_7(VAR_2);
    FUNC_5();

    FUNC_6(VAR_2);


    for(VAR_9=0; VAR_9<VAR_0; VAR_9++)
    {
        if ( VAR_1->defragTable.defragEntry[VAR_9].fragCount != 0 )
        {

            for (VAR_10=0; VAR_10<6; VAR_10++)
            {
                if (VAR_4[VAR_10] != VAR_1->defragTable.defragEntry[VAR_9].addr[VAR_10])
                {
                    break;
                }
            }
            if (VAR_10 == 6)
            {

                if (VAR_5 == VAR_1->defragTable.defragEntry[VAR_9].seqNum)
                {
                    if ((VAR_6 == VAR_1->defragTable.defragEntry[VAR_9].fragCount)
                                && (VAR_6 < 8))
                    {

                        VAR_1->defragTable.defragEntry[VAR_9].fragment[VAR_6] = VAR_3;
                        VAR_1->defragTable.defragEntry[VAR_9].fragCount++;
                        VAR_13 = 1;

                        if (VAR_7 == 0)
                        {

                            VAR_12 = VAR_1->defragTable.defragEntry[VAR_9].fragment[0];
                            VAR_15 = FUNC_3(VAR_2, VAR_12);

                            VAR_16 = 24 + ((FUNC_9(VAR_2, VAR_12, 0) & 0x80) >> 6);
                            FUNC_0(VAR_2, VAR_12, 0, &VAR_18, &VAR_19, VAR_8);
                            VAR_16 += VAR_18;
                            for(VAR_11=1; VAR_11<VAR_1->defragTable.defragEntry[VAR_9].fragCount; VAR_11++)
                            {
                                VAR_17 = FUNC_3(VAR_2,
                                                         VAR_1->defragTable.defragEntry[VAR_9].fragment[VAR_11]);
                                if ((VAR_15+VAR_17-VAR_16) < 1560)
                                {
                                    FUNC_1(VAR_2, VAR_12, VAR_1->defragTable.defragEntry[VAR_9].fragment[VAR_11],
                                               VAR_15, VAR_16, VAR_17-VAR_16);
                                    VAR_15 += (VAR_17-VAR_16);
                                }
                                else
                                {
                                    VAR_14 = 1;
                                }
                                FUNC_2(VAR_2, VAR_1->defragTable.defragEntry[VAR_9].fragment[VAR_11], 0);
                            }

                            VAR_1->defragTable.defragEntry[VAR_9].fragCount = 0;
                            FUNC_4(VAR_2, VAR_12, VAR_15);
                        }
                        break;
                    }
                }
            }
        }
    }

    FUNC_8(VAR_2);

    if (VAR_14 == 1)
    {
        FUNC_2(VAR_2, VAR_12, 0);
        return ((void*)0);
    }
    if (VAR_13 == 0)
    {
        FUNC_2(VAR_2, VAR_3, 0);
        return ((void*)0);
    }

    return VAR_12;
}
