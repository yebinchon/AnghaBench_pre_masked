
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int msg_num; int msg_idx; scalar_t__ irqlogidx; scalar_t__ msg_ptr; struct i2c_msg* msg; } ;
struct i2c_msg {int dummy; } ;


 int FUNC_0 (int ,struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (struct pxa_i2c*,char*) ;
 int FUNC_3 (struct pxa_i2c*) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pxa_i2c *VAR_0,
          struct i2c_msg *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 500000;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  goto out;

 VAR_0->msg = VAR_1;
 VAR_0->msg_num = VAR_2;
 VAR_0->msg_idx = 0;
 VAR_0->msg_ptr = 0;
 VAR_0->irqlogidx = 0;

 FUNC_3(VAR_0);

 while (VAR_0->msg_num > 0 && --VAR_3) {
  FUNC_0(0, VAR_0);
  FUNC_5(10);
 }

 FUNC_4(VAR_0);




 VAR_4 = VAR_0->msg_idx;

out:
 if (VAR_3 == 0)
  FUNC_2(VAR_0, "timeout");

 return VAR_4;
}
