
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct intelfb_info {TYPE_2__* pdev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {int class; TYPE_1__ dev; TYPE_3__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; int timeout; struct intelfb_i2c_chan* data; int getscl; int getsda; int (* setscl ) (struct intelfb_i2c_chan*,int) ;int (* setsda ) (struct intelfb_i2c_chan*,int) ;} ;
struct intelfb_i2c_chan {TYPE_4__ adapter; TYPE_3__ algo; struct intelfb_info* dinfo; int reg; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,struct intelfb_i2c_chan*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct intelfb_i2c_chan*,int) ;
 int FUNC_5 (struct intelfb_i2c_chan*,int) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct intelfb_info *VAR_3,
     struct intelfb_i2c_chan *VAR_4,
     const u32 VAR_5, const char *VAR_6,
     int VAR_7)
{
 int VAR_8;

 VAR_4->dinfo = VAR_3;
 VAR_4->reg = VAR_5;
 FUNC_6(VAR_4->adapter.name, sizeof(VAR_4->adapter.name),
   "intelfb %s", VAR_6);
 VAR_4->adapter.class = VAR_7;
 VAR_4->adapter.owner = VAR_0;
 VAR_4->adapter.algo_data = &VAR_4->algo;
 VAR_4->adapter.dev.parent = &VAR_4->dinfo->pdev->dev;
 VAR_4->algo.setsda = FUNC_5;
 VAR_4->algo.setscl = FUNC_4;
 VAR_4->algo.getsda = VAR_2;
 VAR_4->algo.getscl = VAR_1;
 VAR_4->algo.udelay = 40;
 VAR_4->algo.timeout = 20;
 VAR_4->algo.data = VAR_4;

 FUNC_3(&VAR_4->adapter, VAR_4);


 FUNC_5(VAR_4, 1);
 FUNC_4(VAR_4, 1);
 FUNC_7(20);

 VAR_8 = FUNC_2(&VAR_4->adapter);
 if (VAR_8 == 0)
  FUNC_0("I2C bus %s registered.\n", VAR_6);
 else
  FUNC_1("Failed to register I2C bus %s.\n", VAR_6);
 return VAR_8;
}
