
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_1__* htc; int dev; } ;
struct TYPE_2__ {int tgt_ready; int target_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ath9k_htc_priv *VAR_2)
{
 int VAR_3;

 if (FUNC_1(&VAR_2->htc->tgt_ready) > 0) {
  FUNC_0(&VAR_2->htc->tgt_ready);
  return 0;
 }


 VAR_3 = FUNC_3(&VAR_2->htc->target_wait, VAR_1);
 if (!VAR_3) {
  FUNC_2(VAR_2->dev, "ath9k_htc: Target is unresponsive\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_2->htc->tgt_ready);

 return 0;
}
