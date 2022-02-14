
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {TYPE_1__* pdev; scalar_t__ nar; int mode; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ,struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct adm8211_priv *VAR_4 = VAR_3->priv;

 VAR_4->mode = VAR_2;
 VAR_4->nar = 0;
 FUNC_1(VAR_1, 0);
 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_1);

 FUNC_3(VAR_4->pdev->irq, VAR_3);

 FUNC_2(VAR_3);
}
