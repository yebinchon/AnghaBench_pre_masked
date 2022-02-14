
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u16 ;
struct link_vars {size_t line_speed; size_t phy_flags; size_t link_status; size_t flow_ctrl; int phy_link_up; int link_up; scalar_t__ fault_detected; int eee_status; int duplex; } ;
struct link_params {size_t port; size_t num_phys; int feature_config_flags; struct bnx2x_phy* phy; int multi_phy_config; struct bnx2x* bp; } ;
struct bnx2x_phy {size_t (* read_status ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;int supported; int flags; int (* config_init ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;int (* phy_specific_func ) (struct bnx2x_phy*,struct link_params*,int ) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;



 size_t FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct link_params*) ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ,int ) ;
 int FUNC_7 (struct link_params*,struct link_vars*,size_t) ;
 int FUNC_8 (struct link_params*) ;
 int FUNC_9 (struct bnx2x*,size_t,int) ;
 int FUNC_10 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_11 (struct link_params*,struct link_vars*) ;
 int FUNC_12 (struct link_params*,struct link_vars*,size_t) ;
 size_t FUNC_13 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 size_t FUNC_14 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_15 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_16 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_17 (int,int) ;

int FUNC_18(struct link_params *VAR_29, struct link_vars *VAR_30)
{
 struct bnx2x *VAR_31 = VAR_29->bp;
 struct link_vars VAR_32[VAR_13];
 u8 VAR_33 = VAR_29->port;
 u8 VAR_34, VAR_35;
 u8 VAR_36 = 0, VAR_37;
 int VAR_38 = 0;
 u8 VAR_39 = 0;
 u16 VAR_40 = 0, VAR_41 = VAR_30->line_speed;
 u8 VAR_42 = VAR_9;
 VAR_30->phy_flags &= ~VAR_23;
 VAR_30->link_status &= ~VAR_12;
 for (VAR_35 = VAR_9; VAR_35 < VAR_29->num_phys;
       VAR_35++) {
  VAR_32[VAR_35].flow_ctrl = 0;
  VAR_32[VAR_35].link_status = 0;
  VAR_32[VAR_35].line_speed = 0;
  VAR_32[VAR_35].duplex = VAR_2;
  VAR_32[VAR_35].phy_link_up = 0;
  VAR_32[VAR_35].link_up = 0;
  VAR_32[VAR_35].fault_detected = 0;

  VAR_32[VAR_35].eee_status = VAR_30->eee_status;
 }

 if (FUNC_5(VAR_31))
  FUNC_10(VAR_29, &VAR_29->phy[VAR_9]);

 FUNC_1(VAR_14, "port %x, XGXS?%x, int_status 0x%x\n",
   VAR_33, (VAR_30->phy_flags & VAR_25),
   FUNC_2(VAR_31, VAR_20 + VAR_33*4));

 VAR_39 = (u8)(FUNC_2(VAR_31, VAR_16 +
    VAR_33*0x18) > 0);
 FUNC_1(VAR_14, "int_mask 0x%x MI_INT %x, SERDES_LINK %x\n",
   FUNC_2(VAR_31, VAR_17 + VAR_33*4),
   VAR_39,
   FUNC_2(VAR_31, VAR_19 + VAR_33*0x3c));

 FUNC_1(VAR_14, " 10G %x, XGXS_LINK %x\n",
   FUNC_2(VAR_31, VAR_21 + VAR_33*0x68),
   FUNC_2(VAR_31, VAR_22 + VAR_33*0x68));


 if (!FUNC_0(VAR_31))
  FUNC_3(VAR_31, VAR_18 + VAR_33*4, 0);
 for (VAR_35 = VAR_3; VAR_35 < VAR_29->num_phys;
       VAR_35++) {
  struct bnx2x_phy *VAR_43 = &VAR_29->phy[VAR_35];
  if (!VAR_43->read_status)
   continue;

  VAR_37 = VAR_43->read_status(VAR_43, VAR_29,
            &VAR_32[VAR_35]);
  if (VAR_37) {
   FUNC_1(VAR_14, "phy in index %d link is up\n",
       VAR_35);
  } else {
   FUNC_1(VAR_14, "phy in index %d link is down\n",
       VAR_35);
   continue;
  }

  if (!VAR_36) {
   VAR_36 = 1;
   VAR_42 = VAR_35;
  } else {
   switch (FUNC_8(VAR_29)) {
   case 129:
   case 130:




    VAR_42 = VAR_3;
    break;
   case 128:



    VAR_42 = VAR_4;
    break;
   default:
    FUNC_1(VAR_14, "Invalid link indication"
        "mpc=0x%x. DISABLING LINK !!!\n",
        VAR_29->multi_phy_config);
    VAR_36 = 0;
    break;
   }
  }
 }
 VAR_41 = VAR_30->line_speed;






 if (VAR_29->phy[VAR_9].read_status)
  VAR_29->phy[VAR_9].read_status(
   &VAR_29->phy[VAR_9],
   VAR_29, VAR_30);







 if (VAR_42 > VAR_9) {
  VAR_30->flow_ctrl = VAR_32[VAR_42].flow_ctrl;



  VAR_30->link_status |= VAR_32[VAR_42].link_status;




  if (VAR_42 == VAR_3) {
   if (VAR_29->phy[VAR_4].phy_specific_func) {
    FUNC_1(VAR_14,
       "Disabling TX on EXT_PHY2\n");
    VAR_29->phy[VAR_4].phy_specific_func(
     &VAR_29->phy[VAR_4],
     VAR_29, VAR_0);
   }
  }

  VAR_40 = VAR_32[VAR_42].line_speed;
  VAR_30->duplex = VAR_32[VAR_42].duplex;
  if (VAR_29->phy[VAR_42].supported &
      VAR_28)
   VAR_30->link_status |= VAR_11;
  else
   VAR_30->link_status &= ~VAR_11;

  VAR_30->eee_status = VAR_32[VAR_42].eee_status;

  FUNC_1(VAR_14, "Active external phy selected: %x\n",
      VAR_42);
 }

 for (VAR_35 = VAR_3; VAR_35 < VAR_29->num_phys;
       VAR_35++) {
  if (VAR_29->phy[VAR_35].flags &
      VAR_8) {
   FUNC_9(VAR_31, VAR_33,
       VAR_35 ==
       VAR_42);
   break;
  }
 }
 FUNC_1(VAR_14, "vars->flow_ctrl = 0x%x, vars->link_status = 0x%x,"
     " ext_phy_line_speed = %d\n", VAR_30->flow_ctrl,
     VAR_30->link_status, VAR_40);





 if (VAR_30->phy_link_up) {
  if (!(FUNC_4(VAR_29)) && VAR_36 &&
      (VAR_40 != VAR_30->line_speed)) {
   FUNC_1(VAR_14, "Internal link speed %d is"
       " different than the external"
       " link speed %d\n", VAR_30->line_speed,
       VAR_40);
   VAR_30->phy_link_up = 0;
  } else if (VAR_41 != VAR_30->line_speed) {
   FUNC_3(VAR_31, VAR_15 + VAR_29->port*4,
          0);
   FUNC_17(1000, 2000);
  }
 }


 VAR_34 = (VAR_30->line_speed >= VAR_27);

 FUNC_7(VAR_29, VAR_30, VAR_34);
 if (!(FUNC_4(VAR_29))) {
  FUNC_1(VAR_14, "ext_phy_link_up = %d, int_link_up = %d,"
      " init_preceding = %d\n", VAR_36,
      VAR_30->phy_link_up,
      VAR_29->phy[VAR_3].flags &
      VAR_7);
  if (!(VAR_29->phy[VAR_3].flags &
        VAR_7)
      && VAR_36 && !VAR_30->phy_link_up) {
   VAR_30->line_speed = VAR_40;
   if (VAR_30->line_speed < VAR_26)
    VAR_30->phy_flags |= VAR_24;
   else
    VAR_30->phy_flags &= ~VAR_24;

   if (VAR_29->phy[VAR_9].config_init)
    VAR_29->phy[VAR_9].config_init(
     &VAR_29->phy[VAR_9], VAR_29,
      VAR_30);
  }
 }



 VAR_30->link_up = (VAR_30->phy_link_up &&
    (VAR_36 ||
     FUNC_4(VAR_29)) &&
    (VAR_32[VAR_42].fault_detected == 0));


 if (VAR_29->feature_config_flags & VAR_6)
  VAR_30->link_status |= VAR_10;
 else
  VAR_30->link_status &= ~VAR_10;

 if (VAR_30->link_up)
  VAR_38 = FUNC_12(VAR_29, VAR_30, VAR_34);
 else
  VAR_38 = FUNC_11(VAR_29, VAR_30);


 if (VAR_29->feature_config_flags & VAR_5)
  FUNC_6(VAR_31, VAR_1, 0);

 return VAR_38;
}
