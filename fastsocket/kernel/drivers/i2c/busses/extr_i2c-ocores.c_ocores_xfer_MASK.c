
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocores_i2c {int nmsgs; scalar_t__ state; int wait; struct i2c_msg* msg; scalar_t__ pos; } ;
struct i2c_msg {int addr; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct ocores_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct ocores_i2c*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_10, struct i2c_msg *VAR_11, int VAR_12)
{
 struct ocores_i2c *VAR_13 = FUNC_0(VAR_10);

 VAR_13->msg = VAR_11;
 VAR_13->pos = 0;
 VAR_13->nmsgs = VAR_12;
 VAR_13->state = VAR_9;

 FUNC_1(VAR_13, VAR_6,
   (VAR_13->msg->addr << 1) |
   ((VAR_13->msg->flags & VAR_3) ? 1:0));

 FUNC_1(VAR_13, VAR_4, VAR_5);

 if (FUNC_2(VAR_13->wait, (VAR_13->state == VAR_8) ||
          (VAR_13->state == VAR_7), VAR_2))
  return (VAR_13->state == VAR_7) ? VAR_12 : -VAR_0;
 else
  return -VAR_1;
}
