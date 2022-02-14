
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_tx_ctl {scalar_t__ timestamp; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_5(struct ath9k_htc_priv *VAR_3, struct sk_buff *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_1(VAR_3->ah);
 struct ath9k_htc_tx_ctl *VAR_6;

 VAR_6 = FUNC_0(VAR_4);

 if (FUNC_4(VAR_2,
         VAR_6->timestamp +
         FUNC_3(VAR_0))) {
  FUNC_2(VAR_5, VAR_1, "Dropping a packet due to TX timeout\n");
  return 1;
 }

 return 0;
}
