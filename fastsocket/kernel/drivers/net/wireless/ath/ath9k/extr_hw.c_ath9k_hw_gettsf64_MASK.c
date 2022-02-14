
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (int) ;

u64 FUNC_2(struct ath_hw *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  VAR_6 = FUNC_0(VAR_3, VAR_1);
  if (VAR_6 == VAR_5)
   break;
  VAR_5 = VAR_6;
 }

 FUNC_1( VAR_7 == VAR_2 );

 return (((u64)VAR_5 << 32) | VAR_4);
}
