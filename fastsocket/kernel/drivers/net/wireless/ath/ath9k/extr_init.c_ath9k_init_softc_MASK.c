
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int * txq; } ;
struct TYPE_8__ {int samp_lock; } ;
struct ath_softc {TYPE_4__ tx; struct ath_hw* sc_ah; int rx_poll_timer; int hw_pll_work; int paprd_work; int hw_check_work; int hw_reset_work; int bcon_tasklet; int intr_tq; TYPE_3__ debug; int mutex; int sc_pm_lock; int sc_serial_rw; int hw; int dfs_detector; TYPE_5__* dev; } ;
struct TYPE_7__ {int rmw; int write; int read; } ;
struct TYPE_6__ {int devid; } ;
struct ath_hw {int led_pin; TYPE_2__ reg_ops; int external_reset; int get_mac_revision; int is_clk_25mhz; int gpio_val; int gpio_mask; int ah_flags; int intr_ref_cnt; TYPE_1__ hw_version; int hw; TYPE_5__* dev; } ;
struct ath_common {int btcoex_enabled; int disable_ani; int antenna_diversity; int cachelsz; struct ath_bus_ops const* bus_ops; int macaddr; int cc_lock; int debug_mask; struct ath_softc* priv; int hw; struct ath_hw* ah; TYPE_2__* ops; } ;
struct ath_bus_ops {int (* aspm_init ) (struct ath_common*) ;} ;
struct ath9k_platform_data {int led_pin; scalar_t__ macaddr; scalar_t__ eeprom_name; int external_reset; int get_mac_revision; int is_clk_25mhz; int gpio_val; int gpio_mask; } ;
struct TYPE_10__ {struct ath9k_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ath_hw*) ;
 int VAR_8 ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct ath_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (struct ath_common*,int*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 (struct ath_softc*,int *) ;
 int FUNC_16 (int *,int) ;
 struct ath_hw* FUNC_17 (TYPE_5__*,int,int ) ;
 int FUNC_18 (struct ath_hw*,int ) ;
 int FUNC_19 (int ,scalar_t__,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,unsigned long) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct ath_common*) ;
 int FUNC_24 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_25(u16 VAR_19, struct ath_softc *VAR_20,
       const struct ath_bus_ops *VAR_21)
{
 struct ath9k_platform_data *VAR_22 = VAR_20->dev->platform_data;
 struct ath_hw *VAR_23 = ((void*)0);
 struct ath_common *VAR_24;
 int VAR_25 = 0, VAR_26;
 int VAR_27 = 0;

 VAR_23 = FUNC_17(VAR_20->dev, sizeof(struct ath_hw), VAR_4);
 if (!VAR_23)
  return -VAR_2;

 VAR_23->dev = VAR_20->dev;
 VAR_23->hw = VAR_20->hw;
 VAR_23->hw_version.devid = VAR_19;
 VAR_23->reg_ops.read = VAR_10;
 VAR_23->reg_ops.write = VAR_11;
 VAR_23->reg_ops.rmw = VAR_12;
 FUNC_16(&VAR_23->intr_ref_cnt, -1);
 VAR_20->sc_ah = VAR_23;

 VAR_20->dfs_detector = FUNC_18(VAR_23, VAR_5);

 if (!VAR_22) {
  VAR_23->ah_flags |= VAR_0;
  VAR_20->sc_ah->led_pin = -1;
 } else {
  VAR_20->sc_ah->gpio_mask = VAR_22->gpio_mask;
  VAR_20->sc_ah->gpio_val = VAR_22->gpio_val;
  VAR_20->sc_ah->led_pin = VAR_22->led_pin;
  VAR_23->is_clk_25mhz = VAR_22->is_clk_25mhz;
  VAR_23->get_mac_revision = VAR_22->get_mac_revision;
  VAR_23->external_reset = VAR_22->external_reset;
 }

 VAR_24 = FUNC_6(VAR_23);
 VAR_24->ops = &VAR_23->reg_ops;
 VAR_24->bus_ops = VAR_21;
 VAR_24->ah = VAR_23;
 VAR_24->hw = VAR_20->hw;
 VAR_24->priv = VAR_20;
 VAR_24->debug_mask = VAR_8;
 VAR_24->btcoex_enabled = VAR_7 == 1;
 VAR_24->disable_ani = 0;





 if (!VAR_24->btcoex_enabled && VAR_9)
  VAR_24->antenna_diversity = 1;

 FUNC_22(&VAR_24->cc_lock);

 FUNC_22(&VAR_20->sc_serial_rw);
 FUNC_22(&VAR_20->sc_pm_lock);
 FUNC_20(&VAR_20->mutex);



 FUNC_24(&VAR_20->intr_tq, VAR_13, (unsigned long)VAR_20);
 FUNC_24(&VAR_20->bcon_tasklet, VAR_6,
       (unsigned long)VAR_20);

 FUNC_2(&VAR_20->hw_reset_work, VAR_17);
 FUNC_2(&VAR_20->hw_check_work, VAR_14);
 FUNC_2(&VAR_20->paprd_work, VAR_16);
 FUNC_1(&VAR_20->hw_pll_work, VAR_15);
 FUNC_21(&VAR_20->rx_poll_timer, VAR_18, (unsigned long)VAR_20);





 FUNC_14(VAR_24, &VAR_27);
 VAR_24->cachelsz = VAR_27 << 2;

 if (VAR_22 && VAR_22->eeprom_name) {
  VAR_25 = FUNC_5(VAR_20, VAR_22->eeprom_name);
  if (VAR_25)
   return VAR_25;
 }


 VAR_25 = FUNC_8(VAR_23);
 if (VAR_25)
  goto err_hw;

 if (VAR_22 && VAR_22->macaddr)
  FUNC_19(VAR_24->macaddr, VAR_22->macaddr, VAR_3);

 VAR_25 = FUNC_12(VAR_20);
 if (VAR_25)
  goto err_queues;

 VAR_25 = FUNC_9(VAR_20);
 if (VAR_25)
  goto err_btcoex;

 VAR_25 = FUNC_10(VAR_20);
 if (VAR_25)
  goto err_btcoex;

 FUNC_3(VAR_20->sc_ah);
 FUNC_11(VAR_20);
 FUNC_13(VAR_20);

 if (VAR_24->bus_ops->aspm_init)
  VAR_24->bus_ops->aspm_init(VAR_24);

 return 0;

err_btcoex:
 for (VAR_26 = 0; VAR_26 < VAR_1; VAR_26++)
  if (FUNC_0(VAR_20, VAR_26))
   FUNC_15(VAR_20, &VAR_20->tx.txq[VAR_26]);
err_queues:
 FUNC_7(VAR_23);
err_hw:
 FUNC_4(VAR_20);
 return VAR_25;
}
