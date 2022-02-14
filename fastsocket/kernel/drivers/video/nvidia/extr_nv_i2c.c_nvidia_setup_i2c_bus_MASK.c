
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
struct TYPE_11__ {unsigned int class; TYPE_1__ dev; TYPE_2__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; struct nvidia_i2c_chan* data; int timeout; int getscl; int getsda; int (* setscl ) (struct nvidia_i2c_chan*,int) ;int (* setsda ) (struct nvidia_i2c_chan*,int) ;} ;
struct nvidia_i2c_chan {TYPE_4__* par; TYPE_5__ adapter; TYPE_2__ algo; } ;
struct TYPE_10__ {TYPE_3__* pci_dev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,struct nvidia_i2c_chan*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct nvidia_i2c_chan*,int) ;
 int FUNC_6 (struct nvidia_i2c_chan*,int) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct nvidia_i2c_chan *VAR_3, const char *VAR_4,
    unsigned int VAR_5)
{
 int VAR_6;

 FUNC_7(VAR_3->adapter.name, VAR_4);
 VAR_3->adapter.owner = VAR_0;
 VAR_3->adapter.class = VAR_5;
 VAR_3->adapter.algo_data = &VAR_3->algo;
 VAR_3->adapter.dev.parent = &VAR_3->par->pci_dev->dev;
 VAR_3->algo.setsda = FUNC_6;
 VAR_3->algo.setscl = FUNC_5;
 VAR_3->algo.getsda = VAR_2;
 VAR_3->algo.getscl = VAR_1;
 VAR_3->algo.udelay = 40;
 VAR_3->algo.timeout = FUNC_4(2);
 VAR_3->algo.data = VAR_3;

 FUNC_3(&VAR_3->adapter, VAR_3);


 FUNC_6(VAR_3, 1);
 FUNC_5(VAR_3, 1);
 FUNC_8(20);

 VAR_6 = FUNC_2(&VAR_3->adapter);
 if (VAR_6 == 0)
  FUNC_0(&VAR_3->par->pci_dev->dev,
   "I2C bus %s registered.\n", VAR_4);
 else {
  FUNC_1(&VAR_3->par->pci_dev->dev,
    "Failed to register I2C bus %s.\n", VAR_4);
  VAR_3->par = ((void*)0);
 }

 return VAR_6;
}
