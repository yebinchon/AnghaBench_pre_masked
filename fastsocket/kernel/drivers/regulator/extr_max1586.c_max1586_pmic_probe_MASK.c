
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct max1586_platform_data {int v3_gain; int num_subdevs; TYPE_1__* subdevs; } ;
struct max1586_data {int min_uV; int max_uV; struct regulator_dev** rdev; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {struct max1586_platform_data* platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int id; int platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (struct i2c_client*,struct regulator_dev**) ;
 int FUNC_5 (struct max1586_data*) ;
 struct max1586_data* FUNC_6 (int,int ) ;
 TYPE_2__* VAR_7 ;
 struct regulator_dev* FUNC_7 (TYPE_2__*,TYPE_3__*,int ,struct max1586_data*) ;
 int FUNC_8 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
         const struct i2c_device_id *VAR_9)
{
 struct regulator_dev **VAR_10;
 struct max1586_platform_data *VAR_11 = VAR_8->dev.platform_data;
 struct max1586_data *VAR_12;
 int VAR_13, VAR_14, VAR_15 = -VAR_1;

 VAR_12 = FUNC_6(sizeof(struct max1586_data) +
   sizeof(struct regulator_dev *) * (VAR_6 + 1),
   VAR_2);
 if (!VAR_12)
  goto out;

 VAR_12->client = VAR_8;

 if (!VAR_11->v3_gain) {
  VAR_15 = -VAR_0;
  goto out_unmap;
 }
 VAR_12->min_uV = VAR_5 / 1000 * VAR_11->v3_gain / 1000;
 VAR_12->max_uV = VAR_4 / 1000 * VAR_11->v3_gain / 1000;

 VAR_10 = VAR_12->rdev;
 for (VAR_13 = 0; VAR_13 < VAR_11->num_subdevs && VAR_13 <= VAR_6; VAR_13++) {
  VAR_14 = VAR_11->subdevs[VAR_13].id;
  if (!VAR_11->subdevs[VAR_13].platform_data)
   continue;
  if (VAR_14 < VAR_3 || VAR_14 > VAR_6) {
   FUNC_2(&VAR_8->dev, "invalid regulator id %d\n", VAR_14);
   goto err;
  }
  VAR_10[VAR_13] = FUNC_7(&VAR_7[VAR_14], &VAR_8->dev,
          VAR_11->subdevs[VAR_13].platform_data,
          VAR_12);
  if (FUNC_0(VAR_10[VAR_13])) {
   VAR_15 = FUNC_1(VAR_10[VAR_13]);
   FUNC_2(&VAR_8->dev, "failed to register %s\n",
    VAR_7[VAR_14].name);
   goto err;
  }
 }

 FUNC_4(VAR_8, VAR_10);
 FUNC_3(&VAR_8->dev, "Maxim 1586 regulator driver loaded\n");
 return 0;

err:
 while (--VAR_13 >= 0)
  FUNC_8(VAR_10[VAR_13]);
out_unmap:
 FUNC_5(VAR_12);
out:
 return VAR_15;
}
