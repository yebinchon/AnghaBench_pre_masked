
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; int eee_status; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_13,
      struct link_params *VAR_14,
      struct link_vars *VAR_15)
{
 struct bnx2x *VAR_16 = VAR_14->bp;
 u16 VAR_17 = 0, VAR_18 = 0;
 u32 VAR_19 = 0;
 u8 VAR_20 = 0;

 FUNC_1(VAR_16, VAR_13, VAR_0, VAR_1, &VAR_17);
 FUNC_1(VAR_16, VAR_13, VAR_0, VAR_2, &VAR_18);

 if (VAR_18 & 0x2) {
  VAR_19 |= VAR_4;
  if (VAR_17 & 0x2) {
   if (VAR_15->line_speed == VAR_10)
    VAR_20 = 1;
   FUNC_0(VAR_3, "EEE negotiated - 100M\n");
  }
 }
 if (VAR_18 & 0x14) {
  VAR_19 |= VAR_6;
  if (VAR_17 & 0x14) {
   if (VAR_15->line_speed == VAR_11)
    VAR_20 = 1;
   FUNC_0(VAR_3, "EEE negotiated - 1G\n");
  }
 }
 if (VAR_18 & 0x68) {
  VAR_19 |= VAR_5;
  if (VAR_17 & 0x68) {
   if (VAR_15->line_speed == VAR_12)
    VAR_20 = 1;
   FUNC_0(VAR_3, "EEE negotiated - 10G\n");
  }
 }

 VAR_15->eee_status &= ~VAR_8;
 VAR_15->eee_status |= (VAR_19 << VAR_9);

 if (VAR_20) {
  FUNC_0(VAR_3, "EEE is active\n");
  VAR_15->eee_status |= VAR_7;
 }

}
