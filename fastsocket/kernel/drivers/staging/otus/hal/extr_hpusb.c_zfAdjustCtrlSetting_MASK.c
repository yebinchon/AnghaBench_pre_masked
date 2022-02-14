
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int halCapability; int hwFrequency; int* tPow2xCck; int* tPow2x2g; int tPow2x2g24HeavyClipOffset; int* tPow2x2gHt40; int* tPow2x2gHt20; int* tPow2x5g; int* tPow2x5gHt40; int* tPow2x5gHt20; scalar_t__ hwBw40; } ;
struct TYPE_3__ {scalar_t__ bScheduleScan; scalar_t__ bChannelScan; } ;
struct TYPE_4__ {int forceTxTPC; int maxTxPower2; int maxTxPower5; scalar_t__ wlanMode; scalar_t__ SignalStrength; TYPE_1__ sta; struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_8, u16_t* VAR_9, zbuf_t* VAR_10)
{



    u32_t VAR_11;
 u32_t VAR_12;

    u32_t VAR_13;
    u32_t VAR_14;

    u16_t VAR_15 = 0;
    struct zsHpPriv* VAR_16;

    FUNC_4(VAR_8);
    VAR_16=VAR_7->hpPrivate;


    if (VAR_9 == ((void*)0))
    {
        VAR_14 = FUNC_2(VAR_8, VAR_10, 4) | ((u32_t)FUNC_2(VAR_8, VAR_10, 6) << 16);
    }
    else
    {
        VAR_14 = VAR_9[2] | ((u32_t)VAR_9[3] <<16);
    }

 VAR_13 = 0;



 VAR_11 = VAR_14&0x3;
 VAR_13 |= VAR_11;
    if ( VAR_11 == 0x3 )
  VAR_13 |= 0x1;



 VAR_13 |= (VAR_14&0x4);


 if ( VAR_14&0x800000 )
 {






  if (VAR_11 == 0x2 && ((struct zsHpPriv*)VAR_7->hpPrivate)->hwBw40)
  {
   VAR_13 |= (0x2<<3);
  }

 }
 else {
        VAR_14 &= ~0x80000000;
    }


 VAR_12 = (VAR_14&0x7f0000)>>16;
 VAR_13 |= (VAR_12<<18);


    VAR_13 |= (VAR_14&0x80000000);



 if (VAR_16->halCapability & VAR_1)
 {
     VAR_13 |= (0x1<<15);
 }
 else
 {




     if ((VAR_11 == 2) || (VAR_11 == 3))
     {
         VAR_13 |= (0x5<<15);
     }
     else if (VAR_11 == 1)
     {
         if ((VAR_12 == 0xb) || (VAR_12 == 0xf) ||
             (VAR_12 == 0xa) || (VAR_12 == 0xe) ||
             (VAR_12 == 0x9))
         {
             VAR_13 |= (0x5<<15);
         }
         else
         {
             VAR_13 |= (0x1<<15);
         }
     }
     else
     {
         VAR_13 |= (0x5<<15);
     }
 }





 if (VAR_16->hwFrequency < 3000)
 {
        if (VAR_11 == 0)
        {

            VAR_15 = (VAR_16->tPow2xCck[VAR_12]&0x3f);
        }
        else if (VAR_11 == 1)
        {

            if (VAR_12 == 0xc)
            {
                VAR_15 = (VAR_16->tPow2x2g[3]&0x3f);
            }
            else if (VAR_12 == 0x8)
            {
                VAR_15 = (VAR_16->tPow2x2g[2]&0x3f);
            }
            else if (VAR_12 == 0xd)
            {
                VAR_15 = (VAR_16->tPow2x2g[1]&0x3f);
            }
            else if (VAR_12 == 0x9)
            {
                VAR_15 = ((VAR_16->tPow2x2g[0]-VAR_16->tPow2x2g24HeavyClipOffset)&0x3f);
            }
            else
            {
                VAR_15 = (VAR_16->tPow2x2g[0]&0x3f);
            }
        }
        else if (VAR_11 == 2)
        {
            if ( VAR_14&0x800000 )
            {

                VAR_15 = (VAR_16->tPow2x2gHt40[VAR_12&0x7]&0x3f);
            }
            else
            {

                VAR_15 = (VAR_16->tPow2x2gHt20[VAR_12&0x7]&0x3f);
            }
        }
    }
    else
    {
        if (VAR_11 == 1)
        {

            if (VAR_12 == 0xc)
            {
                VAR_15 = (VAR_16->tPow2x5g[3]&0x3f);
            }
            else if (VAR_12 == 0x8)
            {
                VAR_15 = (VAR_16->tPow2x5g[2]&0x3f);
            }
            else if (VAR_12 == 0xd)
            {
                VAR_15 = (VAR_16->tPow2x5g[1]&0x3f);
            }
            else
            {
                VAR_15 = (VAR_16->tPow2x5g[0]&0x3f);
            }
        }
        else if (VAR_11 == 2)
        {
            if ( VAR_14&0x800000 )
            {

                VAR_15 = (VAR_16->tPow2x5gHt40[VAR_12&0x7]&0x3f);
            }
            else
            {

                VAR_15 = (VAR_16->tPow2x5gHt20[VAR_12&0x7]&0x3f);
            }
        }
    }



 if ((VAR_11==2) && (VAR_14&0x800000) )
 {
     VAR_15 += 2;
 }
 VAR_15 &= 0x3f;


    if(VAR_7->forceTxTPC)
    {
        VAR_15 = (u16_t)(VAR_7->forceTxTPC & 0x3f);
    }

    if (VAR_16->hwFrequency < 3000) {
        VAR_7->maxTxPower2 &= 0x3f;
        VAR_15 = (VAR_15 > VAR_7->maxTxPower2)? VAR_7->maxTxPower2 : VAR_15;
    } else {
        VAR_7->maxTxPower5 &= 0x3f;
        VAR_15 = (VAR_15 > VAR_7->maxTxPower5)? VAR_7->maxTxPower5 : VAR_15;
    }





    if ((VAR_7->sta.bScheduleScan == VAR_0) && (VAR_7->sta.bChannelScan == VAR_0))
    {
        if (( VAR_7->wlanMode == VAR_4 )
                && (FUNC_0(VAR_8))
                && (VAR_7->SignalStrength > 56))
        {
            if (VAR_15 > ((5 +5)*2))
            {
                VAR_15 -= (5*2);
            }
            else if (VAR_15 > (5*2))
            {
                VAR_15 = (5*2);
            }
        }
    }





    VAR_13 |= (VAR_15 & 0x3f) << 9;



    if ((VAR_13&0x3) == 2)
 {
     VAR_13 |= ((VAR_13 >> 12) & 0x1c0);
    }


    if (VAR_9 == ((void*)0))
    {
        FUNC_3(VAR_8, VAR_10, 4, (u16_t) (VAR_13&0xffff));
        FUNC_3(VAR_8, VAR_10, 6, (u16_t) (VAR_13>>16));
    }
    else
    {

        VAR_9[2] = (u16_t) (VAR_13&0xffff);

        VAR_9[3] = (u16_t) (VAR_13>>16);
    }

 FUNC_1(VAR_2, "old phy ctrl = ", VAR_14);
    FUNC_1(VAR_2, "new phy ctrl = ", VAR_13);


}
