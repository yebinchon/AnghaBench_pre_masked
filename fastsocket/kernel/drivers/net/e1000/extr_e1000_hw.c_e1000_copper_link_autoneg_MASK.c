
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; int get_link_status; scalar_t__ wait_autoneg_complete; int autoneg_advertised; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_7)
{
 s32 VAR_8;
 u16 VAR_9;

 FUNC_4("e1000_copper_link_autoneg");




 VAR_7->autoneg_advertised &= VAR_1;




 if (VAR_7->autoneg_advertised == 0)
  VAR_7->autoneg_advertised = VAR_1;


 if (VAR_7->phy_type == VAR_6)
  VAR_7->autoneg_advertised &= VAR_0;

 FUNC_4("Reconfiguring auto-neg advertisement params\n");
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8) {
  FUNC_4("Error Setting up Auto-Negotiation\n");
  return VAR_8;
 }
 FUNC_4("Restarting Auto-Neg\n");




 VAR_8 = FUNC_1(VAR_7, VAR_5, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 |= (VAR_3 | VAR_4);
 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_9);
 if (VAR_8)
  return VAR_8;




 if (VAR_7->wait_autoneg_complete) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8) {
   FUNC_4
       ("Error while waiting for autoneg to complete\n");
   return VAR_8;
  }
 }

 VAR_7->get_link_status = 1;

 return VAR_2;
}
