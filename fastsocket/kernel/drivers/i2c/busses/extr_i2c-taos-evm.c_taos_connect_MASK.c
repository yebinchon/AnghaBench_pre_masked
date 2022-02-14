
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {TYPE_1__ dev; int name; struct serio* algo_data; int * algo; int owner; } ;
struct taos_data {scalar_t__ state; int client; int buffer; int pos; struct i2c_adapter adapter; } ;
struct serio_driver {int dummy; } ;
struct serio {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct taos_data*) ;
 struct taos_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct serio*) ;
 int FUNC_7 (struct serio*,struct serio_driver*) ;
 int FUNC_8 (struct serio*,struct taos_data*) ;
 int FUNC_9 (struct serio*,int ) ;
 int FUNC_10 (int ,char*,int) ;
 char* FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 (struct i2c_adapter*) ;
 int FUNC_13 (int ,int,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct serio *VAR_11, struct serio_driver *VAR_12)
{
 struct taos_data *VAR_13;
 struct i2c_adapter *VAR_14;
 char *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_4(sizeof(struct taos_data), VAR_2);
 if (!VAR_13) {
  VAR_16 = -VAR_1;
  goto exit;
 }
 VAR_13->state = VAR_7;
 FUNC_8(VAR_11, VAR_13);

 VAR_16 = FUNC_7(VAR_11, VAR_12);
 if (VAR_16)
  goto exit_kfree;

 VAR_14 = &VAR_13->adapter;
 VAR_14->owner = VAR_8;
 VAR_14->algo = &VAR_9;
 VAR_14->algo_data = VAR_11;
 VAR_14->dev.parent = &VAR_11->dev;


 FUNC_9(VAR_11, VAR_4);
 FUNC_13(VAR_10, VAR_13->state == VAR_6,
      FUNC_5(2000));

 if (VAR_13->state != VAR_6) {
  VAR_16 = -VAR_0;
  FUNC_0(&VAR_11->dev, "TAOS EVM reset failed (state=%d, "
   "pos=%d)\n", VAR_13->state, VAR_13->pos);
  goto exit_close;
 }

 VAR_15 = FUNC_11(VAR_13->buffer);
 if (!VAR_15) {
  VAR_16 = -VAR_0;
  FUNC_1(&VAR_11->dev, "TAOS EVM identification failed\n");
  goto exit_close;
 }
 FUNC_10(VAR_14->name, VAR_15, sizeof(VAR_14->name));


 VAR_13->state = VAR_5;
 FUNC_9(VAR_11, VAR_3);

 FUNC_13(VAR_10, VAR_13->state == VAR_6,
      FUNC_5(250));
 if (VAR_13->state != VAR_6) {
  VAR_16 = -VAR_0;
  FUNC_1(&VAR_14->dev, "Echo off failed "
   "(state=%d)\n", VAR_13->state);
  goto exit_close;
 }

 VAR_16 = FUNC_2(VAR_14);
 if (VAR_16)
  goto exit_close;
 FUNC_0(&VAR_11->dev, "Connected to TAOS EVM\n");

 VAR_13->client = FUNC_12(VAR_14);
 return 0;

 exit_close:
 FUNC_6(VAR_11);
 exit_kfree:
 FUNC_8(VAR_11, ((void*)0));
 FUNC_3(VAR_13);
 exit:
 return VAR_16;
}
