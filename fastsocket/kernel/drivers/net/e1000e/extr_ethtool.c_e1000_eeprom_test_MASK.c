
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct e1000_adapter {int hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct e1000_adapter *VAR_2, u64 *VAR_3)
{
 u16 VAR_4;
 u16 VAR_5 = 0;
 u16 VAR_6;

 *VAR_3 = 0;

 for (VAR_6 = 0; VAR_6 < (VAR_0 + 1); VAR_6++) {
  if ((FUNC_0(&VAR_2->hw, VAR_6, 1, &VAR_4)) < 0) {
   *VAR_3 = 1;
   return *VAR_3;
  }
  VAR_5 += VAR_4;
 }


 if ((VAR_5 != (u16)VAR_1) && !(*VAR_3))
  *VAR_3 = 2;

 return *VAR_3;
}
