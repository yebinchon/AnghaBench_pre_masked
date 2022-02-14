
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ rf_type; int ShortRetryLimit; int LongRetryLimit; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int bInHctTest; } ;
struct TYPE_3__ {int mode; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int) ;

void FUNC_5(struct net_device* VAR_15)
{
 u32 VAR_16 = 0, VAR_17 = 0;
 u8 VAR_18 = 0, VAR_19 = 0;
 struct r8192_priv *VAR_20 = FUNC_0(VAR_15);



 switch(VAR_20->ieee80211->mode)
 {
 case 131:
  VAR_18 = VAR_2;
  VAR_16 = VAR_4;
  VAR_17 = VAR_4;
  break;
 case 133:
  VAR_18 = VAR_3 |VAR_2;
  VAR_16 = VAR_7;
  VAR_17 = VAR_7;
  break;
 case 130:
  VAR_18 = VAR_2;
  VAR_16 = VAR_4 | VAR_7;
  VAR_17 = VAR_4 | VAR_7;
  break;
 case 132:
  {
      VAR_18 = VAR_2;
      VAR_16 = VAR_4 | VAR_7 | VAR_5 | VAR_6;
      VAR_17 = VAR_4 | VAR_7;
  }
  break;
 case 129:


  VAR_18 = VAR_2;
   VAR_16 = VAR_4 | VAR_7 | VAR_5 | VAR_6;
   VAR_17 = VAR_4 | VAR_7;
  break;
 case 128:
  VAR_18 = VAR_3;
  VAR_16 = VAR_7 | VAR_5 | VAR_6;
  VAR_17 = VAR_7;
  break;
 }

 FUNC_2(VAR_15, VAR_1, VAR_18);
 {
  u32 VAR_21 = 0;
  VAR_21 = VAR_16;
  if (VAR_20->rf_type == VAR_12)
  {
   VAR_21 &= ~(VAR_6);
  }
  FUNC_3(VAR_15, VAR_8, VAR_21);
  FUNC_2(VAR_15, VAR_14, 1);
 }
 VAR_19 = FUNC_1(VAR_15, 0x313);
 VAR_17 = ((VAR_19) << 24) | (VAR_17 & 0x00ffffff);
 FUNC_3(VAR_15, VAR_13, VAR_17);




 FUNC_4(VAR_15, VAR_9,
   VAR_20->ShortRetryLimit << VAR_11 | VAR_20->LongRetryLimit << VAR_10);
}
