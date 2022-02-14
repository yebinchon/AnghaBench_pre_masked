
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int name; struct net_device* net_dev; } ;
struct net_device {int dummy; } ;
struct i2400m {int bus_bm_retries; int (* bus_dev_start ) (struct i2400m*) ;int ready; int * work_queue; int (* bus_dev_stop ) (struct i2400m*) ;struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int,struct device*,char*,struct net_device*,struct i2400m*,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct i2400m*) ;
 struct device* FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400m*,int) ;
 int FUNC_8 (struct i2400m*) ;
 int FUNC_9 (struct i2400m*) ;
 int FUNC_10 (struct i2400m*) ;
 int FUNC_11 (struct i2400m*) ;
 int FUNC_12 (struct i2400m*) ;
 int FUNC_13 (struct i2400m*) ;
 int FUNC_14 (struct i2400m*) ;
 int FUNC_15 (struct i2400m*) ;
 int FUNC_16 (struct wimax_dev*,int ) ;

__attribute__((used)) static
int FUNC_17(struct i2400m *VAR_5, enum i2400m_bri VAR_6)
{
 int VAR_7;
 struct wimax_dev *VAR_8 = &VAR_5->wimax_dev;
 struct net_device *VAR_9 = VAR_8->net_dev;
 struct device *VAR_10 = FUNC_6(VAR_5);
 int VAR_11 = VAR_5->bus_bm_retries;

 FUNC_2(3, VAR_10, "(i2400m %p)\n", VAR_5);
retry:
 VAR_7 = FUNC_7(VAR_5, VAR_6);
 if (VAR_7 < 0) {
  FUNC_4(VAR_10, "cannot bootstrap device: %d\n", VAR_7);
  goto error_bootstrap;
 }
 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7 < 0)
  goto error_tx_setup;
 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7 < 0)
  goto error_rx_setup;
 VAR_5->work_queue = FUNC_0(VAR_8->name);
 if (VAR_5->work_queue == ((void*)0)) {
  VAR_7 = -VAR_1;
  FUNC_4(VAR_10, "cannot create workqueue\n");
  goto error_create_workqueue;
 }
 VAR_7 = VAR_5->bus_dev_start(VAR_5);
 if (VAR_7 < 0)
  goto error_bus_dev_start;
 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7 < 0)
  goto error_fw_check;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0)
  goto error_check_mac_addr;
 VAR_5->ready = 1;
 FUNC_16(VAR_8, VAR_4);
 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 < 0)
  goto error_dev_initialize;


 FUNC_1(3, VAR_10, "(net_dev %p [i2400m %p]) = %d\n",
  VAR_9, VAR_5, VAR_7);
 return VAR_7;

error_dev_initialize:
error_check_mac_addr:
error_fw_check:
 VAR_5->bus_dev_stop(VAR_5);
error_bus_dev_start:
 FUNC_3(VAR_5->work_queue);
error_create_workqueue:
 FUNC_10(VAR_5);
error_rx_setup:
 FUNC_12(VAR_5);
error_tx_setup:
error_bootstrap:
 if (VAR_7 == -VAR_0 && VAR_11-- > 0) {
  VAR_6 = VAR_3|VAR_2;
  goto retry;
 }
 FUNC_1(3, VAR_10, "(net_dev %p [i2400m %p]) = %d\n",
  VAR_9, VAR_5, VAR_7);
 return VAR_7;
}
