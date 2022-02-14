
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_controller {int device; int name; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct i2o_controller*) ;
 int FUNC_3 (struct i2o_controller*) ;
 int FUNC_4 (struct i2o_controller*) ;
 int FUNC_5 (struct i2o_controller*) ;
 int FUNC_6 (struct i2o_controller*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ) ;

int FUNC_12(struct i2o_controller *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1->device))) {
  FUNC_10("%s: could not add controller\n", VAR_1->name);
  goto iop_reset;
 }

 FUNC_11("%s: Activating I2O controller...\n", VAR_1->name);
 FUNC_11("%s: This may take a few minutes if there are many devices\n",
   VAR_1->name);

 if ((VAR_2 = FUNC_4(VAR_1))) {
  FUNC_10("%s: could not activate controller\n", VAR_1->name);
  goto device_del;
 }

 FUNC_9("%s: building sys table...\n", VAR_1->name);

 if ((VAR_2 = FUNC_7()))
  goto device_del;

 FUNC_9("%s: online controller...\n", VAR_1->name);

 if ((VAR_2 = FUNC_5(VAR_1)))
  goto device_del;

 FUNC_9("%s: getting LCT...\n", VAR_1->name);

 if ((VAR_2 = FUNC_3(VAR_1)))
  goto device_del;

 FUNC_8(&VAR_1->list, &VAR_0);

 FUNC_2(VAR_1);

 FUNC_11("%s: Controller added\n", VAR_1->name);

 return 0;

      device_del:
 FUNC_1(&VAR_1->device);

      iop_reset:
 FUNC_6(VAR_1);

 return VAR_2;
}
