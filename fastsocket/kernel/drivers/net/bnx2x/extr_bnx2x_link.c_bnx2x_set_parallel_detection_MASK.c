
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int speed_cap_mask; scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
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
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_16,
      struct link_params *VAR_17)
{
 struct bnx2x *VAR_18 = VAR_17->bp;
 u16 VAR_19;
 FUNC_0(VAR_18, VAR_16,
     VAR_5,
     VAR_7,
     &VAR_19);
 if (VAR_16->speed_cap_mask & VAR_14)
  VAR_19 |= VAR_8;
 else
  VAR_19 &= ~VAR_8;
 FUNC_2(VAR_12, "phy->speed_cap_mask = 0x%x, control2 = 0x%x\n",
  VAR_16->speed_cap_mask, VAR_19);
 FUNC_1(VAR_18, VAR_16,
     VAR_5,
     VAR_7,
     VAR_19);

 if ((VAR_16->type == VAR_15) &&
      (VAR_16->speed_cap_mask &
      VAR_13)) {
  FUNC_2(VAR_12, "XGXS\n");

  FUNC_1(VAR_18, VAR_16,
     VAR_4,
     VAR_2,
     VAR_3);

  FUNC_0(VAR_18, VAR_16,
      VAR_4,
      VAR_0,
      &VAR_19);


  VAR_19 |=
      VAR_1;

  FUNC_1(VAR_18, VAR_16,
      VAR_4,
      VAR_0,
      VAR_19);


  FUNC_1(VAR_18, VAR_16,
      VAR_6,
      VAR_9,
      VAR_10 |
      VAR_11);
 }
}
