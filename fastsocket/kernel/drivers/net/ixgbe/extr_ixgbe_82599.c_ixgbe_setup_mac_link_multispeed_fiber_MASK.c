
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ media_type; int autoneg_advertised; } ;
struct TYPE_4__ {scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;scalar_t__ (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;int (* flap_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_8 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int*,int*,int) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int*,int*,int) ;

__attribute__((used)) static s32 FUNC_13(struct ixgbe_hw *VAR_7,
                                          ixgbe_link_speed VAR_8,
                                          bool VAR_9)
{
 s32 VAR_10 = 0;
 ixgbe_link_speed VAR_11 = VAR_5;
 ixgbe_link_speed VAR_12 = VAR_5;
 u32 VAR_13 = 0;
 u32 VAR_14 = FUNC_0(VAR_7, VAR_0);
 u32 VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;


 VAR_10 = VAR_7->mac.ops.get_link_capabilities(VAR_7, &VAR_11,
         &VAR_17);
 if (VAR_10 != 0)
  return VAR_10;

 VAR_8 &= VAR_11;





 if (VAR_8 & VAR_3) {
  VAR_13++;
  VAR_12 = VAR_3;


  VAR_10 = VAR_7->mac.ops.check_link(VAR_7, &VAR_11, &VAR_16,
      0);
  if (VAR_10 != 0)
   return VAR_10;

  if ((VAR_11 == VAR_3) && VAR_16)
   goto out;


  if (VAR_7->phy.media_type == VAR_6) {
   FUNC_3(VAR_7,
     VAR_3);
  } else {
   VAR_14 |= (VAR_2 | VAR_1);
   FUNC_2(VAR_7, VAR_0, VAR_14);
   FUNC_1(VAR_7);
  }


  FUNC_5(40);

  VAR_10 = FUNC_4(VAR_7,
          VAR_3,
          VAR_9);
  if (VAR_10 != 0)
   return VAR_10;


  if (VAR_7->mac.ops.flap_tx_laser)
   VAR_7->mac.ops.flap_tx_laser(VAR_7);






  for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {

   FUNC_5(100);


   VAR_10 = VAR_7->mac.ops.check_link(VAR_7, &VAR_11,
       &VAR_16, 0);
   if (VAR_10 != 0)
    return VAR_10;

   if (VAR_16)
    goto out;
  }
 }

 if (VAR_8 & VAR_4) {
  VAR_13++;
  if (VAR_12 == VAR_5)
   VAR_12 = VAR_4;


  VAR_10 = VAR_7->mac.ops.check_link(VAR_7, &VAR_11, &VAR_16,
      0);
  if (VAR_10 != 0)
   return VAR_10;

  if ((VAR_11 == VAR_4) && VAR_16)
   goto out;


  if (VAR_7->phy.media_type == VAR_6) {
   FUNC_3(VAR_7,
      VAR_4);
  } else {
   VAR_14 &= ~VAR_1;
   VAR_14 |= VAR_2;
   FUNC_2(VAR_7, VAR_0, VAR_14);
   FUNC_1(VAR_7);
  }


  FUNC_5(40);

  VAR_10 = FUNC_4(VAR_7,
          VAR_4,
          VAR_9);
  if (VAR_10 != 0)
   return VAR_10;


  if (VAR_7->mac.ops.flap_tx_laser)
   VAR_7->mac.ops.flap_tx_laser(VAR_7);


  FUNC_5(100);


  VAR_10 = VAR_7->mac.ops.check_link(VAR_7, &VAR_11, &VAR_16,
      0);
  if (VAR_10 != 0)
   return VAR_10;

  if (VAR_16)
   goto out;
 }






 if (VAR_13 > 1)
  VAR_10 = FUNC_13(VAR_7,
                                                 VAR_12,
                                                 VAR_9);

out:

 VAR_7->phy.autoneg_advertised = 0;

 if (VAR_8 & VAR_3)
  VAR_7->phy.autoneg_advertised |= VAR_3;

 if (VAR_8 & VAR_4)
  VAR_7->phy.autoneg_advertised |= VAR_4;

 return VAR_10;
}
