
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct e1000_adapter *VAR_2, u64 *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_2->hw;
 u16 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7;

 *VAR_3 = 0;

 for (VAR_7 = 0; VAR_7 < (VAR_0 + 1); VAR_7++) {
  if ((FUNC_0(VAR_4, VAR_7, 1, &VAR_5)) < 0) {
   *VAR_3 = 1;
   break;
  }
  VAR_6 += VAR_5;
 }


 if ((VAR_6 != (u16)VAR_1) && !(*VAR_3))
  *VAR_3 = 2;

 return *VAR_3;
}
