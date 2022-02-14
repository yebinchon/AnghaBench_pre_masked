
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgb_hw {int device_id; scalar_t__ subsystem_vendor_id; } ;
typedef int ixgb_xpak_vendor ;
typedef int ixgb_phy_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;




 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ixgb_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ixgb_phy_type
FUNC_3(struct ixgb_hw *VAR_8)
{
 ixgb_phy_type VAR_9;
 ixgb_xpak_vendor VAR_10;

 FUNC_0("ixgb_identify_phy");


 switch (VAR_8->device_id) {
 case 131:
  FUNC_1("Identified TXN17401 optics\n");
  VAR_9 = VAR_5;
  break;

 case 128:



  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10 == VAR_7) {
   FUNC_1("Identified TXN17201 optics\n");
   VAR_9 = VAR_4;
  } else {
   FUNC_1("Identified G6005 optics\n");
   VAR_9 = VAR_2;
  }
  break;
 case 129:
  FUNC_1("Identified G6104 optics\n");
  VAR_9 = VAR_3;
  break;
 case 130:
  FUNC_1("Identified CX4\n");
  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10 == VAR_7) {
   FUNC_1("Identified TXN17201 optics\n");
   VAR_9 = VAR_4;
  } else {
   FUNC_1("Identified G6005 optics\n");
   VAR_9 = VAR_2;
  }
  break;
 default:
  FUNC_1("Unknown physical layer module\n");
  VAR_9 = VAR_6;
  break;
 }


 if (VAR_8->subsystem_vendor_id == VAR_0)
  VAR_9 = VAR_1;

 return (VAR_9);
}
