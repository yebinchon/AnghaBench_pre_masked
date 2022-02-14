
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {scalar_t__ mac_type; scalar_t__ phy_type; scalar_t__ speed_downgraded; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

s32 FUNC_3(struct e1000_hw *VAR_17, u16 *VAR_18, u16 *VAR_19)
{
 u32 VAR_20;
 s32 VAR_21;
 u16 VAR_22;

 FUNC_1("e1000_get_speed_and_duplex");

 if (VAR_17->mac_type >= VAR_15) {
  VAR_20 = FUNC_2(VAR_14);
  if (VAR_20 & VAR_2) {
   *VAR_18 = VAR_13;
   FUNC_1("1000 Mbs, ");
  } else if (VAR_20 & VAR_1) {
   *VAR_18 = VAR_12;
   FUNC_1("100 Mbs, ");
  } else {
   *VAR_18 = VAR_11;
   FUNC_1("10 Mbs, ");
  }

  if (VAR_20 & VAR_0) {
   *VAR_19 = VAR_4;
   FUNC_1("Full Duplex\n");
  } else {
   *VAR_19 = VAR_5;
   FUNC_1(" Half Duplex\n");
  }
 } else {
  FUNC_1("1000 Mbs, Full Duplex\n");
  *VAR_18 = VAR_13;
  *VAR_19 = VAR_4;
 }





 if (VAR_17->phy_type == VAR_16 && VAR_17->speed_downgraded) {
  VAR_21 = FUNC_0(VAR_17, VAR_9, &VAR_22);
  if (VAR_21)
   return VAR_21;

  if (!(VAR_22 & VAR_6))
   *VAR_19 = VAR_5;
  else {
   VAR_21 =
       FUNC_0(VAR_17, VAR_10, &VAR_22);
   if (VAR_21)
    return VAR_21;
   if ((*VAR_18 == VAR_12
        && !(VAR_22 & VAR_7))
       || (*VAR_18 == VAR_11
    && !(VAR_22 & VAR_8)))
    *VAR_19 = VAR_5;
  }
 }

 return VAR_3;
}
