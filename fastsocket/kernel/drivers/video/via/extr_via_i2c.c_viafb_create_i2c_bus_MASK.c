
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct viafb_par {TYPE_1__* shared; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_9__ {int id; int name; TYPE_2__ dev; TYPE_3__* algo_data; scalar_t__ class; int owner; } ;
struct TYPE_8__ {int udelay; int timeout; struct via_i2c_stuff* data; int getscl; int getsda; int (* setscl ) (struct via_i2c_stuff*,int) ;int (* setsda ) (struct via_i2c_stuff*,int) ;} ;
struct via_i2c_stuff {int i2c_port; TYPE_4__ adapter; TYPE_3__ algo; } ;
struct TYPE_6__ {struct via_i2c_stuff i2c_stuff; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,struct via_i2c_stuff*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct via_i2c_stuff*,int) ;
 int FUNC_6 (struct via_i2c_stuff*,int) ;

int FUNC_7(void *VAR_5)
{
 int VAR_6;
 struct via_i2c_stuff *VAR_7 =
  &((struct viafb_par *)VAR_5)->shared->i2c_stuff;

 FUNC_3(VAR_7->adapter.name, "via_i2c");
 VAR_7->i2c_port = 0x0;
 VAR_7->adapter.owner = VAR_2;
 VAR_7->adapter.id = 0x01FFFF;
 VAR_7->adapter.class = 0;
 VAR_7->adapter.algo_data = &VAR_7->algo;
 VAR_7->adapter.dev.parent = ((void*)0);
 VAR_7->algo.setsda = FUNC_6;
 VAR_7->algo.setscl = FUNC_5;
 VAR_7->algo.getsda = VAR_4;
 VAR_7->algo.getscl = VAR_3;
 VAR_7->algo.udelay = 40;
 VAR_7->algo.timeout = 20;
 VAR_7->algo.data = VAR_7;

 FUNC_2(&VAR_7->adapter, VAR_7);


 VAR_7->i2c_port = VAR_1;
 FUNC_6(VAR_7, 1);
 FUNC_5(VAR_7, 1);

 VAR_7->i2c_port = VAR_0;
 FUNC_6(VAR_7, 1);
 FUNC_5(VAR_7, 1);
 FUNC_4(20);

 VAR_6 = FUNC_1(&VAR_7->adapter);
 if (VAR_6 == 0)
  FUNC_0("I2C bus %s registered.\n", VAR_7->adapter.name);
 else
  FUNC_0("Failed to register I2C bus %s.\n",
   VAR_7->adapter.name);
 return VAR_6;
}
