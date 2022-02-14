
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_11__ {TYPE_1__ dev; TYPE_2__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; int timeout; struct radeon_i2c_chan* data; int getscl; int getsda; int (* setscl ) (struct radeon_i2c_chan*,int) ;int (* setsda ) (struct radeon_i2c_chan*,int) ;} ;
struct radeon_i2c_chan {TYPE_4__* rinfo; TYPE_5__ adapter; TYPE_2__ algo; } ;
struct TYPE_10__ {TYPE_3__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,struct radeon_i2c_chan*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct radeon_i2c_chan*,int) ;
 int FUNC_5 (struct radeon_i2c_chan*,int) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct radeon_i2c_chan *VAR_3, const char *VAR_4)
{
 int VAR_5;

 FUNC_6(VAR_3->adapter.name, sizeof(VAR_3->adapter.name),
   "radeonfb %s", VAR_4);
 VAR_3->adapter.owner = VAR_0;
 VAR_3->adapter.algo_data = &VAR_3->algo;
 VAR_3->adapter.dev.parent = &VAR_3->rinfo->pdev->dev;
 VAR_3->algo.setsda = FUNC_5;
 VAR_3->algo.setscl = FUNC_4;
 VAR_3->algo.getsda = VAR_2;
 VAR_3->algo.getscl = VAR_1;
 VAR_3->algo.udelay = 10;
 VAR_3->algo.timeout = 20;
 VAR_3->algo.data = VAR_3;

 FUNC_3(&VAR_3->adapter, VAR_3);


 FUNC_5(VAR_3, 1);
 FUNC_4(VAR_3, 1);
 FUNC_7(20);

 VAR_5 = FUNC_2(&VAR_3->adapter);
 if (VAR_5 == 0)
  FUNC_0(&VAR_3->rinfo->pdev->dev, "I2C bus %s registered.\n", VAR_4);
 else
  FUNC_1(&VAR_3->rinfo->pdev->dev, "Failed to register I2C bus %s.\n", VAR_4);
 return VAR_5;
}
