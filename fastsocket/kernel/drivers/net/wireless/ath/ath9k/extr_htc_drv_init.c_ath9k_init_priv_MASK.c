
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int rmw; int write_flush; int enable_write_buffer; int write; int multi_read; int read; } ;
struct TYPE_5__ {int usbdev; int devid; } ;
struct ath_hw {TYPE_2__ reg_ops; int ah_flags; TYPE_1__ hw_version; } ;
struct ath_common {int btcoex_enabled; int cachelsz; int debug_mask; struct ath9k_htc_priv* priv; int hw; struct ath_hw* ah; int * bus_ops; TYPE_2__* ops; } ;
struct TYPE_8__ {int ** bslot; } ;
struct TYPE_7__ {int cleanup_timer; int tx_lock; } ;
struct ath9k_htc_priv {struct ath_hw* ah; TYPE_4__ cur_beacon_conf; TYPE_3__ tx; int fatal_work; int ps_work; int ani_work; int tx_failed_tasklet; int rx_tasklet; int htc_pm_lock; int mutex; int beacon_lock; int hw; int op_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hw*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ath9k_htc_priv*,char*) ;
 int VAR_10 ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int FUNC_9 (struct ath9k_htc_priv*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (struct ath_common*,char*,int) ;
 int FUNC_11 (struct ath_common*,int*) ;
 int FUNC_12 (struct ath_hw*) ;
 struct ath_hw* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_19(struct ath9k_htc_priv *VAR_20,
      u16 VAR_21, char *VAR_22,
      u32 VAR_23)
{
 struct ath_hw *VAR_24 = ((void*)0);
 struct ath_common *VAR_25;
 int VAR_26, VAR_27 = 0, VAR_28 = 0;

 FUNC_15(VAR_4, &VAR_20->op_flags);

 VAR_24 = FUNC_13(sizeof(struct ath_hw), VAR_3);
 if (!VAR_24)
  return -VAR_2;

 VAR_24->hw_version.devid = VAR_21;
 VAR_24->hw_version.usbdev = VAR_23;
 VAR_24->ah_flags |= VAR_0;
 VAR_24->reg_ops.read = VAR_14;
 VAR_24->reg_ops.multi_read = VAR_11;
 VAR_24->reg_ops.write = VAR_15;
 VAR_24->reg_ops.enable_write_buffer = VAR_6;
 VAR_24->reg_ops.write_flush = VAR_16;
 VAR_24->reg_ops.rmw = VAR_13;
 VAR_20->ah = VAR_24;

 VAR_25 = FUNC_4(VAR_24);
 VAR_25->ops = &VAR_24->reg_ops;
 VAR_25->bus_ops = &VAR_19;
 VAR_25->ah = VAR_24;
 VAR_25->hw = VAR_20->hw;
 VAR_25->priv = VAR_20;
 VAR_25->debug_mask = VAR_5;
 VAR_25->btcoex_enabled = VAR_9 == 1;

 FUNC_17(&VAR_20->beacon_lock);
 FUNC_17(&VAR_20->tx.tx_lock);
 FUNC_14(&VAR_20->mutex);
 FUNC_14(&VAR_20->htc_pm_lock);
 FUNC_18(&VAR_20->rx_tasklet, VAR_17,
       (unsigned long)VAR_20);
 FUNC_18(&VAR_20->tx_failed_tasklet, VAR_18,
       (unsigned long)VAR_20);
 FUNC_0(&VAR_20->ani_work, VAR_8);
 FUNC_1(&VAR_20->ps_work, VAR_12);
 FUNC_1(&VAR_20->fatal_work, VAR_7);
 FUNC_16(&VAR_20->tx.cleanup_timer, VAR_10,
      (unsigned long)VAR_20);





 FUNC_11(VAR_25, &VAR_28);
 VAR_25->cachelsz = VAR_28 << 2;

 VAR_27 = FUNC_6(VAR_24);
 if (VAR_27) {
  FUNC_10(VAR_25,
   "Unable to initialize hardware; initialization status: %d\n",
   VAR_27);
  goto err_hw;
 }

 VAR_27 = FUNC_9(VAR_20);
 if (VAR_27)
  goto err_queues;

 for (VAR_26 = 0; VAR_26 < VAR_1; VAR_26++)
  VAR_20->cur_beacon_conf.bslot[VAR_26] = ((void*)0);

 FUNC_2(VAR_24);
 FUNC_7(VAR_20);
 FUNC_8(VAR_20);
 FUNC_3(VAR_20, VAR_22);

 return 0;

err_queues:
 FUNC_5(VAR_24);
err_hw:

 FUNC_12(VAR_24);
 VAR_20->ah = ((void*)0);

 return VAR_27;
}
