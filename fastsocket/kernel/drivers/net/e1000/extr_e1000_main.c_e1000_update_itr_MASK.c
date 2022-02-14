
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;



 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct e1000_adapter *VAR_1,
         u16 VAR_2, int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 struct e1000_hw *VAR_6 = &VAR_1->hw;

 if (FUNC_0(VAR_6->mac_type < VAR_0))
  goto update_itr_done;

 if (VAR_3 == 0)
  goto update_itr_done;

 switch (VAR_2) {
 case 128:

  if (VAR_4/VAR_3 > 8000)
   VAR_5 = 130;
  else if ((VAR_3 < 5) && (VAR_4 > 512))
   VAR_5 = 129;
  break;
 case 129:
  if (VAR_4 > 10000) {

   if (VAR_4/VAR_3 > 8000)
    VAR_5 = 130;
   else if ((VAR_3 < 10) || ((VAR_4/VAR_3) > 1200))
    VAR_5 = 130;
   else if ((VAR_3 > 35))
    VAR_5 = 128;
  } else if (VAR_4/VAR_3 > 2000)
   VAR_5 = 130;
  else if (VAR_3 <= 2 && VAR_4 < 512)
   VAR_5 = 128;
  break;
 case 130:
  if (VAR_4 > 25000) {
   if (VAR_3 > 35)
    VAR_5 = 129;
  } else if (VAR_4 < 6000) {
   VAR_5 = 129;
  }
  break;
 }

update_itr_done:
 return VAR_5;
}
