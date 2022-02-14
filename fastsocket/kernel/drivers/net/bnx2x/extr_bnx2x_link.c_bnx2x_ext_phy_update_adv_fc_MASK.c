
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int dummy; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct link_params*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int,int*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_6 (struct link_vars*,int) ;

__attribute__((used)) static void FUNC_7(struct bnx2x_phy *VAR_12,
     struct link_params *VAR_13,
     struct link_vars *VAR_14)
{
 u16 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 struct bnx2x *VAR_18 = VAR_13->bp;
 if (VAR_12->type == VAR_11) {
  FUNC_3(VAR_18, VAR_12, 0x4, &VAR_15);
  FUNC_3(VAR_18, VAR_12, 0x5, &VAR_16);
 } else if (FUNC_0(VAR_18) &&
  FUNC_2(VAR_13)) {
  u8 VAR_19 = FUNC_5(VAR_12, VAR_13);
  u16 VAR_20, VAR_21;
  FUNC_4(VAR_18, VAR_12,
    VAR_0, VAR_7,
    &VAR_20);
  VAR_21 = (VAR_9 |
      VAR_8) <<
   VAR_19;
  if ((VAR_20 & VAR_21) == VAR_21) {
   FUNC_4(VAR_18, VAR_12, VAR_0,
     VAR_1, &VAR_15);
   FUNC_4(VAR_18, VAR_12, VAR_0,
     VAR_5, &VAR_16);
  } else {
   FUNC_4(VAR_18, VAR_12, VAR_0,
     VAR_3, &VAR_15);
   FUNC_4(VAR_18, VAR_12, VAR_0,
     VAR_4, &VAR_16);
   VAR_15 = ((VAR_15 &
         VAR_6)
        << 3);
   VAR_16 = ((VAR_16 &
         VAR_6)
        << 3);
  }
 } else {
  FUNC_4(VAR_18, VAR_12,
    VAR_0,
    VAR_1, &VAR_15);
  FUNC_4(VAR_18, VAR_12,
    VAR_0,
    VAR_5, &VAR_16);
 }
 VAR_17 = (VAR_15 &
   VAR_2) >> 8;
 VAR_17 |= (VAR_16 &
    VAR_2) >> 10;
 FUNC_1(VAR_10, "Ext PHY pause result 0x%x\n", VAR_17);
 FUNC_6(VAR_14, VAR_17);

}
