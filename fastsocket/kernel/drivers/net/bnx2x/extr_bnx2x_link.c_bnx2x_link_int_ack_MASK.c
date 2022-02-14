
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {scalar_t__ phy_link_up; } ;
struct link_params {int port; scalar_t__ switch_cfg; int lane_config; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_9,
          struct link_vars *VAR_10, u8 VAR_11)
{
 struct bnx2x *VAR_12 = VAR_9->bp;
 u8 VAR_13 = VAR_9->port;
 u32 VAR_14;



 FUNC_2(VAR_12, VAR_1 + VAR_13*4,
         (VAR_3 |
   VAR_4 |
   VAR_2));
 if (VAR_10->phy_link_up) {
  if (FUNC_1(VAR_12))
   VAR_14 = VAR_4;
  else {
   if (VAR_11)
    VAR_14 = VAR_3;
   else if (VAR_9->switch_cfg == VAR_8) {



    u32 VAR_15 =
     ((VAR_9->lane_config &
        VAR_6) >>
        VAR_7);
    VAR_14 = ((1 << VAR_15) <<
           VAR_5);
   } else
    VAR_14 = VAR_2;
  }
  FUNC_0(VAR_0, "Ack link up interrupt with mask 0x%x\n",
          VAR_14);
  FUNC_3(VAR_12,
         VAR_1 + VAR_13*4,
         VAR_14);
 }
}
