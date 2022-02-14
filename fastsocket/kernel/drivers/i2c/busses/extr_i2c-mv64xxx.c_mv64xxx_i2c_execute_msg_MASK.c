
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv64xxx_i2c_data {int block; int rc; int lock; int state; int action; int bytes_left; TYPE_1__* msg; } ;
struct i2c_msg {int flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mv64xxx_i2c_data*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*,struct i2c_msg*) ;
 int FUNC_2 (struct mv64xxx_i2c_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct mv64xxx_i2c_data *VAR_8, struct i2c_msg *VAR_9)
{
 unsigned long VAR_10;

 FUNC_3(&VAR_8->lock, VAR_10);
 FUNC_1(VAR_8, VAR_9);

 if (FUNC_5(VAR_9->flags & VAR_0)) {
  if (VAR_8->msg->flags & VAR_1) {

   VAR_8->action = VAR_2;
   VAR_8->state =
    VAR_6;
  } else {
   VAR_8->action = VAR_3;
   VAR_8->state =
    VAR_5;
   VAR_8->bytes_left--;
  }
 } else {
  VAR_8->action = VAR_4;
  VAR_8->state = VAR_7;
 }

 VAR_8->block = 1;
 FUNC_0(VAR_8);
 FUNC_4(&VAR_8->lock, VAR_10);

 FUNC_2(VAR_8);
 return VAR_8->rc;
}
