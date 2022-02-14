
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {size_t* rx_rssi_percentage; } ;
struct r8192_priv {scalar_t__ rf_type; scalar_t__* brfpath_rxenable; TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int cck_Rx_path; int disabledRF; scalar_t__ cck_method; size_t* rf_rssi; long* cck_pwdb_sta; size_t SS_TH_low; size_t diff_TH; size_t* rf_enable_rssi_th; int DbgMode; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device * VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_0(VAR_9);
 u8 VAR_11, VAR_12=0, VAR_13=0, VAR_14=0, VAR_15=0;
 u8 VAR_16=0, VAR_17=0, VAR_18=0;
 u8 VAR_19=0x2;
 u8 VAR_20=0x3;
 long VAR_21=0, VAR_22=0, VAR_23=0;
 u8 VAR_24=0, VAR_25=0, VAR_26=0;
 u8 VAR_27;
 long VAR_28;
 static u8 VAR_29=0, VAR_30=0;
 u8 VAR_31;

 if(VAR_10->rf_type != VAR_4)
  return;

 if(!VAR_30)
 {
  VAR_2.cck_Rx_path = (FUNC_1(VAR_9, 0xa07)&0xf);
  VAR_30 = 1;
 }

 VAR_2.disabledRF = 0xf;
 VAR_2.disabledRF &=~ (FUNC_1(VAR_9, 0xc04));

 if(VAR_10->ieee80211->mode == VAR_5)
 {
  VAR_2.cck_method = VAR_1;

 }


 for (VAR_11=0; VAR_11<VAR_3; VAR_11++)
 {
  if(!VAR_2.DbgMode)
   VAR_2.rf_rssi[VAR_11] = VAR_10->stats.rx_rssi_percentage[VAR_11];

  if(VAR_10->brfpath_rxenable[VAR_11])
  {
   VAR_15++;
   VAR_27 = VAR_2.rf_rssi[VAR_11];

   if(VAR_15 == 1)
   {
    VAR_12 = VAR_13 = VAR_14 = VAR_11;
    VAR_16 = VAR_17 = VAR_18 = VAR_27;
   }
   else if(VAR_15 == 2)
   {
    if(VAR_27 >= VAR_16)
    {
     VAR_16 = VAR_27;
     VAR_12 = VAR_11;
    }
    else
    {
     VAR_18 = VAR_17 = VAR_27;
     VAR_14 = VAR_13 = VAR_11;
    }
   }
   else
   {
    if(VAR_27 > VAR_16)
    {
     VAR_18 = VAR_16;
     VAR_14 = VAR_12;
     VAR_16 = VAR_27;
     VAR_12 = VAR_11;
    }
    else if(VAR_27 == VAR_16)
    {
     VAR_18 = VAR_27;
     VAR_14 = VAR_11;
    }
    else if((VAR_27 < VAR_16) &&(VAR_27 > VAR_18))
    {
     VAR_18 = VAR_27;
     VAR_14 = VAR_11;
    }
    else if(VAR_27 == VAR_18)
    {
     if(VAR_18 == VAR_17)
     {
      VAR_18 = VAR_27;
      VAR_14 = VAR_11;
     }
     else
     {

     }
    }
    else if((VAR_27 < VAR_18) && (VAR_27 > VAR_17))
    {

    }
    else if(VAR_27 == VAR_17)
    {
     if(VAR_18 == VAR_17)
     {
      VAR_17 = VAR_27;
      VAR_13 = VAR_11;
     }
     else
     {

     }
    }
    else if(VAR_27 < VAR_17)
    {
     VAR_17 = VAR_27;
     VAR_13 = VAR_11;
    }
   }
  }
 }

 VAR_15 = 0;

 if(VAR_2.cck_method == VAR_1)
 {
  for (VAR_11=0; VAR_11<VAR_3; VAR_11++)
  {
   if(VAR_10->brfpath_rxenable[VAR_11])
   {
    VAR_15++;
    VAR_28 = VAR_2.cck_pwdb_sta[VAR_11];

    if(VAR_15 == 1)
    {
     VAR_24 = VAR_25 = VAR_26 = VAR_11;
     VAR_21 = VAR_22 = VAR_23 = VAR_28;
    }
    else if(VAR_15 == 2)
    {
     if(VAR_28 >= VAR_21)
     {
      VAR_21 = VAR_28;
      VAR_24 = VAR_11;
     }
     else
     {
      VAR_23 = VAR_22 = VAR_28;
      VAR_26 = VAR_25 = VAR_11;
     }
    }
    else
    {
     if(VAR_28 > VAR_21)
     {
      VAR_23 = VAR_21;
      VAR_26 = VAR_24;
      VAR_21 = VAR_28;
      VAR_24 = VAR_11;
     }
     else if(VAR_28 == VAR_21)
     {
      VAR_23 = VAR_28;
      VAR_26 = VAR_11;
     }
     else if((VAR_28 < VAR_21) &&(VAR_28 > VAR_23))
     {
      VAR_23 = VAR_28;
      VAR_26 = VAR_11;
     }
     else if(VAR_28 == VAR_23)
     {
      if(VAR_23 == VAR_22)
      {
       VAR_23 = VAR_28;
       VAR_26 = VAR_11;
      }
      else
      {

      }
     }
     else if((VAR_28 < VAR_23) && (VAR_28 > VAR_22))
     {

     }
     else if(VAR_28 == VAR_22)
     {
      if(VAR_23 == VAR_22)
      {
       VAR_22 = VAR_28;
       VAR_25 = VAR_11;
      }
      else
      {

      }
     }
     else if(VAR_28 < VAR_22)
     {
      VAR_22 = VAR_28;
      VAR_25 = VAR_11;
     }
    }

   }
  }
 }




 VAR_31 = 0;
 if(VAR_2.cck_method == VAR_1)
 {
  VAR_19 = VAR_24;
  VAR_20 = VAR_26;
  if(VAR_21 != -64)
   VAR_31 = 1;
 }

 if(VAR_17 < VAR_2.SS_TH_low && VAR_29 < 2)
 {
  if((VAR_16 - VAR_17) >= VAR_2.diff_TH)
  {

   VAR_2.rf_enable_rssi_th[VAR_13] = VAR_16+5;

   FUNC_2(VAR_9, VAR_7, 0x1<<VAR_13, 0x0);
   FUNC_2(VAR_9, VAR_8, 0x1<<VAR_13, 0x0);
   VAR_29++;
  }
  if(VAR_2.cck_method == VAR_0)
  {
   VAR_19 = VAR_12;
   VAR_20 = VAR_14;
   if(VAR_16)
    VAR_31 = 1;
  }
 }

 if(VAR_31)
 {
  VAR_2.cck_Rx_path = (VAR_19<<2)|(VAR_20);
  FUNC_2(VAR_9, VAR_6, 0x0f000000, VAR_2.cck_Rx_path);
 }

 if(VAR_2.disabledRF)
 {
  for(VAR_11=0; VAR_11<4; VAR_11++)
  {
   if((VAR_2.disabledRF>>VAR_11) & 0x1)
   {
    if(VAR_16 >= VAR_2.rf_enable_rssi_th[VAR_11])
    {


     FUNC_2(VAR_9, VAR_7, 0x1<<VAR_11, 0x1);
     FUNC_2(VAR_9, VAR_8, 0x1<<VAR_11, 0x1);
     VAR_2.rf_enable_rssi_th[VAR_11] = 100;
     VAR_29--;
    }
   }
  }
 }
}
