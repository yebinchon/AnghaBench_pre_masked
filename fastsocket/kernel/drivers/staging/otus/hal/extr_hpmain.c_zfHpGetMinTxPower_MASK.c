
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsHpPriv {int hwFrequency; int* tPow2x2gHt40; int* tPow2x2gHt20; int* tPow2x5gHt40; int* tPow2x5gHt20; } ;
struct TYPE_2__ {scalar_t__ BandWidth40; struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_1)
{
    struct zsHpPriv* VAR_2;
    u8_t VAR_3 = 0;

    FUNC_0(VAR_1);
    VAR_2 = VAR_0->hpPrivate;

    if (VAR_2->hwFrequency < 3000)
    {
        if(VAR_0->BandWidth40)
        {

            VAR_3 = (VAR_2->tPow2x2gHt40[7]&0x3f);
        }
        else
        {

            VAR_3 = (VAR_2->tPow2x2gHt20[7]&0x3f);
        }
    }
    else
    {
        if(VAR_0->BandWidth40)
        {

            VAR_3 = (VAR_2->tPow2x5gHt40[7]&0x3f);
        }
        else
        {

            VAR_3 = (VAR_2->tPow2x5gHt20[7]&0x3f);
        }
    }

    return VAR_3;
}
