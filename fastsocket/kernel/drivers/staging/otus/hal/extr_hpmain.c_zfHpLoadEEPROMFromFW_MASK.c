
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct zsHpPriv {int eepromImageRdReq; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int*,int,int ,int ) ;
 int FUNC_1 (int *) ;

u32_t FUNC_2(zdev_t* VAR_3)
{
    u32_t VAR_4[16];
    u32_t VAR_5=0, VAR_6, VAR_7;
    FUNC_1(VAR_3);

    VAR_6 = ((struct zsHpPriv*)VAR_2->hpPrivate)->eepromImageRdReq;

    VAR_4[0] = VAR_1*4;

    for (VAR_7=0; VAR_7<VAR_1; VAR_7++)
    {
        VAR_4[VAR_7+1] = 0x1000 + (((VAR_6*VAR_1) + VAR_7)*4);
    }

    VAR_5 = FUNC_0(VAR_3, VAR_4, (VAR_1+1)*4, VAR_0, 0);

    return VAR_5;
}
