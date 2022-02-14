
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_rssi; } ;
struct ath9k_htc_priv {TYPE_1__ rx; int op_flags; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ath9k_htc_priv *VAR_2)
{
 FUNC_1(VAR_2->ah);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2->ah, FUNC_3(VAR_1, &VAR_2->op_flags));
 VAR_2->rx.last_rssi = VAR_0;
}
