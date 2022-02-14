
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_2 ;

int FUNC_5(int VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;
 struct i2c_client *VAR_7 = VAR_2->client;

 FUNC_3(&VAR_2->lock);
 VAR_6 = FUNC_2(VAR_1, VAR_4);
 if (VAR_6 < 0)
  goto out;

 FUNC_0(&VAR_7->dev, "regulator sleep configuration: %02x\n", VAR_4);

 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6 < 0)
  goto out;
 VAR_5 = ((1 << 6) | 0x04);
 if (VAR_3)
  VAR_6 |= VAR_5;
 else
  VAR_6 &= ~VAR_5;
 VAR_6 = FUNC_2(VAR_0, VAR_6);
out:
 FUNC_4(&VAR_2->lock);
 return VAR_6;
}
