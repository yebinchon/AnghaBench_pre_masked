
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pxa_i2c {int msg_num; int msg_idx; int wait; int lock; scalar_t__ irqlogidx; scalar_t__ msg_ptr; struct i2c_msg* msg; TYPE_1__ adap; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pxa_i2c*,char*) ;
 int FUNC_2 (struct pxa_i2c*) ;
 int FUNC_3 (struct pxa_i2c*) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (struct pxa_i2c*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct pxa_i2c *VAR_1, struct i2c_msg *VAR_2, int VAR_3)
{
 long VAR_4;
 int VAR_5;




 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5) {
  FUNC_0(&VAR_1->adap.dev, "i2c_pxa: timeout waiting for bus free\n");
  goto out;
 }




 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5) {
  FUNC_0(&VAR_1->adap.dev, "i2c_pxa_set_master: error %d\n", VAR_5);
  goto out;
 }

 FUNC_6(&VAR_1->lock);

 VAR_1->msg = VAR_2;
 VAR_1->msg_num = VAR_3;
 VAR_1->msg_idx = 0;
 VAR_1->msg_ptr = 0;
 VAR_1->irqlogidx = 0;

 FUNC_3(VAR_1);

 FUNC_7(&VAR_1->lock);




 VAR_4 = FUNC_8(VAR_1->wait, VAR_1->msg_num == 0, VAR_0 * 5);
 FUNC_4(VAR_1);




 VAR_5 = VAR_1->msg_idx;

 if (VAR_4 == 0)
  FUNC_1(VAR_1, "timeout");

 out:
 return VAR_5;
}
