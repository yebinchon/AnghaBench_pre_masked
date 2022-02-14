
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_htc_priv {struct ath_hw* ah; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath9k_htc_priv *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->ah;
 u32 VAR_2, VAR_3[2];


 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_1, VAR_2);


 VAR_3[0] = VAR_3[1] = ~0;
 FUNC_1(VAR_1, VAR_3[0], VAR_3[1]);
}
