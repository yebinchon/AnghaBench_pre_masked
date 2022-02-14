
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; int fault_detected; int duplex; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; scalar_t__ req_line_speed; } ;
struct bnx2x {int dev; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct link_params*) ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int ) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_8 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_phy*,int ,int ) ;
 int FUNC_10 (struct link_params*,struct bnx2x_phy*,int) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static u8 FUNC_12(struct bnx2x_phy *VAR_18,
     struct link_params *VAR_19,
     struct link_vars *VAR_20)

{
 struct bnx2x *VAR_21 = VAR_19->bp;
 u8 VAR_22 = 0, VAR_23 = VAR_19->port;
 u16 VAR_24 = 0;
 u16 VAR_25, VAR_26, VAR_27;


 FUNC_6(VAR_21, VAR_18,
   VAR_3, VAR_4,
   &VAR_26);
 if (!VAR_26)
  return 0;


 FUNC_6(VAR_21, VAR_18,
   VAR_3, VAR_6,
   &VAR_25);
 VAR_20->line_speed = 0;
 FUNC_2(VAR_15, "8727 RX_ALARM_STATUS  0x%x\n", VAR_25);

 FUNC_9(VAR_21, VAR_18, VAR_9,
        VAR_8);

 FUNC_6(VAR_21, VAR_18,
   VAR_3, VAR_7, &VAR_27);

 FUNC_2(VAR_15, "8727 LASI status 0x%x\n", VAR_27);


 FUNC_6(VAR_21, VAR_18,
   VAR_3, VAR_13, &VAR_27);




 if (!(VAR_18->flags & VAR_1) && !(VAR_25 & (1<<5))) {

  FUNC_6(VAR_21, VAR_18,
    VAR_3, VAR_11,
    &VAR_27);

  if ((VAR_27 & (1<<8)) == 0) {
   if (!FUNC_1(VAR_21))
    VAR_23 = FUNC_0(VAR_21) + (VAR_19->port << 1);
   FUNC_2(VAR_15,
      "8727 Power fault has been detected on port %d\n",
      VAR_23);
   FUNC_11(VAR_21->dev, "Error: Power fault on Port %d has "
         "been detected and the power to "
         "that SFP+ module has been removed "
         "to prevent failure of the card. "
         "Please remove the SFP+ module and "
         "restart the system to clear this "
         "error.\n",
    VAR_23);

   FUNC_7(VAR_21, VAR_18,
      VAR_3,
      VAR_5, (1<<5));

   FUNC_6(VAR_21, VAR_18,
     VAR_3,
     VAR_14, &VAR_27);

   VAR_27 |= (1<<8);
   FUNC_7(VAR_21, VAR_18,
      VAR_3,
      VAR_14, VAR_27);

   FUNC_6(VAR_21, VAR_18,
    VAR_3,
    VAR_6, &VAR_25);
   FUNC_5(VAR_19->bp, VAR_18, 0);
   return 0;
  }
 }


 if (VAR_25 & (1<<5)) {
  FUNC_4(VAR_18, VAR_19);

  FUNC_7(VAR_21, VAR_18,
     VAR_3, VAR_5,
     ((1<<5) | (1<<2)));
 }

 if (!(VAR_18->flags & VAR_2)) {
  FUNC_2(VAR_15, "Enabling 8727 TX laser\n");
  FUNC_10(VAR_19, VAR_18, 1);
 } else {
  FUNC_2(VAR_15, "Tx is disabled\n");
  return 0;
 }

 FUNC_6(VAR_21, VAR_18,
   VAR_3,
   VAR_10, &VAR_24);




 if ((VAR_24 & (1<<2)) && (!(VAR_24 & (1<<15)))) {
  VAR_22 = 1;
  VAR_20->line_speed = VAR_17;
  FUNC_2(VAR_15, "port %x: External link up in 10G\n",
      VAR_19->port);
 } else if ((VAR_24 & (1<<0)) && (!(VAR_24 & (1<<13)))) {
  VAR_22 = 1;
  VAR_20->line_speed = VAR_16;
  FUNC_2(VAR_15, "port %x: External link up in 1G\n",
      VAR_19->port);
 } else {
  VAR_22 = 0;
  FUNC_2(VAR_15, "port %x: External link is down\n",
      VAR_19->port);
 }


 if (VAR_20->line_speed == VAR_17) {
  FUNC_6(VAR_21, VAR_18, VAR_3,
       VAR_9, &VAR_27);

  FUNC_6(VAR_21, VAR_18, VAR_3,
       VAR_9, &VAR_27);

  if (VAR_27 & (1<<0)) {
   VAR_20->fault_detected = 1;
  }
 }

 if (VAR_22) {
  FUNC_8(VAR_18, VAR_19, VAR_20);
  VAR_20->duplex = VAR_0;
  FUNC_2(VAR_15, "duplex = 0x%x\n", VAR_20->duplex);
 }

 if ((FUNC_3(VAR_19)) &&
     (VAR_18->req_line_speed == VAR_16)) {
  FUNC_6(VAR_21, VAR_18,
    VAR_3,
    VAR_12, &VAR_27);



  if (VAR_22)
   VAR_27 &= ~(3<<10);
  else
   VAR_27 |= (3<<10);
  FUNC_7(VAR_21, VAR_18,
     VAR_3,
     VAR_12, VAR_27);
 }
 return VAR_22;
}
