
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u64_t ;
typedef size_t u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {int OpFlags; scalar_t__ disableDfsCh; } ;
struct cmode {int mode; int flags; } ;
typedef int s16_t ;
struct TYPE_10__ {int privFlags; int maxRegTxPower; int channelFlags; scalar_t__ channel; scalar_t__ maxTxPower; scalar_t__ minTxPower; } ;
typedef TYPE_2__ ZM_HAL_CHANNEL ;
struct TYPE_9__ {scalar_t__ regionCode; int allowChannelCnt; TYPE_2__* allowChannel; } ;
struct TYPE_13__ {TYPE_1__ regulationTable; struct zsHpPriv* hpPrivate; } ;
struct TYPE_12__ {scalar_t__ lowChannel; scalar_t__ highChannel; scalar_t__ channelSep; int useDfs; int channelBW; int usePassScan; int powerDfs; } ;
struct TYPE_11__ {int dfsMask; int pscan; int flags; int * chan11g; int * chan11a; } ;
typedef TYPE_3__ REG_DOMAIN ;
typedef TYPE_4__ REG_DMN_FREQ_BAND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,int ,TYPE_3__*) ;






 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_2 ;
 size_t FUNC_3 (struct cmode const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 struct cmode const* VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_5__* VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(zdev_t* VAR_11, u16_t VAR_12, u16_t VAR_13, u16_t VAR_14)
{
 REG_DOMAIN VAR_15, VAR_16;
 const struct cmode *VAR_17;
 s16_t VAR_18=0,VAR_19;
 struct zsHpPriv* VAR_20;

    FUNC_9(VAR_11);
    VAR_20=VAR_10->hpPrivate;

    FUNC_7();

 if (!FUNC_1(VAR_12, ~VAR_3, &VAR_15))
 {
        FUNC_6("couldn't find unitary 5GHz reg domain for Region Code ", VAR_12);
  return;
 }
 if (!FUNC_1(VAR_12, VAR_3, &VAR_16))
 {
        FUNC_6("couldn't find unitary 2GHz reg domain for Region Code ", VAR_12);
  return;
 }
    if (VAR_10->regulationTable.regionCode == VAR_12)
    {
        FUNC_6("current region code is the same with Region Code ", VAR_12);
        return;
    }
    else
    {
        VAR_10->regulationTable.regionCode = VAR_12;
    }

    VAR_18 = 0;

    FUNC_8(VAR_11);

 for (VAR_17 = VAR_7; VAR_17 < &VAR_7[FUNC_3(VAR_7)]; VAR_17++)
 {
  u16_t VAR_21;
  u64_t *VAR_22=((void*)0);
  REG_DOMAIN *VAR_23=((void*)0);
  REG_DMN_FREQ_BAND *VAR_24=((void*)0),*VAR_25=((void*)0);

  switch (VAR_17->mode)
  {
  case 128:


            VAR_22 = ((void*)0);




   break;
  case 133:
      if ((VAR_20->OpFlags & 0x1) != 0)
      {
       VAR_23 = &VAR_15;
       VAR_22 = VAR_23->chan11a;
       VAR_25 = &VAR_9[0];
       VAR_13 = 4920;
       VAR_14 = 5825;


            }

            {

            }
   break;
  case 131:



   VAR_22 = ((void*)0);





   break;
  case 130:
      if ((VAR_20->OpFlags & 0x2) != 0)
      {
       VAR_23 = &VAR_16;
       VAR_22 = VAR_23->chan11g;
       VAR_25 = &VAR_8[0];
       VAR_13 = 2412;

                VAR_14 = 2472;


            }

            {

            }
   break;
  case 129:


            VAR_22 = ((void*)0);




   break;
  case 132:


            VAR_22 = ((void*)0);




   break;
  default:
            FUNC_6("Unkonwn HAL mode ", VAR_17->mode);
   continue;
  }
  if (VAR_22 == ((void*)0))
  {

      continue;
        }
        if (FUNC_4(VAR_22))
        {

         continue;
        }


        if (VAR_25 == ((void*)0) )
        {
            continue;
        }

  for (VAR_19=0;VAR_19<64*VAR_0; VAR_19++)
  {
   if (FUNC_2(VAR_19,VAR_22))
   {
    VAR_24 = &VAR_25[VAR_19];




    for (VAR_21=VAR_24->lowChannel; VAR_21 <= VAR_24->highChannel;
         VAR_21 += VAR_24->channelSep)
    {
     ZM_HAL_CHANNEL VAR_26;


                    if ((VAR_20->disableDfsCh==0) || (!(VAR_24->useDfs & VAR_23->dfsMask)))
                    {
                        if( VAR_24->channelBW < 20 )
                        {






                            continue;
                        }
     if ((VAR_21 >= VAR_13) && (VAR_21 <= VAR_14))
     {
         VAR_26.channel = VAR_21;
         VAR_26.channelFlags = VAR_17->flags;
         VAR_26.maxRegTxPower = VAR_24->powerDfs;
         if (VAR_24->usePassScan & VAR_23->pscan)
          VAR_26.channelFlags |= VAR_6;
         else
          VAR_26.channelFlags &= ~VAR_6;
         if (VAR_24->useDfs & VAR_23->dfsMask)
          VAR_26.privFlags = VAR_4;
         else
          VAR_26.privFlags = 0;


         if (VAR_24->useDfs & VAR_23->dfsMask & VAR_1)
         {
          VAR_26.privFlags &= ~VAR_4;
          VAR_26.privFlags |= VAR_5;
         }

         if(VAR_23->flags & VAR_2)
          VAR_26.privFlags |= VAR_5;

         VAR_26.minTxPower = 0;
         VAR_26.maxTxPower = 0;

               FUNC_5(VAR_18 < 60);

         VAR_10->regulationTable.allowChannel[VAR_18++] = VAR_26;
        }
    }
   }
  }
 }
 }
 VAR_10->regulationTable.allowChannelCnt = VAR_18;
    FUNC_10(VAR_11);
}
