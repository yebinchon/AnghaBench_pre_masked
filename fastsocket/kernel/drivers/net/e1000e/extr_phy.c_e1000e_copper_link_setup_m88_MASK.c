
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; int mdix; scalar_t__ id; int revision; TYPE_1__ ops; scalar_t__ disable_polarity_correction; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_24)
{
 struct e1000_phy_info *VAR_25 = &VAR_24->phy;
 s32 VAR_26;
 u16 VAR_27;


 VAR_26 = FUNC_0(VAR_24, VAR_11, &VAR_27);
 if (VAR_26)
  return VAR_26;


 if (VAR_25->type != VAR_22)
  VAR_27 |= VAR_12;
 VAR_27 &= ~VAR_14;

 switch (VAR_25->mdix) {
 case 1:
  VAR_27 |= VAR_16;
  break;
 case 2:
  VAR_27 |= VAR_15;
  break;
 case 3:
  VAR_27 |= VAR_13;
  break;
 case 0:
 default:
  VAR_27 |= VAR_14;
  break;
 }







 VAR_27 &= ~VAR_17;
 if (VAR_25->disable_polarity_correction)
  VAR_27 |= VAR_17;


 if (VAR_25->type == VAR_22) {

  if (VAR_25->id == VAR_0) {
   VAR_27 &= ~VAR_1;
   VAR_26 = FUNC_1(VAR_24, VAR_11,
        VAR_27);
   if (VAR_26)
    return VAR_26;

   VAR_26 = VAR_25->ops.commit(VAR_24);
   if (VAR_26) {
    FUNC_2("Error committing the PHY changes\n");
    return VAR_26;
   }
  }

  VAR_27 |= VAR_1;
 }

 VAR_26 = FUNC_1(VAR_24, VAR_11, VAR_27);
 if (VAR_26)
  return VAR_26;

 if ((VAR_25->type == VAR_23) &&
     (VAR_25->revision < VAR_2) &&
     (VAR_25->id != VAR_0)) {



  VAR_26 = FUNC_0(VAR_24, VAR_10, &VAR_27);
  if (VAR_26)
   return VAR_26;

  VAR_27 |= VAR_9;

  if ((VAR_25->revision == 2) && (VAR_25->id == VAR_18)) {

   VAR_27 &= ~VAR_20;
   VAR_27 |= VAR_19;
  } else {

   VAR_27 &= ~(VAR_6 |
          VAR_8);
   VAR_27 |= (VAR_5 |
         VAR_7);
  }
  VAR_26 = FUNC_1(VAR_24, VAR_10, VAR_27);
  if (VAR_26)
   return VAR_26;
 }

 if ((VAR_25->type == VAR_22) && (VAR_25->id == VAR_0)) {

  VAR_26 = FUNC_1(VAR_24, 29, 0x0003);
  if (VAR_26)
   return VAR_26;


  VAR_26 = FUNC_1(VAR_24, 30, 0x0000);
  if (VAR_26)
   return VAR_26;
 }


 if (VAR_25->ops.commit) {
  VAR_26 = VAR_25->ops.commit(VAR_24);
  if (VAR_26) {
   FUNC_2("Error committing the PHY changes\n");
   return VAR_26;
  }
 }

 if (VAR_25->type == VAR_21) {
  VAR_26 = FUNC_0(VAR_24, VAR_10, &VAR_27);
  if (VAR_26)
   return VAR_26;


  VAR_27 |= VAR_4;
  VAR_27 &= ~VAR_3;
  VAR_26 = FUNC_1(VAR_24, VAR_10, VAR_27);
  if (VAR_26)
   return VAR_26;
 }

 return 0;
}
