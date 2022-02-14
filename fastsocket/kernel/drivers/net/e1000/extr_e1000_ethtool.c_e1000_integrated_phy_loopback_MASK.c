
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int autoneg; scalar_t__ phy_type; scalar_t__ media_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct e1000_adapter*) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct e1000_adapter *VAR_14)
{
 struct e1000_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;

 VAR_15->autoneg = 0;

 if (VAR_15->phy_type == VAR_13) {

  FUNC_1(VAR_15,
        VAR_9, 0x0808);

  FUNC_1(VAR_15, VAR_10, 0x9140);

  FUNC_1(VAR_15, VAR_10, 0x8140);
 }

 VAR_16 = FUNC_2(VAR_0);


 FUNC_1(VAR_15, VAR_10, 0x4140);


 VAR_16 = FUNC_2(VAR_0);
 VAR_16 &= ~VAR_7;
 VAR_16 |= (VAR_3 |
   VAR_2 |
   VAR_6 |
   VAR_1);

 if (VAR_15->media_type == VAR_12 &&
    VAR_15->phy_type == VAR_13)
  VAR_16 |= VAR_4;
 else {


  VAR_17 = FUNC_2(VAR_11);
  if ((VAR_17 & VAR_8) == 0)
   VAR_16 |= (VAR_4 | VAR_5);
 }

 FUNC_3(VAR_0, VAR_16);




 if (VAR_15->phy_type == VAR_13)
  FUNC_0(VAR_14);

 FUNC_4(500);

 return 0;
}
