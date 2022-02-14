
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wimax_dev {struct net_device* net_dev; int op_reset; int op_rfkill_sw_toggle; int op_msg_from_user; int name; } ;
struct TYPE_4__ {int kobj; } ;
struct net_device {TYPE_2__ dev; } ;
struct i2400m {int * bm_cmd_buf; int * bm_ack_buf; struct wimax_dev wimax_dev; int src_mac_addr; } ;
struct device {TYPE_1__* bus; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (struct device*,char*,...) ;
 char* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2400m*,int) ;
 int FUNC_5 (struct i2400m*) ;
 struct device* FUNC_6 (struct i2400m*) ;
 int VAR_5 ;
 int FUNC_7 (struct i2400m*,int) ;
 int FUNC_8 (struct i2400m*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct i2400m*) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,int,char*,char*,char*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct wimax_dev*,struct net_device*) ;
 int FUNC_20 (struct wimax_dev*) ;
 int FUNC_21 (struct wimax_dev*,int ) ;

int FUNC_22(struct i2400m *VAR_9, enum i2400m_bri VAR_10)
{
 int VAR_11 = -VAR_0;
 struct device *VAR_12 = FUNC_6(VAR_9);
 struct wimax_dev *VAR_13 = &VAR_9->wimax_dev;
 struct net_device *VAR_14 = VAR_9->wimax_dev.net_dev;

 FUNC_1(3, VAR_12, "(i2400m %p)\n", VAR_9);

 FUNC_15(VAR_13->name, sizeof(VAR_13->name),
   "i2400m-%s:%s", VAR_12->bus->name, FUNC_3(VAR_12));

 VAR_9->bm_cmd_buf = FUNC_11(VAR_3, VAR_1);
 if (VAR_9->bm_cmd_buf == ((void*)0)) {
  FUNC_2(VAR_12, "cannot allocate USB command buffer\n");
  goto error_bm_cmd_kzalloc;
 }
 VAR_9->bm_ack_buf = FUNC_11(VAR_2, VAR_1);
 if (VAR_9->bm_ack_buf == ((void*)0)) {
  FUNC_2(VAR_12, "cannot allocate USB ack buffer\n");
  goto error_bm_ack_buf_kzalloc;
 }
 VAR_11 = FUNC_4(VAR_9, VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_12, "read mac addr: bootrom init "
   "failed: %d\n", VAR_11);
  goto error_bootrom_init;
 }
 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11 < 0)
  goto error_read_mac_addr;
 FUNC_13(VAR_9->src_mac_addr);

 VAR_11 = FUNC_14(VAR_14);
 if (VAR_11 < 0) {
  FUNC_2(VAR_12, "cannot register i2400m network device: %d\n",
   VAR_11);
  goto error_register_netdev;
 }
 FUNC_12(VAR_14);

 VAR_11 = FUNC_7(VAR_9, VAR_10);
 if (VAR_11 < 0)
  goto error_dev_start;

 VAR_9->wimax_dev.op_msg_from_user = VAR_6;
 VAR_9->wimax_dev.op_rfkill_sw_toggle = VAR_8;
 VAR_9->wimax_dev.op_reset = VAR_7;
 VAR_11 = FUNC_19(&VAR_9->wimax_dev, VAR_14);
 if (VAR_11 < 0)
  goto error_wimax_dev_add;

 FUNC_21(VAR_13, VAR_4);


 VAR_11 = FUNC_16(&VAR_14->dev.kobj, &VAR_5);
 if (VAR_11 < 0) {
  FUNC_2(VAR_12, "cannot setup i2400m's sysfs: %d\n", VAR_11);
  goto error_sysfs_setup;
 }
 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(VAR_12, "cannot setup i2400m's debugfs: %d\n", VAR_11);
  goto error_debugfs_setup;
 }
 FUNC_0(3, VAR_12, "(i2400m %p) = %d\n", VAR_9, VAR_11);
 return VAR_11;

error_debugfs_setup:
 FUNC_17(&VAR_9->wimax_dev.net_dev->dev.kobj,
      &VAR_5);
error_sysfs_setup:
 FUNC_20(&VAR_9->wimax_dev);
error_wimax_dev_add:
 FUNC_8(VAR_9);
error_dev_start:
 FUNC_18(VAR_14);
error_register_netdev:
error_read_mac_addr:
error_bootrom_init:
 FUNC_10(VAR_9->bm_ack_buf);
error_bm_ack_buf_kzalloc:
 FUNC_10(VAR_9->bm_cmd_buf);
error_bm_cmd_kzalloc:
 FUNC_0(3, VAR_12, "(i2400m %p) = %d\n", VAR_9, VAR_11);
 return VAR_11;
}
