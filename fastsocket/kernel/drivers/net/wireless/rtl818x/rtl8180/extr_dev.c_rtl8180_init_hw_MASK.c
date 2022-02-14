
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rtl8180_priv {TYPE_3__* map; scalar_t__ r8185; TYPE_1__* rf; TYPE_2__* tx_ring; int rx_ring_dma; int anaparam; } ;
struct ieee80211_hw {int wiphy; struct rtl8180_priv* priv; } ;
struct TYPE_6__ {int BRSR; int CARRIER_SENSE_COUNTER; int PHY_DELAY; int SECURITY; int EEPROM_CMD; int CONFIG3; int GP_ENABLE; int RESP_RATE; int RATE_FALLBACK; int WPA_CONF; int INT_TIMEOUT; int CONFIG2; int TLPDA; int TNPDA; int THPDA; int TBDA; int RDSAR; int MSR; int FEMR; int CMD; int INT_MASK; } ;
struct TYPE_5__ {int dma; } ;
struct TYPE_4__ {int (* init ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8180_priv*,int ) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct rtl8180_priv*,int *,int) ;
 int FUNC_5 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_6 (struct rtl8180_priv*,int *,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_5->priv;
 u16 VAR_7;

 FUNC_6(VAR_6, &VAR_6->map->CMD, 0);
 FUNC_3(VAR_6, &VAR_6->map->CMD);
 FUNC_0(10);


 FUNC_4(VAR_6, &VAR_6->map->INT_MASK, 0);
 FUNC_3(VAR_6, &VAR_6->map->CMD);

 VAR_7 = FUNC_3(VAR_6, &VAR_6->map->CMD);
 VAR_7 &= (1 << 1);
 VAR_7 |= VAR_1;
 FUNC_6(VAR_6, &VAR_6->map->CMD, VAR_1);
 FUNC_3(VAR_6, &VAR_6->map->CMD);
 FUNC_0(200);


 if (FUNC_3(VAR_6, &VAR_6->map->CMD) & VAR_1) {
  FUNC_8(VAR_5->wiphy, "reset timeout!\n");
  return -VAR_0;
 }

 FUNC_6(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_3);
 FUNC_3(VAR_6, &VAR_6->map->CMD);
 FUNC_0(200);

 if (FUNC_3(VAR_6, &VAR_6->map->CONFIG3) & (1 << 3)) {

  VAR_7 = FUNC_3(VAR_6, &VAR_6->map->CONFIG3);
  VAR_7 |= 1 << 1;
  FUNC_6(VAR_6, &VAR_6->map->CONFIG3, VAR_7);
  VAR_7 = FUNC_2(VAR_6, &VAR_6->map->FEMR);
  VAR_7 |= (1 << 15) | (1 << 14) | (1 << 4);
  FUNC_4(VAR_6, &VAR_6->map->FEMR, VAR_7);
 }

 FUNC_6(VAR_6, &VAR_6->map->MSR, 0);

 if (!VAR_6->r8185)
  FUNC_1(VAR_6, VAR_6->anaparam);

 FUNC_5(VAR_6, &VAR_6->map->RDSAR, VAR_6->rx_ring_dma);
 FUNC_5(VAR_6, &VAR_6->map->TBDA, VAR_6->tx_ring[3].dma);
 FUNC_5(VAR_6, &VAR_6->map->THPDA, VAR_6->tx_ring[2].dma);
 FUNC_5(VAR_6, &VAR_6->map->TNPDA, VAR_6->tx_ring[1].dma);
 FUNC_5(VAR_6, &VAR_6->map->TLPDA, VAR_6->tx_ring[0].dma);


 FUNC_6(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_2);
 VAR_7 = FUNC_3(VAR_6, &VAR_6->map->CONFIG2);
 FUNC_6(VAR_6, &VAR_6->map->CONFIG2, VAR_7 & ~(1 << 3));
 if (VAR_6->r8185) {
  VAR_7 = FUNC_3(VAR_6, &VAR_6->map->CONFIG2);
  FUNC_6(VAR_6, &VAR_6->map->CONFIG2, VAR_7 | (1 << 4));
 }
 FUNC_6(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_4);





 FUNC_5(VAR_6, &VAR_6->map->INT_TIMEOUT, 0);

 if (VAR_6->r8185) {
  FUNC_6(VAR_6, &VAR_6->map->WPA_CONF, 0);
  FUNC_6(VAR_6, &VAR_6->map->RATE_FALLBACK, 0x81);
  FUNC_6(VAR_6, &VAR_6->map->RESP_RATE, (8 << 4) | 0);

  FUNC_4(VAR_6, &VAR_6->map->BRSR, 0x01F3);


  VAR_7 = FUNC_3(VAR_6, &VAR_6->map->GP_ENABLE);
  FUNC_6(VAR_6, &VAR_6->map->GP_ENABLE, VAR_7 & ~(1 << 6));
  FUNC_6(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_2);
  VAR_7 = FUNC_3(VAR_6, &VAR_6->map->CONFIG3);
  FUNC_6(VAR_6, &VAR_6->map->CONFIG3, VAR_7 | (1 << 2));
  FUNC_6(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_4);
 } else {
  FUNC_4(VAR_6, &VAR_6->map->BRSR, 0x1);
  FUNC_6(VAR_6, &VAR_6->map->SECURITY, 0);

  FUNC_6(VAR_6, &VAR_6->map->PHY_DELAY, 0x6);
  FUNC_6(VAR_6, &VAR_6->map->CARRIER_SENSE_COUNTER, 0x4C);
 }

 VAR_6->rf->init(VAR_5);
 if (VAR_6->r8185)
  FUNC_4(VAR_6, &VAR_6->map->BRSR, 0x01F3);
 return 0;
}
