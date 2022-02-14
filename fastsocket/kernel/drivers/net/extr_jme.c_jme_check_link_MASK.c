
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int phy_id; } ;
struct jme_adapter {int phylink; int reg_ghc; int chiprev; TYPE_2__* pdev; scalar_t__ fpgaver; TYPE_1__ mii_if; int dev; } ;
struct TYPE_4__ {int device; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct jme_adapter*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*,int ) ;
 int FUNC_7 (struct jme_adapter*,int ,int) ;
 int FUNC_8 (struct jme_adapter*,char*,...) ;
 struct jme_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_38, int VAR_39)
{
 struct jme_adapter *VAR_40 = FUNC_9(VAR_38);
 u32 VAR_41, VAR_42, VAR_43 = VAR_18, VAR_44, VAR_45;
 char VAR_46[64];
 int VAR_47 = 0;

 VAR_46[0] = '\0';

 if (VAR_40->fpgaver)
  VAR_41 = FUNC_2(VAR_40);
 else
  VAR_41 = FUNC_6(VAR_40, VAR_17);

 if (VAR_41 & VAR_27) {
  if (!(VAR_41 & VAR_22)) {




   VAR_41 = VAR_27;

   VAR_44 = FUNC_3(VAR_40->dev,
      VAR_40->mii_if.phy_id,
      VAR_21);

   VAR_41 |= ((VAR_44 & VAR_2) &&
     (VAR_44 & VAR_1) == 0) ?
     130 :
     (VAR_44 & VAR_1) ?
     129 :
     128;

   VAR_41 |= (VAR_44 & VAR_0) ?
      VAR_23 : 0;

   FUNC_12(VAR_46, "Forced: ");
  } else {



   while (!(VAR_41 & VAR_25) &&
    --VAR_43) {

    FUNC_13(1);

    if (VAR_40->fpgaver)
     VAR_41 = FUNC_2(VAR_40);
    else
     VAR_41 = FUNC_6(VAR_40, VAR_17);
   }
   if (!VAR_43)
    FUNC_1(VAR_40->pdev,
     "Waiting speed resolve timeout.\n");

   FUNC_12(VAR_46, "ANed: ");
  }

  if (VAR_40->phylink == VAR_41) {
   VAR_47 = 1;
   goto out;
  }
  if (VAR_39)
   goto out;

  VAR_40->phylink = VAR_41;

  VAR_42 = VAR_40->reg_ghc & ~(VAR_4 | VAR_3 |
    VAR_9 | VAR_11 |
    VAR_8 | VAR_10);
  switch (VAR_41 & VAR_26) {
  case 128:
   VAR_42 |= VAR_7 |
    VAR_9 | VAR_11;
   FUNC_12(VAR_46, "10 Mbps, ");
   break;
  case 129:
   VAR_42 |= VAR_6 |
    VAR_9 | VAR_11;
   FUNC_12(VAR_46, "100 Mbps, ");
   break;
  case 130:
   VAR_42 |= VAR_5 |
    VAR_8 | VAR_10;
   FUNC_12(VAR_46, "1000 Mbps, ");
   break;
  default:
   break;
  }

  if (VAR_41 & VAR_23) {
   FUNC_7(VAR_40, VAR_19, VAR_31);
   VAR_42 |= VAR_3;
  } else {
   FUNC_7(VAR_40, VAR_19, VAR_31 |
      VAR_28 |
      VAR_29 |
      VAR_30);
   FUNC_7(VAR_40, VAR_20, VAR_33 |
    ((0x2000 << VAR_34) & VAR_32) |
    VAR_35 |
    ((8 << VAR_37) & VAR_36));
  }

  VAR_45 = VAR_12;
  if (FUNC_0(VAR_40->pdev->device, VAR_40->chiprev)) {
   if (!(VAR_41 & VAR_23))
    VAR_45 |= VAR_13;
   switch (VAR_41 & VAR_26) {
   case 128:
    FUNC_4(VAR_40);
    VAR_45 |= VAR_14;
    break;
   case 129:
    FUNC_5(VAR_40);
    VAR_45 |= VAR_14;
    break;
   case 130:
    FUNC_4(VAR_40);
    break;
   default:
    break;
   }
  }

  FUNC_7(VAR_40, VAR_16, VAR_45);
  FUNC_7(VAR_40, VAR_15, VAR_42);
  VAR_40->reg_ghc = VAR_42;

  FUNC_12(VAR_46, (VAR_41 & VAR_23) ?
     "Full-Duplex, " :
     "Half-Duplex, ");
  FUNC_12(VAR_46, (VAR_41 & VAR_24) ?
     "MDI-X" :
     "MDI");
  FUNC_8(VAR_40, "Link is up at %s.\n", VAR_46);
  FUNC_11(VAR_38);
 } else {
  if (VAR_39)
   goto out;

  FUNC_8(VAR_40, "Link is down.\n");
  VAR_40->phylink = 0;
  FUNC_10(VAR_38);
 }

out:
 return VAR_47;
}
