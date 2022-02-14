
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int mac_type; int media_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;

 switch (VAR_4->mac_type) {
 case 135:
  if (VAR_4->media_type == VAR_2) {




   while (FUNC_1(VAR_3) &&
         VAR_6++ < 10);
   if (VAR_6 < 11)
    return 0;
  }
  break;

 case 134:
 case 138:
 case 133:
 case 132:
 case 131:
 case 130:
 case 137:
 case 136:
 case 129:
 case 128:
  return FUNC_0(VAR_3);
  break;
 default:



  FUNC_2(VAR_4, VAR_1, &VAR_5);
  VAR_5 |= VAR_0;
  FUNC_3(VAR_4, VAR_1, VAR_5);
  return 0;
  break;
 }

 return 8;
}
