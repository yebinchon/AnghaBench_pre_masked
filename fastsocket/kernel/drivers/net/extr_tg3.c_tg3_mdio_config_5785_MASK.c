
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {TYPE_1__* mdio_bus; } ;
struct phy_device {scalar_t__ interface; TYPE_2__* drv; } ;
struct TYPE_4__ {int phy_id; int phy_id_mask; } ;
struct TYPE_3__ {struct phy_device** phy_map; } ;


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





 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 size_t VAR_32 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_33)
{
 u32 VAR_34;
 struct phy_device *VAR_35;

 VAR_35 = VAR_33->mdio_bus->phy_map[VAR_32];
 switch (VAR_35->drv->phy_id & VAR_35->drv->phy_id_mask) {
 case 132:
 case 131:
  VAR_34 = VAR_11;
  break;
 case 130:
  VAR_34 = VAR_12;
  break;
 case 128:
  VAR_34 = VAR_20;
  break;
 case 129:
  VAR_34 = VAR_19;
  break;
 default:
  return;
 }

 if (VAR_35->interface != VAR_28) {
  FUNC_2(VAR_10, VAR_34);

  VAR_34 = FUNC_1(VAR_1);
  VAR_34 &= ~(VAR_3 |
    VAR_6 | VAR_8);
  VAR_34 |= VAR_5 | VAR_7;
  FUNC_2(VAR_1, VAR_34);

  return;
 }

 if (!FUNC_0(VAR_33, VAR_31))
  VAR_34 |= VAR_14 |
         VAR_15 |
         VAR_16 |
         VAR_13 |
         VAR_18 |
         VAR_17;

 FUNC_2(VAR_10, VAR_34);

 VAR_34 = FUNC_1(VAR_1);
 VAR_34 &= ~(VAR_6 | VAR_8 |
   VAR_2 | VAR_4);
 if (!FUNC_0(VAR_33, VAR_31)) {
  if (FUNC_0(VAR_33, VAR_29))
   VAR_34 |= VAR_2;
  if (FUNC_0(VAR_33, VAR_30))
   VAR_34 |= VAR_4;
 }
 VAR_34 |= VAR_5 | VAR_7 |
        VAR_3 | VAR_9;
 FUNC_2(VAR_1, VAR_34);

 VAR_34 = FUNC_1(VAR_0);
 VAR_34 &= ~(VAR_23 |
   VAR_24 |
   VAR_21 |
   VAR_22 |
   VAR_25 |
   VAR_26 |
   VAR_27);
 if (!FUNC_0(VAR_33, VAR_31)) {
  if (FUNC_0(VAR_33, VAR_29))
   VAR_34 |= VAR_23 |
          VAR_24 |
          VAR_21 |
          VAR_22;
  if (FUNC_0(VAR_33, VAR_30))
   VAR_34 |= VAR_25 |
          VAR_26 |
          VAR_27;
 }
 FUNC_2(VAR_0, VAR_34);
}
