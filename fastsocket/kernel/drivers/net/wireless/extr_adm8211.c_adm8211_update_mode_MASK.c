
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int soft_rx_crc; int mode; int nar; TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;




__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_5)
{
 struct adm8211_priv *VAR_6 = VAR_5->priv;

 FUNC_0();

 VAR_6->soft_rx_crc = 0;
 switch (VAR_6->mode) {
 case 128:
  VAR_6->nar &= ~(VAR_1 | VAR_0);
  VAR_6->nar |= VAR_3 | VAR_2;
  break;
 case 130:
  VAR_6->nar &= ~VAR_1;
  VAR_6->nar |= VAR_0 | VAR_3 | VAR_2;


  if (VAR_6->pdev->revision >= VAR_4)
   VAR_6->soft_rx_crc = 1;
  break;
 case 129:
  VAR_6->nar &= ~(VAR_0 | VAR_3);
  VAR_6->nar |= VAR_1 | VAR_2;
  break;
 }

 FUNC_1();
}
