
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsHpPriv {scalar_t__* ledMode; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_1, u16_t VAR_2, u8_t VAR_3)
{
    u16_t VAR_4;
    FUNC_2(VAR_1);



    if (VAR_2 < 2)
    {
        if (((struct zsHpPriv*)VAR_0->hpPrivate)->ledMode[VAR_2] != VAR_3)
        {
            ((struct zsHpPriv*)VAR_0->hpPrivate)->ledMode[VAR_2] = VAR_3;

            VAR_4 = ((struct zsHpPriv*)VAR_0->hpPrivate)->ledMode[0]
                    | (((struct zsHpPriv*)VAR_0->hpPrivate)->ledMode[1]<<1);
            FUNC_0(VAR_1, 0x1d0104, VAR_4);
            FUNC_1(VAR_1);

        }
    }
}
