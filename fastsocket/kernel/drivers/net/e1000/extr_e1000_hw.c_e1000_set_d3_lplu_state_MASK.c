
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; scalar_t__ mac_type; scalar_t__ smart_speed; scalar_t__ autoneg_advertised; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_13, bool VAR_14)
{
 s32 VAR_15;
 u16 VAR_16;
 FUNC_2("e1000_set_d3_lplu_state");

 if (VAR_13->phy_type != VAR_10)
  return VAR_3;




 if (VAR_13->mac_type == VAR_8
     || VAR_13->mac_type == VAR_9) {
  VAR_15 =
      FUNC_0(VAR_13, VAR_4, &VAR_16);
  if (VAR_15)
   return VAR_15;
 }

 if (!VAR_14) {
  if (VAR_13->mac_type == VAR_8 ||
      VAR_13->mac_type == VAR_9) {
   VAR_16 &= ~VAR_5;
   VAR_15 =
       FUNC_1(VAR_13, VAR_4,
      VAR_16);
   if (VAR_15)
    return VAR_15;
  }





  if (VAR_13->smart_speed == VAR_12) {
   VAR_15 =
       FUNC_0(VAR_13, VAR_6,
            &VAR_16);
   if (VAR_15)
    return VAR_15;

   VAR_16 |= VAR_7;
   VAR_15 =
       FUNC_1(VAR_13, VAR_6,
      VAR_16);
   if (VAR_15)
    return VAR_15;
  } else if (VAR_13->smart_speed == VAR_11) {
   VAR_15 =
       FUNC_0(VAR_13, VAR_6,
            &VAR_16);
   if (VAR_15)
    return VAR_15;

   VAR_16 &= ~VAR_7;
   VAR_15 =
       FUNC_1(VAR_13, VAR_6,
      VAR_16);
   if (VAR_15)
    return VAR_15;
  }
 } else if ((VAR_13->autoneg_advertised == VAR_2)
     || (VAR_13->autoneg_advertised == VAR_1)
     || (VAR_13->autoneg_advertised ==
         VAR_0)) {

  if (VAR_13->mac_type == VAR_8 ||
      VAR_13->mac_type == VAR_9) {
   VAR_16 |= VAR_5;
   VAR_15 =
       FUNC_1(VAR_13, VAR_4,
      VAR_16);
   if (VAR_15)
    return VAR_15;
  }


  VAR_15 =
      FUNC_0(VAR_13, VAR_6,
           &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_16 &= ~VAR_7;
  VAR_15 =
      FUNC_1(VAR_13, VAR_6,
     VAR_16);
  if (VAR_15)
   return VAR_15;

 }
 return VAR_3;
}
