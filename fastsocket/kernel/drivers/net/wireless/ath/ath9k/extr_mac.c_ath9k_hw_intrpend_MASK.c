
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ) ;

bool FUNC_2(struct ath_hw *VAR_6)
{
 u32 VAR_7;

 if (FUNC_0(VAR_6))
  return 1;

 VAR_7 = FUNC_1(VAR_6, VAR_0);

 if (((VAR_7 & VAR_2) ||
      (VAR_7 & VAR_1)) &&
     (VAR_7 != VAR_3))
  return 1;

 VAR_7 = FUNC_1(VAR_6, VAR_4);
 if ((VAR_7 & VAR_5)
     && (VAR_7 != VAR_3))
  return 1;

 return 0;
}
