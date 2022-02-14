
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct migor_ts_priv {int irq; } ;
struct i2c_client {int dev; } ;
typedef int pm_message_t ;


 struct migor_ts_priv* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, pm_message_t VAR_1)
{
 struct migor_ts_priv *VAR_2 = FUNC_0(&VAR_0->dev);

 if (FUNC_1(&VAR_0->dev))
  FUNC_2(VAR_2->irq);

 return 0;
}
