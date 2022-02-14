
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_common {int bssidmask; } ;
struct ath9k_htc_priv {TYPE_1__* ah; } ;
struct TYPE_2__ {int opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ath9k_htc_priv *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_3->ah);

 FUNC_1(VAR_4->bssidmask, VAR_2, VAR_0);

 VAR_3->ah->opmode = VAR_1;
}
