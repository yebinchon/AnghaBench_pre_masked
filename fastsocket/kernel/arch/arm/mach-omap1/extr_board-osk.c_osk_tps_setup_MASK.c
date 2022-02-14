
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_13 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_14, void *VAR_15)
{



 FUNC_1(VAR_9, "n_vbus_en");
 FUNC_0(VAR_9, 1);


 FUNC_4(VAR_1, VAR_2);


 FUNC_1(VAR_8, "smc_reset");
 FUNC_0(VAR_8, 0);


 FUNC_1(VAR_7, "dsp_power");
 FUNC_0(VAR_7, 1);



 FUNC_5(VAR_3, VAR_0);


 FUNC_5(VAR_4, VAR_5);


 FUNC_6(VAR_6);


 FUNC_3(VAR_11 | VAR_12
   | VAR_10);


 VAR_13.dev.parent = &VAR_14->dev;
 FUNC_2(&VAR_13);

 return 0;
}
