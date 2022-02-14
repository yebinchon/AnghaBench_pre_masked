
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct TYPE_7__ {size_t regDmnEnum; scalar_t__ isoName; } ;
struct TYPE_5__ {size_t regionCode; } ;
struct TYPE_6__ {TYPE_1__ regulationTable; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,size_t,size_t,size_t) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

u8_t FUNC_5(zdev_t* VAR_2, u8_t *VAR_3, u8_t VAR_4)
{
    u16_t VAR_5;
    u16_t VAR_6;
    u16_t VAR_7 = 2000, VAR_8 = 6000;


    FUNC_4(VAR_2);

    FUNC_3();

    if (VAR_3[4] != 0x20)
    {

    }

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
    {

        if (FUNC_2((u8_t *)VAR_0[VAR_5].isoName, (u8_t *)&VAR_3[2], VAR_4-1))
        {



            VAR_6 = VAR_0[VAR_5].regDmnEnum;

            if (VAR_1->regulationTable.regionCode != VAR_6)
            {
                FUNC_1(VAR_2, VAR_6, VAR_7, VAR_8);
            }
            return 0;
        }
    }

    return 1;
}
