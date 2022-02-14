
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_0, u32 VAR_1, int VAR_2)
{
 int VAR_3 = 100;

 while (VAR_2 != FUNC_0(VAR_0, VAR_1)) {
  if (VAR_3-- == 0)
   return 0;
  FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_2(10);
 }

 return 1;
}
