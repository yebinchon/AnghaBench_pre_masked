
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_2__ {int lock; scalar_t__ vcore_hw_mode; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

int FUNC_7(unsigned int VAR_4)
{
 int VAR_5, VAR_6;
 struct i2c_client *VAR_7 = VAR_2->client;

 VAR_5 = FUNC_2(VAR_4, VAR_3,
         FUNC_0(VAR_3));
 if (VAR_5 < 0)
  return -VAR_0;

 FUNC_1(&VAR_7->dev, "Setting VCORE to %d mV (val 0x%02x)\n", VAR_4, VAR_5);


 FUNC_5(&VAR_2->lock);
 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (VAR_6 == 0)
  VAR_2->vcore_hw_mode = 0;
 FUNC_6(&VAR_2->lock);
 FUNC_4(1);

 return VAR_6;
}
