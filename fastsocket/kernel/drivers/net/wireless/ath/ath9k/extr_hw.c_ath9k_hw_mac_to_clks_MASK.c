
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int clockrate; } ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;

__attribute__((used)) static u32 FUNC_1(struct ath_hw *VAR_0, u32 VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_0);

 return VAR_1 * VAR_2->clockrate;
}
