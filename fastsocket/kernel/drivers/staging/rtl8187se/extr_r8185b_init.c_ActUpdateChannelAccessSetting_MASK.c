
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct r8180_priv {struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_40__ {int Turbo_Enable; } ;
struct ieee80211_device {scalar_t__ iw_mode; TYPE_5__ current_network; } ;
typedef int pu1Byte ;
typedef scalar_t__ WIRELESS_MODE ;
struct TYPE_44__ {size_t ACI; int AIFSN; } ;
struct TYPE_41__ {int AIFSN; int ACI; scalar_t__ ACM; } ;
struct TYPE_42__ {TYPE_6__ f; } ;
struct TYPE_38__ {int ECWmin; int ECWmax; } ;
struct TYPE_39__ {TYPE_3__ f; } ;
struct TYPE_43__ {int TXOPLimit; TYPE_7__ AciAifsn; TYPE_4__ Ecw; } ;
struct TYPE_37__ {int * AcParam; } ;
struct TYPE_36__ {int AcmControl; } ;
struct TYPE_35__ {scalar_t__ CurrentQosMode; scalar_t__ QBssWirelessMode; TYPE_2__ WMMParamEle; } ;
struct TYPE_34__ {int (* SetHwRegHandler ) (TYPE_19__*,int ,int ) ;} ;
struct TYPE_33__ {TYPE_1__ HalFunc; } ;
struct TYPE_32__ {TYPE_8__ f; scalar_t__ longData; } ;
struct TYPE_28__ {size_t ACI; scalar_t__ ACM; } ;
struct TYPE_31__ {TYPE_14__ f; } ;
struct TYPE_26__ {TYPE_9__ f; } ;
struct TYPE_24__ {scalar_t__ ECWmin; scalar_t__ ECWmax; } ;
struct TYPE_25__ {TYPE_10__ f; } ;
struct TYPE_27__ {TYPE_12__ AciAifsn; TYPE_11__ Ecw; scalar_t__ TXOPLimit; } ;
struct TYPE_30__ {TYPE_13__ f; } ;
struct TYPE_29__ {int SIFS_Timer; int DIFS_Timer; int SlotTimeTimer; int EIFS_Timer; int CWminIndex; int CWmaxIndex; } ;
typedef TYPE_15__* PCHANNEL_ACCESS_SETTING ;
typedef TYPE_16__* PAC_PARAM ;
typedef TYPE_17__* PACI_AIFSN ;
typedef TYPE_18__ AC_PARAM ;
typedef size_t AC_CODING ;






 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_19__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 TYPE_21__* VAR_22 ;
 TYPE_20__* VAR_23 ;
 int FUNC_2 (TYPE_19__*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void
FUNC_4(
 struct net_device *VAR_24,
 WIRELESS_MODE VAR_25,
 PCHANNEL_ACCESS_SETTING VAR_26
 )
{
 struct r8180_priv *VAR_27 = FUNC_1(VAR_24);
 struct ieee80211_device *VAR_28 = VAR_27->ieee80211;
 AC_CODING VAR_29;
 AC_PARAM VAR_30;

 u8 VAR_31 = 0;
 u8 VAR_32;
 VAR_26->SIFS_Timer = 0x22;
 VAR_26->DIFS_Timer = 0x1C;
 VAR_26->SlotTimeTimer = 9;
 VAR_26->EIFS_Timer = 0x5B;
 VAR_26->CWminIndex = 3;
 VAR_26->CWmaxIndex = 7;

 FUNC_3(VAR_24, VAR_15, VAR_26->SIFS_Timer);

 FUNC_3(VAR_24, VAR_16, VAR_26->SlotTimeTimer);

 VAR_32 = VAR_21 + (2 * VAR_26->SlotTimeTimer );






 FUNC_3(VAR_24, VAR_11, VAR_26->EIFS_Timer);

 FUNC_3(VAR_24, VAR_7, 0x5B);
 {
  VAR_31 = 1;

 }


 if(VAR_31)
 {






  VAR_30.longData = 0;
  VAR_30.f.AciAifsn.f.AIFSN = 2;
  VAR_30.f.AciAifsn.f.ACM = 0;
  VAR_30.f.Ecw.f.ECWmin = VAR_26->CWminIndex;
  VAR_30.f.Ecw.f.ECWmax = VAR_26->CWmaxIndex;
  VAR_30.f.TXOPLimit = 0;




  if( VAR_28->current_network.Turbo_Enable == 1 )
   VAR_30.f.TXOPLimit = 0x01FF;

  if (VAR_28->iw_mode == VAR_13)
   VAR_30.f.TXOPLimit = 0x0020;


  for(VAR_29 = 0; VAR_29 < VAR_2; VAR_29++)
  {
   VAR_30.f.AciAifsn.f.ACI = (u8)VAR_29;
   {
    PAC_PARAM VAR_33 = (PAC_PARAM)(&VAR_30);
    AC_CODING VAR_34;
    u8 VAR_35;
    u32 VAR_36;


    VAR_34 = VAR_33->f.AciAifsn.f.ACI;
    VAR_35 = VAR_33->f.AciAifsn.f.AIFSN * VAR_26->SlotTimeTimer + VAR_21;
    VAR_36 = ( (((u32)(VAR_33->f.TXOPLimit)) << VAR_6) |
      (((u32)(VAR_33->f.Ecw.f.ECWmax)) << VAR_4) |
      (((u32)(VAR_33->f.Ecw.f.ECWmin)) << VAR_5) |
      (((u32)VAR_35) << VAR_3));

    switch(VAR_34)
    {
     case 130:

      break;

     case 131:

      break;

     case 129:

      break;

     case 128:

      break;

     default:
      FUNC_0( "SetHwReg8185(): invalid ACI: %d !\n", VAR_34);
      break;
    }




    {
     PACI_AIFSN VAR_37 = (PACI_AIFSN)(&VAR_33->f.AciAifsn);
     AC_CODING VAR_38 = VAR_37->f.ACI;






     u8 VAR_39 = 0;

     if( VAR_37->f.ACM )
     {
      switch(VAR_38)
      {
       case 131:
        VAR_39 |= (VAR_10|VAR_9|VAR_1);
        break;

       case 129:
        VAR_39 |= (VAR_18|VAR_17|VAR_1);
        break;

       case 128:
        VAR_39 |= (VAR_20|VAR_19|VAR_1);
        break;

       default:
        FUNC_0("SetHwReg8185(): [HW_VAR_ACM_CTRL] ACM set failed: eACI is %d\n", VAR_38 );
        break;
      }
     }
     else
     {
      switch(VAR_38)
      {
       case 131:
        VAR_39 &= ( (~VAR_10) & (~VAR_9) & (~VAR_1) );
        break;

       case 129:
        VAR_39 &= ( (~VAR_18) & (~VAR_17) & (~VAR_1) );
        break;

       case 128:
        VAR_39 &= ( (~VAR_20) & (~VAR_19) & (~VAR_1) );
        break;

       default:
        break;
      }
     }







     FUNC_3(VAR_24, VAR_0, 0);
    }
   }
  }


 }
}
