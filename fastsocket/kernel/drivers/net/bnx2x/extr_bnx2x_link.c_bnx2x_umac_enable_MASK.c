
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {int line_speed; int flow_ctrl; scalar_t__ duplex; int eee_status; int mac_type; } ;
struct link_params {int port; int* mac_addr; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2x*,int,int) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct link_params*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct link_params *VAR_30,
       struct link_vars *VAR_31, u8 VAR_32)
{
 u32 VAR_33;
 u32 VAR_34 = VAR_30->port ? VAR_5 : VAR_4;
 struct bnx2x *VAR_35 = VAR_30->bp;

 FUNC_1(VAR_35, VAR_3 + VAR_7,
        (VAR_9 << VAR_30->port));
 FUNC_4(1000, 2000);

 FUNC_1(VAR_35, VAR_3 + VAR_8,
        (VAR_9 << VAR_30->port));

 FUNC_0(VAR_10, "enabling UMAC\n");


 FUNC_1(VAR_35, VAR_11 + VAR_30->port*4, 1);

 VAR_33 = VAR_19 |
  VAR_17 |
  VAR_21 |
  VAR_16;
 switch (VAR_31->line_speed) {
 case 131:
  VAR_33 |= (0<<2);
  break;
 case 130:
  VAR_33 |= (1<<2);
  break;
 case 129:
  VAR_33 |= (2<<2);
  break;
 case 128:
  VAR_33 |= (3<<2);
  break;
 default:
  FUNC_0(VAR_10, "Invalid speed for UMAC %d\n",
          VAR_31->line_speed);
  break;
 }
 if (!(VAR_31->flow_ctrl & VAR_1))
  VAR_33 |= VAR_14;

 if (!(VAR_31->flow_ctrl & VAR_0))
  VAR_33 |= VAR_18;

 if (VAR_31->duplex == VAR_2)
  VAR_33 |= VAR_13;

 FUNC_1(VAR_35, VAR_34 + VAR_23, VAR_33);
 FUNC_3(50);


 if (VAR_31->eee_status & VAR_12) {
  FUNC_0(VAR_10, "configured UMAC for EEE\n");
  FUNC_1(VAR_35, VAR_34 + VAR_28,
         VAR_29);
  FUNC_1(VAR_35, VAR_34 + VAR_24, 0x11);
 } else {
  FUNC_1(VAR_35, VAR_34 + VAR_28, 0x0);
 }


 FUNC_1(VAR_35, VAR_34 + VAR_25,
        ((VAR_30->mac_addr[2] << 24) |
  (VAR_30->mac_addr[3] << 16) |
  (VAR_30->mac_addr[4] << 8) |
  (VAR_30->mac_addr[5])));
 FUNC_1(VAR_35, VAR_34 + VAR_26,
        ((VAR_30->mac_addr[0] << 8) |
  (VAR_30->mac_addr[1])));


 VAR_33 &= ~VAR_17;
 VAR_33 |= VAR_22 |
  VAR_20;
 FUNC_1(VAR_35, VAR_34 + VAR_23, VAR_33);
 FUNC_3(50);


 VAR_33 &= ~VAR_21;


 if (VAR_32)
  VAR_33 |= VAR_15;
 FUNC_1(VAR_35, VAR_34 + VAR_23, VAR_33);




 FUNC_1(VAR_35, VAR_34 + VAR_27, 0x2710);
 FUNC_2(VAR_30,
       ((VAR_31->flow_ctrl & VAR_1) != 0), 1);
 VAR_31->mac_type = VAR_6;

}
