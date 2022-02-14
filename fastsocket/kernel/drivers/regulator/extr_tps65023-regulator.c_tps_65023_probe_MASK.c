
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tps_pmic {struct regulator_dev** rdev; struct i2c_client* client; TYPE_1__* desc; struct tps_info const** info; int io_lock; } ;
struct tps_info {int name; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct i2c_device_id {int name; scalar_t__ driver_data; } ;
struct TYPE_5__ {struct regulator_init_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; int adapter; } ;
struct TYPE_4__ {int owner; int type; int * ops; int n_voltages; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct tps_pmic*) ;
 int FUNC_5 (struct tps_pmic*) ;
 struct tps_pmic* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int * VAR_8 ;
 struct regulator_dev* FUNC_8 (TYPE_1__*,TYPE_2__*,struct regulator_init_data*,struct tps_pmic*) ;
 int FUNC_9 (struct regulator_dev*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static
int FUNC_10(struct i2c_client *VAR_11, const struct i2c_device_id *VAR_12)
{
 static int VAR_13;
 const struct tps_info *VAR_14 = (void *)VAR_12->driver_data;
 struct regulator_init_data *VAR_15;
 struct regulator_dev *VAR_16;
 struct tps_pmic *VAR_17;
 int VAR_18;

 if (!FUNC_3(VAR_11->adapter, VAR_3))
  return -VAR_0;





 VAR_15 = VAR_11->dev.platform_data;

 if (!VAR_15)
  return -VAR_0;

 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_7(&VAR_17->io_lock);


 VAR_17->client = VAR_11;

 for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++, VAR_14++, VAR_15++) {

  VAR_17->info[VAR_18] = VAR_14;

  VAR_17->desc[VAR_18].name = VAR_14->name;
  VAR_17->desc[VAR_18].id = VAR_13++;
  VAR_17->desc[VAR_18].n_voltages = VAR_8[VAR_18];
  VAR_17->desc[VAR_18].ops = (VAR_18 > VAR_6 ?
     &VAR_10 : &VAR_9);
  VAR_17->desc[VAR_18].type = VAR_4;
  VAR_17->desc[VAR_18].owner = VAR_5;


  VAR_16 = FUNC_8(&VAR_17->desc[VAR_18], &VAR_11->dev,
        VAR_15, VAR_17);
  if (FUNC_0(VAR_16)) {
   FUNC_2(&VAR_11->dev, "failed to register %s\n",
    VAR_12->name);


   while (VAR_18)
    FUNC_9(VAR_17->rdev[--VAR_18]);

   VAR_17->client = ((void*)0);


   FUNC_4(VAR_11, ((void*)0));
   FUNC_5(VAR_17);
   return FUNC_1(VAR_16);
  }


  VAR_17->rdev[VAR_18] = VAR_16;
 }

 FUNC_4(VAR_11, VAR_17);

 return 0;
}
