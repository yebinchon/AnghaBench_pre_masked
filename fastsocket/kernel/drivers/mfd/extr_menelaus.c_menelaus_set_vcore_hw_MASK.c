
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_2__ {int vcore_hw_mode; int lock; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

int FUNC_8(unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct i2c_client *VAR_12 = VAR_4->client;

 VAR_9 = FUNC_2(VAR_6, VAR_5,
          FUNC_0(VAR_5));
 if (VAR_9 < 0)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_7, VAR_5,
          FUNC_0(VAR_5));
 if (VAR_8 < 0)
  return -VAR_0;

 FUNC_1(&VAR_12->dev, "Setting VCORE FLOOR to %d mV and ROOF to %d mV\n",
        VAR_7, VAR_6);

 FUNC_6(&VAR_4->lock);
 VAR_11 = FUNC_4(VAR_2, VAR_8);
 if (VAR_11 < 0)
  goto out;
 VAR_11 = FUNC_4(VAR_3, VAR_9);
 if (VAR_11 < 0)
  goto out;
 if (!VAR_4->vcore_hw_mode) {
  VAR_10 = FUNC_3(VAR_1);

  VAR_10 |= ((1 << 7) | (1 << 5));
  VAR_11 = FUNC_4(VAR_1, VAR_10);
  VAR_4->vcore_hw_mode = 1;
 }
 FUNC_5(1);
out:
 FUNC_7(&VAR_4->lock);
 return VAR_11;
}
