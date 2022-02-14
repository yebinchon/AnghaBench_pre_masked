
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_common {int dummy; } ;
struct ath9k_htc_target_rate {int dummy; } ;
struct ath9k_htc_priv {int ah; } ;


 int FUNC_0 (int ,struct ath9k_htc_target_rate*) ;
 int VAR_0 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,char*) ;

__attribute__((used)) static int FUNC_3(struct ath9k_htc_priv *VAR_1,
        struct ath9k_htc_target_rate *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_1->ah);
 int VAR_4;
 u8 VAR_5;

 FUNC_0(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_3,
   "Unable to initialize Rate information on target\n");
 }

 return VAR_4;
}
