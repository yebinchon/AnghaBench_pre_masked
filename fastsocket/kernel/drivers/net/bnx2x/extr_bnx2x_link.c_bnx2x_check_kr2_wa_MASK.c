
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {scalar_t__ check_kr2_recovery_cnt; int link_attr_sync; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (struct link_params*,struct link_vars*,struct bnx2x_phy*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_5 (struct link_params*,struct link_vars*,struct bnx2x_phy*) ;
 int FUNC_6 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_7 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_8 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_9(struct link_params *VAR_7,
          struct link_vars *VAR_8,
          struct bnx2x_phy *VAR_9)
{
 struct bnx2x *VAR_10 = VAR_7->bp;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;






 if (VAR_8->check_kr2_recovery_cnt > 0) {
  VAR_8->check_kr2_recovery_cnt--;
  return;
 }

 VAR_15 = FUNC_7(VAR_9, VAR_7);
 if (!VAR_15) {
  if (!(VAR_8->link_attr_sync & VAR_0)) {
   FUNC_5(VAR_7, VAR_8, VAR_9);
   FUNC_1(VAR_6, "No sigdet\n");
  }
  return;
 }

 VAR_14 = FUNC_4(VAR_9, VAR_7);
 FUNC_0(VAR_10, VAR_9, VAR_5,
     VAR_1, VAR_14);
 FUNC_2(VAR_10, VAR_9, VAR_2,
   VAR_3, &VAR_11);
 FUNC_2(VAR_10, VAR_9, VAR_2,
   VAR_4, &VAR_12);
 FUNC_6(VAR_7, VAR_9);


 if (VAR_11 == 0) {
  if (!(VAR_8->link_attr_sync & VAR_0)) {
   FUNC_5(VAR_7, VAR_8, VAR_9);
   FUNC_1(VAR_6, "No BP\n");
  }
  return;
 }





 VAR_13 = (((VAR_11 & 0x8000) == 0) ||
     (((VAR_11 & 0x8000) &&
       ((VAR_12 & 0xe0) == 0x2))));


 if (!(VAR_8->link_attr_sync & VAR_0)) {
  if (!VAR_13) {
   FUNC_1(VAR_6, "BP=0x%x, NP=0x%x\n", VAR_11,
      VAR_12);
   FUNC_5(VAR_7, VAR_8, VAR_9);
  }
  return;
 }

 if (VAR_13) {

  FUNC_1(VAR_6, "BP=0x%x, NP=0x%x\n", VAR_11, VAR_12);
  FUNC_3(VAR_7, VAR_8, VAR_9);

  FUNC_8(VAR_9, VAR_7);
  return;
 }
}
