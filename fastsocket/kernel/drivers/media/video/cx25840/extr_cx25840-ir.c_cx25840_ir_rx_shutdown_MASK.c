
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int shutdown; } ;
struct cx25840_ir_state {int rx_params_lock; TYPE_1__ rx_params; struct i2c_client* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cx25840_ir_state* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_4)
{
 struct cx25840_ir_state *VAR_5 = FUNC_8(VAR_4);
 struct i2c_client *VAR_6;

 if (VAR_5 == ((void*)0))
  return -VAR_2;

 VAR_6 = VAR_5->c;
 FUNC_6(&VAR_5->rx_params_lock);


 FUNC_5(VAR_4, 0);
 FUNC_1(VAR_6, 0);
 FUNC_0(VAR_6, 0);
 FUNC_2(VAR_6, VAR_0);
 FUNC_4(VAR_6, 0);
 FUNC_3(VAR_6, VAR_1, VAR_3);

 VAR_5->rx_params.shutdown = 1;

 FUNC_7(&VAR_5->rx_params_lock);
 return 0;
}
