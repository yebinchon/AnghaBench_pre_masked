
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*,scalar_t__) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct ath_hw *VAR_5, int VAR_6, u32 *VAR_7)
{
 FUNC_0(VAR_5, VAR_0 + (4 * VAR_6));

 if (!FUNC_1(VAR_5, VAR_2, VAR_3,
      VAR_4, 1000))
  return 0;

 *VAR_7 = FUNC_0(VAR_5, VAR_1);
 return 1;
}
