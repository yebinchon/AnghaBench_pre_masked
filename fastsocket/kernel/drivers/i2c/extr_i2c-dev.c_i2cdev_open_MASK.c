
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct i2c_dev {TYPE_1__* adap; } ;
struct i2c_client {struct i2c_adapter* adapter; int * driver; int name; } ;
struct i2c_adapter {int nr; } ;
struct file {struct i2c_client* private_data; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_dev* FUNC_0 (unsigned int) ;
 struct i2c_adapter* FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int VAR_4 ;
 unsigned int FUNC_3 (struct inode*) ;
 struct i2c_client* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 unsigned int VAR_7 = FUNC_3(VAR_5);
 struct i2c_client *VAR_8;
 struct i2c_adapter *VAR_9;
 struct i2c_dev *VAR_10;
 int VAR_11 = 0;

 FUNC_5();
 VAR_10 = FUNC_0(VAR_7);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_1(VAR_10->adap->nr);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_2(VAR_9);
  VAR_11 = -VAR_1;
  goto out;
 }
 FUNC_6(VAR_8->name, VAR_3, "i2c-dev %d", VAR_9->nr);
 VAR_8->driver = &VAR_4;

 VAR_8->adapter = VAR_9;
 VAR_6->private_data = VAR_8;

out:
 FUNC_7();
 return VAR_11;
}
