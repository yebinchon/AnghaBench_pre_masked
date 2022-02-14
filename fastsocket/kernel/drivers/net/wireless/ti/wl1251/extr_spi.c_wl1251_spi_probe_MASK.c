
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_platform_data {int use_eeprom; int set_power; } ;
struct wl1251 {scalar_t__ irq; int use_eeprom; int set_power; int * if_ops; struct spi_device* if_priv; } ;
struct TYPE_2__ {struct wl12xx_platform_data* platform_data; } ;
struct spi_device {int bits_per_word; scalar_t__ irq; TYPE_1__ dev; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,struct wl1251*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int ,int ,struct wl1251*) ;
 int FUNC_8 (struct spi_device*,struct wl1251*) ;
 int FUNC_9 (struct spi_device*) ;
 struct ieee80211_hw* FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct wl1251*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_6)
{
 struct wl12xx_platform_data *VAR_7;
 struct ieee80211_hw *VAR_8;
 struct wl1251 *VAR_9;
 int VAR_10;

 VAR_7 = VAR_6->dev.platform_data;
 if (!VAR_7) {
  FUNC_11("no platform data");
  return -VAR_1;
 }

 VAR_8 = FUNC_10();
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = VAR_8->priv;

 FUNC_2(VAR_8, &VAR_6->dev);
 FUNC_8(VAR_6, VAR_9);
 VAR_9->if_priv = VAR_6;
 VAR_9->if_ops = &VAR_5;



 VAR_6->bits_per_word = 32;

 VAR_10 = FUNC_9(VAR_6);
 if (VAR_10 < 0) {
  FUNC_11("spi_setup failed");
  goto out_free;
 }

 VAR_9->set_power = VAR_7->set_power;
 if (!VAR_9->set_power) {
  FUNC_11("set power function missing in platform data");
  return -VAR_1;
 }

 VAR_9->irq = VAR_6->irq;
 if (VAR_9->irq < 0) {
  FUNC_11("irq missing in platform data");
  return -VAR_1;
 }

 VAR_9->use_eeprom = VAR_7->use_eeprom;

 FUNC_6(VAR_9->irq, VAR_2);
 VAR_10 = FUNC_7(VAR_9->irq, VAR_4, 0, VAR_0, VAR_9);
 if (VAR_10 < 0) {
  FUNC_11("request_irq() failed: %d", VAR_10);
  goto out_free;
 }

 FUNC_5(VAR_9->irq, VAR_3);

 VAR_10 = FUNC_12(VAR_9);
 if (VAR_10)
  goto out_irq;

 return 0;

 out_irq:
 FUNC_3(VAR_9->irq, VAR_9);

 out_free:
 FUNC_4(VAR_8);

 return VAR_10;
}
