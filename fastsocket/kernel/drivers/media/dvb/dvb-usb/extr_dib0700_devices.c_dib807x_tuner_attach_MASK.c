
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {scalar_t__ id; TYPE_3__* fe; struct dib0700_adapter_state* priv; } ;
struct dib0700_adapter_state {int set_param_save; } ;
struct TYPE_5__ {int set_params; } ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct TYPE_7__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_adapter* FUNC_0 (TYPE_3__*,int ,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,TYPE_3__*,struct i2c_adapter*,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;
 struct i2c_adapter *VAR_7 = FUNC_0(VAR_5->fe,
   VAR_0, 1);

 if (VAR_5->id == 0) {
  if (FUNC_1(VAR_2, VAR_5->fe, VAR_7,
    &VAR_3[0]) == ((void*)0))
   return -VAR_1;
 } else {
  if (FUNC_1(VAR_2, VAR_5->fe, VAR_7,
    &VAR_3[1]) == ((void*)0))
   return -VAR_1;
 }

 VAR_6->set_param_save = VAR_5->fe->ops.tuner_ops.set_params;
 VAR_5->fe->ops.tuner_ops.set_params = VAR_4;
 return 0;
}
