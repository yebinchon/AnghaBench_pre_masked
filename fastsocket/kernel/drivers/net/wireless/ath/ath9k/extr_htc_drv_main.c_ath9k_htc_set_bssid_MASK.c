
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int curaid; int curbssid; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ath9k_htc_priv *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_0(VAR_1->ah);

 FUNC_1(VAR_1->ah);
 FUNC_2(VAR_2, VAR_0, "BSSID: %pM aid: 0x%x\n",
  VAR_2->curbssid, VAR_2->curaid);
}
