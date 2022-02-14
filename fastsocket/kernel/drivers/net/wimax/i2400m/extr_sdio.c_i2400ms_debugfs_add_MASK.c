
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dentry* debugfs_dentry; } ;
struct TYPE_4__ {TYPE_1__ wimax_dev; } ;
struct i2400ms {struct dentry* debugfs_dentry; TYPE_2__ i2400m; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int ,struct dentry*) ;
 struct dentry* FUNC_3 (char*,struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
int FUNC_5(struct i2400ms *VAR_5)
{
 int VAR_6;
 struct dentry *VAR_7 = VAR_5->i2400m.wimax_dev.debugfs_dentry;

 VAR_7 = FUNC_3("i2400m-usb", VAR_7);
 VAR_6 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7)) {
  if (VAR_6 == -VAR_0)
   VAR_6 = 0;
  goto error;
 }
 VAR_5->debugfs_dentry = VAR_7;
 FUNC_2("dl_", VAR_2, VAR_7);
 FUNC_2("dl_", VAR_4, VAR_7);
 FUNC_2("dl_", VAR_3, VAR_7);
 FUNC_2("dl_", VAR_1, VAR_7);

 return 0;

error:
 FUNC_4(VAR_5->debugfs_dentry);
 return VAR_6;
}
