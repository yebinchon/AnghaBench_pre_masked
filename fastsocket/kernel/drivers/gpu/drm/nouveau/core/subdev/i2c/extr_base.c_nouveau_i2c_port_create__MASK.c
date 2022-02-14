
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int refcount; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {struct i2c_algorithm const* algo; struct nouveau_i2c_port* algo_data; TYPE_1__ dev; int owner; int name; } ;
struct nouveau_i2c_port {int index; int udelay; int head; TYPE_3__ adapter; int getscl; int getsda; int setscl; int setsda; int pre_xfer; struct nouveau_i2c_port* data; int timeout; } ;
struct nouveau_i2c {int ports; } ;
struct nouveau_device {char* name; int cfgopt; TYPE_2__* pdev; } ;
struct i2c_algorithm {int dummy; } ;
struct i2c_algo_bit_data {int index; int udelay; int head; TYPE_3__ adapter; int getscl; int getsda; int setscl; int setsda; int pre_xfer; struct i2c_algo_bit_data* data; int timeout; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct nouveau_i2c*) ;
 struct nouveau_i2c_port* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 struct i2c_algorithm const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int,void**) ;
 struct nouveau_device* FUNC_8 (struct nouveau_object*) ;
 int FUNC_9 (int ,int,char*,char*,int) ;
 int FUNC_10 (int) ;

int
FUNC_11(struct nouveau_object *VAR_10,
    struct nouveau_object *VAR_11,
    struct nouveau_oclass *VAR_12, u8 VAR_13,
    const struct i2c_algorithm *VAR_14,
    int VAR_15, void **VAR_16)
{
 struct nouveau_device *VAR_17 = FUNC_8(VAR_10);
 struct nouveau_i2c *VAR_18 = (void *)VAR_11;
 struct nouveau_i2c_port *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_7(VAR_10, VAR_11, VAR_12, 0, VAR_15, VAR_16);
 VAR_19 = *VAR_16;
 if (VAR_20)
  return VAR_20;

 FUNC_9(VAR_19->adapter.name, sizeof(VAR_19->adapter.name),
   "nouveau-%s-%d", VAR_17->name, VAR_13);
 VAR_19->adapter.owner = VAR_3;
 VAR_19->adapter.dev.parent = &VAR_17->pdev->dev;
 VAR_19->index = VAR_13;
 FUNC_3(&VAR_19->adapter, VAR_18);

 if ( VAR_14 == &VAR_4 &&
     !FUNC_6(VAR_17->cfgopt, "NvI2C", VAR_0)) {
  struct i2c_algo_bit_data *VAR_21;

  VAR_21 = FUNC_4(sizeof(*VAR_21), VAR_2);
  if (!VAR_21)
   return -VAR_1;

  VAR_21->udelay = 10;
  VAR_21->timeout = FUNC_10(2200);
  VAR_21->data = VAR_19;
  VAR_21->pre_xfer = VAR_7;
  VAR_21->setsda = VAR_9;
  VAR_21->setscl = VAR_8;
  VAR_21->getsda = VAR_6;
  VAR_21->getscl = VAR_5;

  VAR_19->adapter.algo_data = VAR_21;
  VAR_20 = FUNC_2(&VAR_19->adapter);
 } else {
  VAR_19->adapter.algo_data = VAR_19;
  VAR_19->adapter.algo = VAR_14;
  VAR_20 = FUNC_1(&VAR_19->adapter);
 }


 if (VAR_20 == 0) {
  FUNC_5(&VAR_19->head, &VAR_18->ports);
  FUNC_0(&VAR_10->refcount);
  FUNC_0(&VAR_11->refcount);
 }

 return VAR_20;
}
