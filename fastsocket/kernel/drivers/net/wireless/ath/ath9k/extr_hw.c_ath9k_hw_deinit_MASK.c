
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ) ;

void FUNC_2(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->state < VAR_1)
  return;

 FUNC_1(VAR_2, VAR_0);
}
