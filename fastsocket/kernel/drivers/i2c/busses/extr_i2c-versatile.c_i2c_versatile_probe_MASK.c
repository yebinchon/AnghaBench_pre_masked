
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {scalar_t__ id; int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_7__ {scalar_t__ nr; TYPE_1__ dev; TYPE_2__* algo_data; int name; int owner; } ;
struct TYPE_6__ {struct i2c_versatile* data; } ;
struct i2c_versatile {scalar_t__ base; TYPE_3__ adap; TYPE_2__ algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct i2c_versatile*) ;
 struct i2c_versatile* FUNC_5 (int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct i2c_versatile*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 struct i2c_versatile *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_10, VAR_5, 0);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto err_out;
 }

 if (!FUNC_9(VAR_12->start, FUNC_10(VAR_12), "versatile-i2c")) {
  VAR_13 = -VAR_0;
  goto err_out;
 }

 VAR_11 = FUNC_5(sizeof(struct i2c_versatile), VAR_3);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto err_release;
 }

 VAR_11->base = FUNC_2(VAR_12->start, FUNC_10(VAR_12));
 if (!VAR_11->base) {
  VAR_13 = -VAR_2;
  goto err_free;
 }

 FUNC_12(VAR_6 | VAR_7, VAR_11->base + VAR_4);

 VAR_11->adap.owner = VAR_8;
 FUNC_11(VAR_11->adap.name, "Versatile I2C adapter", sizeof(VAR_11->adap.name));
 VAR_11->adap.algo_data = &VAR_11->algo;
 VAR_11->adap.dev.parent = &VAR_10->dev;
 VAR_11->algo = VAR_9;
 VAR_11->algo.data = VAR_11;

 if (VAR_10->id >= 0) {

  VAR_11->adap.nr = VAR_10->id;
  VAR_13 = FUNC_1(&VAR_11->adap);
 } else

  VAR_13 = FUNC_0(&VAR_11->adap);
 if (VAR_13 >= 0) {
  FUNC_7(VAR_10, VAR_11);
  return 0;
 }

 FUNC_3(VAR_11->base);
 err_free:
 FUNC_4(VAR_11);
 err_release:
 FUNC_8(VAR_12->start, FUNC_10(VAR_12));
 err_out:
 return VAR_13;
}
