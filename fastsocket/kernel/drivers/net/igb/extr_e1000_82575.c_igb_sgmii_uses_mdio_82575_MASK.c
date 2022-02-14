
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct e1000_hw *VAR_4)
{
 u32 VAR_5 = 0;
 bool VAR_6 = 0;

 switch (VAR_4->mac.type) {
 case 134:
 case 133:
  VAR_5 = FUNC_0(VAR_0);
  VAR_6 = !!(VAR_5 & VAR_3);
  break;
 case 132:
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_5 = FUNC_0(VAR_1);
  VAR_6 = !!(VAR_5 & VAR_2);
  break;
 default:
  break;
 }
 return VAR_6;
}
