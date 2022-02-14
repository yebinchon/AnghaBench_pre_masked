
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int duplex; int link_status; int flow_ctrl; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (struct link_params*) ;
 scalar_t__ VAR_23 ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int,int,int) ;
 int FUNC_6 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;

__attribute__((used)) static int FUNC_7(struct bnx2x_phy *VAR_24,
          struct link_params *VAR_25,
          struct link_vars *VAR_26)
{
 struct bnx2x *VAR_27 = VAR_25->bp;

 u16 VAR_28, VAR_29 = VAR_1, VAR_30 = 0, VAR_31;
 int VAR_32 = 0;


 FUNC_0(VAR_27, VAR_24,
     VAR_20,
     VAR_12,
     &VAR_28);
 if (VAR_28 & VAR_13)
  VAR_29 = VAR_0;
 if (VAR_28 & VAR_14)
  VAR_30 = 1;
 VAR_31 = VAR_28 & VAR_3;
 FUNC_1(VAR_22, "gp_status 0x%x, is_link_up %d, speed_mask 0x%x\n",
         VAR_28, VAR_30, VAR_31);
 VAR_32 = FUNC_5(VAR_24, VAR_25, VAR_26, VAR_30, VAR_31,
      VAR_29);
 if (VAR_32 == -VAR_2)
  return VAR_32;

 if (VAR_28 & VAR_14) {
  if (FUNC_2(VAR_25)) {
   VAR_26->duplex = VAR_29;
   FUNC_4(VAR_24, VAR_25, VAR_26, VAR_28);
   if (VAR_24->req_line_speed == VAR_23)
    FUNC_6(VAR_24, VAR_25, VAR_26,
            VAR_28);
  }
 } else {
  if ((VAR_24->req_line_speed == VAR_23) &&
      FUNC_2(VAR_25)) {

   FUNC_3(VAR_24, VAR_25);
  }
 }


 if (FUNC_2(VAR_25) &&
     (VAR_26->link_status & VAR_4)) {
  u16 VAR_33;

  FUNC_0(VAR_27, VAR_24, VAR_19,
      VAR_11, &VAR_33);

  if (VAR_33 & VAR_8)
   VAR_26->link_status |=
    VAR_5;
  if (VAR_33 & (VAR_10 |
      VAR_9))
   VAR_26->link_status |=
    VAR_6;

  FUNC_0(VAR_27, VAR_24, VAR_21,
      VAR_15, &VAR_33);

  if (VAR_33 & VAR_18)
   VAR_26->link_status |=
    VAR_7;
  if (VAR_33 & (VAR_16 | VAR_17))
   VAR_26->link_status |=
    VAR_6;
 }

 FUNC_1(VAR_22, "duplex %x  flow_ctrl 0x%x link_status 0x%x\n",
     VAR_26->duplex, VAR_26->flow_ctrl, VAR_26->link_status);
 return VAR_32;
}
