
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int advertising; int flowctrl; int autoneg; int duplex; int speed; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct tg3*,int ) ;
 int FUNC_6 (struct tg3*,int ) ;
 int FUNC_7 (struct tg3*,int ,int*) ;

__attribute__((used)) static int FUNC_8(struct tg3 *VAR_24)
{
 int VAR_25;
 u32 VAR_26;

 VAR_25 = FUNC_7(VAR_24, VAR_16, &VAR_26);
 if (VAR_25)
  goto done;

 if (!(VAR_26 & VAR_8)) {
  VAR_24->link_config.autoneg = VAR_6;
  VAR_24->link_config.advertising = 0;
  FUNC_5(VAR_24, VAR_18);

  VAR_25 = -VAR_12;

  switch (VAR_26 & (128 | 129)) {
  case 0:
   if (VAR_24->phy_flags & VAR_23)
    goto done;

   VAR_24->link_config.speed = VAR_19;
   break;
  case 129:
   if (VAR_24->phy_flags & VAR_23)
    goto done;

   VAR_24->link_config.speed = VAR_20;
   break;
  case 128:
   if (!(VAR_24->phy_flags & VAR_22)) {
    VAR_24->link_config.speed = VAR_21;
    break;
   }

  default:
   goto done;
  }

  if (VAR_26 & VAR_9)
   VAR_24->link_config.duplex = VAR_10;
  else
   VAR_24->link_config.duplex = VAR_11;

  VAR_24->link_config.flowctrl = VAR_13 | VAR_14;

  VAR_25 = 0;
  goto done;
 }

 VAR_24->link_config.autoneg = VAR_7;
 VAR_24->link_config.advertising = VAR_0;
 FUNC_6(VAR_24, VAR_18);

 if (!(VAR_24->phy_flags & VAR_23)) {
  u32 VAR_27;

  VAR_25 = FUNC_7(VAR_24, VAR_15, &VAR_26);
  if (VAR_25)
   goto done;

  VAR_27 = FUNC_0(VAR_26 & VAR_5);
  VAR_24->link_config.advertising |= VAR_27 | VAR_2;

  VAR_24->link_config.flowctrl = FUNC_3(VAR_26);
 } else {
  VAR_24->link_config.advertising |= VAR_1;
 }

 if (!(VAR_24->phy_flags & VAR_22)) {
  u32 VAR_28;

  if (!(VAR_24->phy_flags & VAR_23)) {
   VAR_25 = FUNC_7(VAR_24, VAR_17, &VAR_26);
   if (VAR_25)
    goto done;

   VAR_28 = FUNC_2(VAR_26);
  } else {
   VAR_25 = FUNC_7(VAR_24, VAR_15, &VAR_26);
   if (VAR_25)
    goto done;

   VAR_28 = FUNC_4(VAR_26);
   VAR_24->link_config.flowctrl = VAR_28;

   VAR_26 &= (VAR_4 | VAR_3);
   VAR_28 = FUNC_1(VAR_26);
  }

  VAR_24->link_config.advertising |= VAR_28;
 }

done:
 return VAR_25;
}
