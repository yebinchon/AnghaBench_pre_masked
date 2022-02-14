
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int msg_num; int msg_idx; int dev; int wait; int lock; int state; scalar_t__ msg_ptr; struct i2c_msg* msg; scalar_t__ suspended; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct s3c24xx_i2c*) ;
 int FUNC_4 (struct s3c24xx_i2c*,struct i2c_msg*) ;
 int FUNC_5 (struct s3c24xx_i2c*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct s3c24xx_i2c *VAR_4,
         struct i2c_msg *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_4->suspended)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8 != 0) {
  FUNC_1(VAR_4->dev, "cannot get bus (error %d)\n", VAR_8);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_6(&VAR_4->lock);

 VAR_4->msg = VAR_5;
 VAR_4->msg_num = VAR_6;
 VAR_4->msg_ptr = 0;
 VAR_4->msg_idx = 0;
 VAR_4->state = VAR_3;

 FUNC_3(VAR_4);
 FUNC_4(VAR_4, VAR_5);
 FUNC_7(&VAR_4->lock);

 VAR_7 = FUNC_8(VAR_4->wait, VAR_4->msg_num == 0, VAR_2 * 5);

 VAR_8 = VAR_4->msg_idx;




 if (VAR_7 == 0)
  FUNC_0(VAR_4->dev, "timeout\n");
 else if (VAR_8 != VAR_6)
  FUNC_0(VAR_4->dev, "incomplete xfer (%d)\n", VAR_8);



 FUNC_2(1);

 out:
 return VAR_8;
}
