
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_1__* ah; scalar_t__ num_ap_vif; scalar_t__ num_ibss_vif; } ;
struct TYPE_2__ {int opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ath9k_htc_priv *VAR_3)
{
 if (VAR_3->num_ibss_vif)
  VAR_3->ah->opmode = VAR_0;
 else if (VAR_3->num_ap_vif)
  VAR_3->ah->opmode = VAR_1;
 else
  VAR_3->ah->opmode = VAR_2;

 FUNC_0(VAR_3->ah);
}
