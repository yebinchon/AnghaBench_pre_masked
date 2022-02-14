
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sky2_port {unsigned int port; int flow_mode; int advertising; int wol; TYPE_1__* netdev; int phy_lock; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ regs; } ;
typedef enum flow_control { ____Placeholder_flow_control } flow_control ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (struct sky2_hw*,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int ) ;
 int FUNC_6 (struct sky2_hw*,unsigned int) ;
 int FUNC_7 (struct sky2_hw*,unsigned int) ;
 int FUNC_8 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_9 (struct sky2_hw*,scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct sky2_port *VAR_38)
{
 struct sky2_hw *VAR_39 = VAR_38->hw;
 unsigned VAR_40 = VAR_38->port;
 enum flow_control VAR_41;
 u16 VAR_42;
 u32 VAR_43;


 FUNC_8(VAR_39, VAR_2, VAR_3);
 FUNC_8(VAR_39, FUNC_0(VAR_40, VAR_7), VAR_10);

 FUNC_9(VAR_39, FUNC_0(VAR_40, VAR_19), VAR_18);
 FUNC_9(VAR_39, FUNC_0(VAR_40, VAR_6), VAR_8);




 VAR_41 = VAR_38->flow_mode;
 VAR_42 = VAR_38->advertising;

 VAR_38->advertising &= ~(VAR_1|VAR_0);
 VAR_38->flow_mode = VAR_5;

 FUNC_10(&VAR_38->phy_lock);
 FUNC_7(VAR_39, VAR_40);
 FUNC_6(VAR_39, VAR_40);
 FUNC_11(&VAR_38->phy_lock);

 VAR_38->flow_mode = VAR_41;
 VAR_38->advertising = VAR_42;


 FUNC_2(VAR_39, VAR_40, VAR_17,
      VAR_14|VAR_16|VAR_15|
      VAR_12|VAR_13|VAR_11);


 FUNC_3(VAR_39->regs + FUNC_1(VAR_40, VAR_37),
      VAR_38->netdev->dev_addr, VAR_4);


 FUNC_8(VAR_39, FUNC_1(VAR_40, VAR_36), VAR_25);
 VAR_42 = 0;
 if (VAR_38->wol & VAR_24)
  VAR_42 |= VAR_34|VAR_32;
 else
  VAR_42 |= VAR_29|VAR_26;

 if (VAR_38->wol & VAR_23)
  VAR_42 |= VAR_35|VAR_33;
 else
  VAR_42 |= VAR_30|VAR_27;

 VAR_42 |= VAR_31|VAR_28;
 FUNC_8(VAR_39, FUNC_1(VAR_40, VAR_36), VAR_42);


 VAR_43 = FUNC_4(VAR_39, VAR_20);
 VAR_43 |= VAR_21;
 FUNC_5(VAR_39, VAR_20, VAR_43);


 FUNC_9(VAR_39, FUNC_0(VAR_40, VAR_22), VAR_9);

}
