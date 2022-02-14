
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int,int ) ;

void FUNC_4(struct ath_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_2)) {
  VAR_4 = VAR_4 ? 0 : 1;
  FUNC_3(VAR_2, VAR_0, ((VAR_4&1) << VAR_3),
   FUNC_1(VAR_3));
  return;
 }

 if (FUNC_2(VAR_2))
  VAR_4 = ~VAR_4;

 FUNC_3(VAR_2, VAR_1, ((VAR_4 & 1) << VAR_3),
  FUNC_1(VAR_3));
}
