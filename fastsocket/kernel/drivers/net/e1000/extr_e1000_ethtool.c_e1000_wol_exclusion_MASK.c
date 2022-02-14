
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_wolinfo {int supported; } ;
struct e1000_hw {int device_id; } ;
struct e1000_adapter {int eeprom_wol; int quad_port_a; struct e1000_hw hw; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct e1000_adapter *VAR_2,
          struct ethtool_wolinfo *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_2->hw;
 int VAR_5 = 1;

 switch (VAR_4->device_id) {
 case 139:
 case 137:
 case 138:
 case 136:
 case 132:
 case 134:
 case 135:
 case 129:
 case 130:

  VAR_3->supported = 0;
  break;
 case 133:
 case 131:

  if (FUNC_0(VAR_1) & VAR_0) {
   VAR_3->supported = 0;
   break;
  }

  VAR_5 = 0;
  break;
 case 128:

  if (!VAR_2->quad_port_a) {
   VAR_3->supported = 0;
   break;
  }

  VAR_5 = 0;
  break;
 default:



  if (FUNC_0(VAR_1) & VAR_0 &&
      !VAR_2->eeprom_wol) {
   VAR_3->supported = 0;
   break;
  }

  VAR_5 = 0;
 }

 return VAR_5;
}
