
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct zsHpPriv {scalar_t__ hwFrequency; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2, u8_t VAR_3)
{
    struct zsHpPriv* VAR_4;

    FUNC_2(VAR_2);
    VAR_4 = VAR_1->hpPrivate;



    if ( VAR_3 == 0 )
    {

        FUNC_0(0x982C, 0x0000a000);
        FUNC_0(0x9808, 0x0);

        if (((struct zsHpPriv*)VAR_1->hpPrivate)->hwFrequency <= VAR_0)
        {


            FUNC_0 (0x98f0, 0x01c20098);
        }
        else
        {


            FUNC_0 (0x98f0, 0x01420098);
        }






        FUNC_1(VAR_2);
    }
    else
    {


        FUNC_0(0x9808, 0x8000000);
        FUNC_0(0x982C, 0xa000a000);

        if (((struct zsHpPriv*)VAR_1->hpPrivate)->hwFrequency <= VAR_0)
        {

            FUNC_0 (0x98f0, 0x00c00018);
        }
        else
        {

            FUNC_0 (0x98f0, 0x00400018);
        }






        FUNC_1(VAR_2);
    }
}
