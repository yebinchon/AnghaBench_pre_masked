
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {unsigned int clockrate; } ;
struct ath5k_hw {int dummy; } ;


 struct ath_common* FUNC_0 (struct ath5k_hw*) ;

unsigned int
FUNC_1(struct ath5k_hw *VAR_0, unsigned int VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_0);
 return VAR_1 * VAR_2->clockrate;
}
