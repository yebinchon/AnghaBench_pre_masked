
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct dentry* debugfs_dentry; } ;
struct TYPE_6__ {TYPE_2__ wimax_dev; } ;
struct i2400mu {struct dentry* debugfs_dentry; int rx_size; int rx_size_auto_shrink; TYPE_3__ i2400m; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 struct dentry* FUNC_3 (char*,struct dentry*) ;
 struct dentry* FUNC_4 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_5 (char*,int,struct dentry*,int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct device*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
int FUNC_8(struct i2400mu *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_6->usb_iface->dev;
 struct dentry *VAR_9 = VAR_6->i2400m.wimax_dev.debugfs_dentry;
 struct dentry *VAR_10;

 VAR_9 = FUNC_3("i2400m-usb", VAR_9);
 VAR_7 = FUNC_1(VAR_9);
 if (FUNC_0(VAR_9)) {
  if (VAR_7 == -VAR_0)
   VAR_7 = 0;
  goto error;
 }
 VAR_6->debugfs_dentry = VAR_9;
 FUNC_2("dl_", VAR_5, VAR_9);
 FUNC_2("dl_", VAR_1, VAR_9);
 FUNC_2("dl_", VAR_2, VAR_9);
 FUNC_2("dl_", VAR_3, VAR_9);
 FUNC_2("dl_", VAR_4, VAR_9);


 VAR_10 = FUNC_5("rx_size_auto_shrink", 0600, VAR_9,
          &VAR_6->rx_size_auto_shrink);
 VAR_7 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10) && VAR_7 != -VAR_0) {
  FUNC_7(VAR_8, "Can't create debugfs entry "
   "rx_size_auto_shrink: %d\n", VAR_7);
  goto error;
 }

 VAR_10 = FUNC_4("rx_size", 0600, VAR_9,
       &VAR_6->rx_size);
 VAR_7 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10) && VAR_7 != -VAR_0) {
  FUNC_7(VAR_8, "Can't create debugfs entry "
   "rx_size: %d\n", VAR_7);
  goto error;
 }

 return 0;

error:
 FUNC_6(VAR_6->debugfs_dentry);
 return VAR_7;
}
