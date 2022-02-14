
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int rf_type; int MinSpaceCfg; int bInHctTest; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;




 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;






 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*,scalar_t__,int) ;

void FUNC_6(struct net_device *VAR_24)
{

 struct r8192_priv *VAR_25 = FUNC_1(VAR_24);
 u8 VAR_26 = 0;
 u32 VAR_27 = 0, VAR_28 = 0;
 u8 VAR_29 = 0;
 u32 VAR_30 = 0;





 switch(VAR_25->ieee80211->mode)
 {
 case 131:
  VAR_26 = VAR_6;
  VAR_27 = VAR_17;
  VAR_28 = VAR_17;
  break;
 case 133:
  VAR_26 = VAR_7 |VAR_6;
  VAR_27 = VAR_20;
  VAR_28 = VAR_20;
  break;
 case 130:
  VAR_26 = VAR_6;
  VAR_27 = VAR_17 | VAR_20;
  VAR_28 = VAR_17 | VAR_20;
  break;
 case 132:
  if (VAR_25->bInHctTest)
  {
      VAR_26 = VAR_6;
      VAR_27 = VAR_17 | VAR_20;
      VAR_28 = VAR_17 | VAR_20;
  }
  else
  {
      VAR_26 = VAR_6;
      VAR_27 = VAR_17 | VAR_20 | VAR_18 | VAR_19;
      VAR_28 = VAR_17 | VAR_20;
  }
  break;
 case 129:


  VAR_26 = VAR_6;
   VAR_27 = VAR_17 | VAR_20 | VAR_18 | VAR_19;
   VAR_28 = VAR_17 | VAR_20;
  break;
 case 128:
  VAR_26 = VAR_7;
  VAR_27 = VAR_20 | VAR_18 | VAR_19;
  VAR_28 = VAR_20;
  break;
 }





 VAR_29 = FUNC_2(VAR_24, VAR_11);
 VAR_28 = ((VAR_28 & 0x000fffff)<<8) | VAR_29;






 { u8 VAR_31[4] = {0x0e, 0x0e, 0x0a, 0x0a};

  FUNC_3(VAR_24, VAR_21, VAR_31[0]);

  FUNC_3(VAR_24, VAR_21+1, VAR_31[1]);


  FUNC_3(VAR_24, VAR_22, VAR_31[2]);

  FUNC_3(VAR_24, VAR_22+1, VAR_31[3]);
 }

 FUNC_4(VAR_24, VAR_11, VAR_28);
 FUNC_3(VAR_24, VAR_5, VAR_26);
 FUNC_4(VAR_24, VAR_10, 0x02010000);
 FUNC_4(VAR_24, VAR_10+4, 0x06050403);
 FUNC_4(VAR_24, VAR_16, 0x02010000);
 FUNC_4(VAR_24, VAR_16+4, 0x06050403);


 for (VAR_30 = 0; VAR_30 < 8; VAR_30++)
  FUNC_4(VAR_24, VAR_4+VAR_30*4, 0x1f0ffff0);




 FUNC_3(VAR_24, VAR_1, 0x0f);
 FUNC_4(VAR_24, VAR_2, 0xddd77442);
 FUNC_4(VAR_24, VAR_2+4, 0xfffdd772);


 FUNC_5(VAR_24, VAR_15, 0x0080);


 FUNC_3(VAR_24, VAR_23, 0x00);


 FUNC_3(VAR_24, VAR_14, 0x8f);


 FUNC_5(VAR_24, VAR_21, 0x0a0a);
 FUNC_5(VAR_24, VAR_22, 0x0e0e);

 FUNC_3(VAR_24, VAR_0, 0x40);


 FUNC_3(VAR_24, VAR_8, 0xFF);




 switch(VAR_25->rf_type)
 {
  case 136:
  case 137:
   FUNC_0(VAR_9, "Initializeadapter: RF_Type%s\n", (VAR_25->rf_type==137? "(1T1R)":"(1T2R)"));
   VAR_25->MinSpaceCfg = (VAR_12<<3);
   break;
  case 135:
  case 134:
   FUNC_0(VAR_9, "Initializeadapter:RF_Type(2T2R)\n");
   VAR_25->MinSpaceCfg = (VAR_13<<3);
   break;
 }
 FUNC_3(VAR_24, VAR_3, VAR_25->MinSpaceCfg);







}
