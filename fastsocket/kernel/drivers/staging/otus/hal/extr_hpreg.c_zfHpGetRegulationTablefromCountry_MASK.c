
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
struct TYPE_7__ {size_t countryCode; size_t regDmnEnum; scalar_t__ isoName; } ;
struct TYPE_5__ {size_t regionCode; } ;
struct TYPE_6__ {TYPE_1__ regulationTable; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,size_t,size_t,size_t) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_2, u16_t VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5 = 2000, VAR_6 = 6000;
    u16_t VAR_7;

    FUNC_5(VAR_2);

    FUNC_4();

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
    {
        if (VAR_3 == VAR_0[VAR_4].countryCode)
        {
            VAR_7 = VAR_0[VAR_4].regDmnEnum;


            FUNC_1(VAR_2, (u8_t*)VAR_0[VAR_4].isoName);



            if (VAR_1->regulationTable.regionCode != VAR_7)
            {


                FUNC_2(VAR_2, VAR_7, VAR_5, VAR_6);
            }
            return;
        }
    }
    FUNC_3("Invalid CountryCode = ", VAR_3);
}
