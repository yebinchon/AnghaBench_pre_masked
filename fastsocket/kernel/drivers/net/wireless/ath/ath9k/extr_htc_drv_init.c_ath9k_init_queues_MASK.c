
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int* hwq_map; int beaconq; int cabq; int ah; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,int ) ;
 int FUNC_3 (int ) ;
 struct ath_common* FUNC_4 (int ) ;
 int FUNC_5 (struct ath_common*,char*) ;

__attribute__((used)) static int FUNC_6(struct ath9k_htc_priv *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_4(VAR_5->ah);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->hwq_map); VAR_7++)
  VAR_5->hwq_map[VAR_7] = -1;

 VAR_5->beaconq = FUNC_3(VAR_5->ah);
 if (VAR_5->beaconq == -1) {
  FUNC_5(VAR_6, "Unable to setup BEACON xmit queue\n");
  goto err;
 }

 VAR_5->cabq = FUNC_1(VAR_5);
 if (VAR_5->cabq == -1) {
  FUNC_5(VAR_6, "Unable to setup CAB xmit queue\n");
  goto err;
 }

 if (!FUNC_2(VAR_5, VAR_1)) {
  FUNC_5(VAR_6, "Unable to setup xmit queue for BE traffic\n");
  goto err;
 }

 if (!FUNC_2(VAR_5, VAR_2)) {
  FUNC_5(VAR_6, "Unable to setup xmit queue for BK traffic\n");
  goto err;
 }
 if (!FUNC_2(VAR_5, VAR_3)) {
  FUNC_5(VAR_6, "Unable to setup xmit queue for VI traffic\n");
  goto err;
 }
 if (!FUNC_2(VAR_5, VAR_4)) {
  FUNC_5(VAR_6, "Unable to setup xmit queue for VO traffic\n");
  goto err;
 }

 return 0;

err:
 return -VAR_0;
}
