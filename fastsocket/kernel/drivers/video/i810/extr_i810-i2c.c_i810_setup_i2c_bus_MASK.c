
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
struct TYPE_8__ {int udelay; int timeout; int (* setscl ) (struct i810fb_i2c_chan*,int) ;int (* setsda ) (struct i810fb_i2c_chan*,int) ;struct i810fb_i2c_chan* data; int getscl; int getsda; } ;
struct i810fb_i2c_chan {TYPE_4__* par; TYPE_5__ adapter; TYPE_2__ algo; } ;
struct TYPE_10__ {TYPE_3__* dev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,struct i810fb_i2c_chan*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct i810fb_i2c_chan*,int) ;
 int FUNC_5 (struct i810fb_i2c_chan*,int) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct i810fb_i2c_chan*,int) ;
 int FUNC_8 (struct i810fb_i2c_chan*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct i810fb_i2c_chan *VAR_4, const char *VAR_5)
{
        int VAR_6;

        FUNC_6(VAR_4->adapter.name, VAR_5);
        VAR_4->adapter.owner = VAR_1;
        VAR_4->adapter.algo_data = &VAR_4->algo;
        VAR_4->adapter.dev.parent = &VAR_4->par->dev->dev;
 VAR_4->algo.setsda = FUNC_5;
 VAR_4->algo.setscl = FUNC_4;
 VAR_4->algo.getsda = VAR_3;
 VAR_4->algo.getscl = VAR_2;
 VAR_4->algo.udelay = 10;
        VAR_4->algo.timeout = (VAR_0/2);
        VAR_4->algo.data = VAR_4;

        FUNC_3(&VAR_4->adapter, VAR_4);


        VAR_4->algo.setsda(VAR_4, 1);
        VAR_4->algo.setscl(VAR_4, 1);
        FUNC_9(20);

        VAR_6 = FUNC_2(&VAR_4->adapter);

        if (VAR_6 == 0)
                FUNC_0(&VAR_4->par->dev->dev, "I2C bus %s registered.\n",VAR_5);
        else {
                FUNC_1(&VAR_4->par->dev->dev, "Failed to register I2C bus "
    "%s.\n", VAR_5);
  VAR_4->par = ((void*)0);
 }

        return VAR_6;
}
