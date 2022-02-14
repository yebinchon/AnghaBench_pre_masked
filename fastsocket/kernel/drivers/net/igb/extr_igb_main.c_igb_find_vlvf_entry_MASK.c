
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct igb_adapter *VAR_3, int VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 int VAR_6;
 u32 VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(FUNC_0(VAR_6));
  if ((VAR_7 & VAR_1) &&
      VAR_4 == (VAR_7 & VAR_2))
   break;
 }

 if (VAR_6 >= VAR_0)
  VAR_6 = -1;

 return VAR_6;
}
