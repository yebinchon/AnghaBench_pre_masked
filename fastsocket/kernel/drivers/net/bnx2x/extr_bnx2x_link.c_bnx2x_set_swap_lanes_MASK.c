
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {int lane_config; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
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

__attribute__((used)) static void FUNC_1(struct link_params *VAR_10,
     struct bnx2x_phy *VAR_11)
{
 struct bnx2x *VAR_12 = VAR_10->bp;



 u16 VAR_13, VAR_14;

 VAR_13 = ((VAR_10->lane_config &
    VAR_6) >>
   VAR_7);
 VAR_14 = ((VAR_10->lane_config &
    VAR_8) >>
   VAR_9);

 if (VAR_13 != 0x1b) {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_1,
      (VAR_13 |
       VAR_2 |
       VAR_3));
 } else {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_1, 0);
 }

 if (VAR_14 != 0x1b) {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_4,
      (VAR_14 |
       VAR_5));
 } else {
  FUNC_0(VAR_12, VAR_11,
      VAR_0,
      VAR_4, 0);
 }
}
