
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int retry_data; int retry_rts; scalar_t__ hw_plcp_len; scalar_t__ card_8185; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void FUNC_6(struct net_device *VAR_29)
{
 u8 VAR_30;
 u8 VAR_31;
 u8 VAR_32;
 u32 VAR_33;
 struct r8180_priv *VAR_34 = (struct r8180_priv *)FUNC_1(VAR_29);

 VAR_33 = FUNC_3(VAR_29, VAR_19);

 if (VAR_34->card_8185) {
  VAR_32 = FUNC_2(VAR_29,VAR_2);
  VAR_32 &= ~(1<<VAR_3);
  VAR_32 &= ~(1<<VAR_4);
  FUNC_4(VAR_29, VAR_2, VAR_32);

  VAR_31 = FUNC_2(VAR_29, VAR_15);
  VAR_31 &= ~(1<<VAR_18);
  VAR_31 &= ~(1<<VAR_17);
  VAR_31 |=(1<<VAR_16);
  FUNC_4(VAR_29, VAR_15, VAR_31);
  FUNC_4(VAR_29, 0xec, 0x3f);
 }

 if (VAR_34->card_8185)
  VAR_33 = VAR_33 &~ (1<<VAR_12);
 else {
  if(VAR_28)
   VAR_33= VAR_33 &~ (1<<VAR_20);
  else
   VAR_33= VAR_33 | (1<<VAR_20);
 }

 VAR_33 = VAR_33 &~ VAR_22;
 VAR_33 = VAR_33 | (VAR_23 <<VAR_24);
 VAR_33 = VAR_33 &~ VAR_7;
 VAR_33 = VAR_33 &~ VAR_13;
 VAR_33 = VAR_33 | (VAR_34->retry_data<<VAR_21);
 VAR_33 = VAR_33 | (VAR_34->retry_rts<<VAR_27);
 VAR_33 = VAR_33 &~ (1<<VAR_25);

 if (VAR_34->card_8185) {
  if (VAR_34->hw_plcp_len)
   VAR_33 = VAR_33 &~ VAR_11;
  else
   VAR_33 = VAR_33 | VAR_11;
 } else
  VAR_33 = VAR_33 &~ VAR_14;

 VAR_33 = VAR_33 &~ VAR_9;
 VAR_33 = VAR_33 | (VAR_8<<VAR_10);
 VAR_33 = VAR_33 | VAR_5;
 VAR_33 = VAR_33 | VAR_6;

 VAR_33 = VAR_33 | (1 << VAR_26);

 FUNC_5(VAR_29,VAR_19,VAR_33);

 FUNC_0(VAR_29);

 VAR_30=FUNC_2(VAR_29,VAR_0);
 FUNC_4(VAR_29,VAR_0,VAR_30 | (1<<VAR_1));

 FUNC_5(VAR_29,VAR_19,VAR_33);
}
