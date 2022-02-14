
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {int* countryIsoName; } ;
struct TYPE_4__ {TYPE_1__ ws; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_1, u8_t *VAR_2, u8_t VAR_3)
{
    u8_t VAR_4[5];
    FUNC_1(VAR_1);

    if (VAR_3 == 4)
    {
        VAR_4[2] = VAR_0->ws.countryIsoName[0] = VAR_2[2];
        VAR_4[3] = VAR_0->ws.countryIsoName[1] = VAR_2[1];
        VAR_4[4] = VAR_0->ws.countryIsoName[2] = VAR_2[0];
    }
    else if (VAR_3 == 3)
    {
        VAR_4[2] = VAR_0->ws.countryIsoName[0] = VAR_2[1];
        VAR_4[3] = VAR_0->ws.countryIsoName[1] = VAR_2[0];
        VAR_4[4] = VAR_0->ws.countryIsoName[2] = '\0';
    }
    else
    {
        return 1;
    }

    return FUNC_0(VAR_1, VAR_4, VAR_3);
}
