
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_11__ {int udelay; TYPE_1__ dev; struct TYPE_11__* adapter; scalar_t__ name; struct TYPE_11__* algo_data; struct ivtv* data; } ;
struct TYPE_10__ {scalar_t__ newi2c; int i2c_clock_period; } ;
struct ivtv {int instance; TYPE_4__ i2c_adap; TYPE_3__ options; TYPE_2__* pdev; TYPE_4__ i2c_client; int v4l2_dev; TYPE_4__ i2c_algo; } ;
struct i2c_client {int dummy; } ;
struct i2c_algo_bit_data {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct ivtv*,int) ;
 int FUNC_7 (struct ivtv*,int) ;
 int FUNC_8 (TYPE_4__*,int *,int) ;
 int FUNC_9 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

int FUNC_11(struct ivtv *VAR_7)
{
 int VAR_8;

 FUNC_1("i2c init\n");




 if (FUNC_0(VAR_2) != FUNC_0(VAR_1)) {
  FUNC_2("Mismatched I2C hardware arrays\n");
  return -VAR_0;
 }
 if (VAR_7->options.newi2c > 0) {
  FUNC_8(&VAR_7->i2c_adap, &VAR_3,
         sizeof(struct i2c_adapter));
 } else {
  FUNC_8(&VAR_7->i2c_adap, &VAR_4,
         sizeof(struct i2c_adapter));
  FUNC_8(&VAR_7->i2c_algo, &VAR_5,
         sizeof(struct i2c_algo_bit_data));
 }
 VAR_7->i2c_algo.udelay = VAR_7->options.i2c_clock_period / 2;
 VAR_7->i2c_algo.data = VAR_7;
 VAR_7->i2c_adap.algo_data = &VAR_7->i2c_algo;

 FUNC_9(VAR_7->i2c_adap.name + FUNC_10(VAR_7->i2c_adap.name), " #%d",
  VAR_7->instance);
 FUNC_5(&VAR_7->i2c_adap, &VAR_7->v4l2_dev);

 FUNC_8(&VAR_7->i2c_client, &VAR_6,
        sizeof(struct i2c_client));
 VAR_7->i2c_client.adapter = &VAR_7->i2c_adap;
 VAR_7->i2c_adap.dev.parent = &VAR_7->pdev->dev;

 FUNC_1("setting scl and sda to 1\n");
 FUNC_6(VAR_7, 1);
 FUNC_7(VAR_7, 1);

 if (VAR_7->options.newi2c > 0)
  VAR_8 = FUNC_3(&VAR_7->i2c_adap);
 else
  VAR_8 = FUNC_4(&VAR_7->i2c_adap);

 return VAR_8;
}
