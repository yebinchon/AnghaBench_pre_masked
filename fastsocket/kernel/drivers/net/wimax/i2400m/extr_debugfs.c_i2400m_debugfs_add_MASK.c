
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* debugfs_dentry; } ;
struct i2400m {int trace_msg_from_user; int state; int tx_out; int tx_in; struct dentry* debugfs_dentry; TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_3 (char*,struct dentry*) ;
 struct dentry* FUNC_4 (char*,int,struct dentry*,struct i2400m*,int *) ;
 struct dentry* FUNC_5 (char*,struct dentry*,struct i2400m*) ;
 struct dentry* FUNC_6 (char*,struct dentry*,struct i2400m*) ;
 struct dentry* FUNC_7 (char*,struct dentry*,struct i2400m*) ;
 struct dentry* FUNC_8 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_9 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_10 (char*,int,struct dentry*,int *) ;
 int FUNC_11 (struct device*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_12 (struct i2400m*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_13(struct i2400m *VAR_11)
{
 int VAR_12;
 struct device *VAR_13 = FUNC_12(VAR_11);
 struct dentry *VAR_14 = VAR_11->wimax_dev.debugfs_dentry;
 struct dentry *VAR_15;

 VAR_14 = FUNC_3("i2400m", VAR_14);
 VAR_12 = FUNC_1(VAR_14);
 if (FUNC_0(VAR_14)) {
  if (VAR_12 == -VAR_0)
   VAR_12 = 0;
  goto error;
 }
 VAR_11->debugfs_dentry = VAR_14;
 FUNC_2("dl_", VAR_1, VAR_14);
 FUNC_2("dl_", VAR_3, VAR_14);
 FUNC_2("dl_", VAR_2, VAR_14);
 FUNC_2("dl_", VAR_4, VAR_14);
 FUNC_2("dl_", VAR_7, VAR_14);
 FUNC_2("dl_", VAR_8, VAR_14);
 FUNC_2("dl_", VAR_9, VAR_14);
 FUNC_2("dl_", VAR_10, VAR_14);

 VAR_15 = FUNC_8("tx_in", 0400, VAR_14,
       &VAR_11->tx_in);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "tx_in: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_8("tx_out", 0400, VAR_14,
       &VAR_11->tx_out);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "tx_out: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_9("state", 0600, VAR_14,
    &VAR_11->state);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "state: %d\n", VAR_12);
  goto error;
 }
 VAR_15 = FUNC_10("trace_msg_from_user", 0600, VAR_14,
          &VAR_11->trace_msg_from_user);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "trace_msg_from_user: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_7("netdev_queue_stopped",
       VAR_14, VAR_11);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "netdev_queue_stopped: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_4("rx_stats", 0600, VAR_14, VAR_11,
     &VAR_5);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "rx_stats: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_4("tx_stats", 0600, VAR_14, VAR_11,
     &VAR_6);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry "
   "tx_stats: %d\n", VAR_12);
  goto error;
 }

 VAR_15 = FUNC_6("suspend", VAR_14, VAR_11);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry suspend: %d\n",
   VAR_12);
  goto error;
 }

 VAR_15 = FUNC_5("reset", VAR_14, VAR_11);
 VAR_12 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15) && VAR_12 != -VAR_0) {
  FUNC_11(VAR_13, "Can't create debugfs entry reset: %d\n", VAR_12);
  goto error;
 }

 VAR_12 = 0;
error:
 return VAR_12;
}
