
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath5k_hw {int ah_coverage_class; } ;


 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,int) ;

void
FUNC_5(struct ath5k_hw *VAR_0, u8 VAR_1)
{

 int VAR_2 = FUNC_1(VAR_0) + 3 * VAR_1;
 int VAR_3 = FUNC_0(VAR_0) + VAR_2;
 int VAR_4 = VAR_3;

 FUNC_4(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_3);
 FUNC_3(VAR_0, VAR_4);

 VAR_0->ah_coverage_class = VAR_1;
}
