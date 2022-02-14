
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int (* probe ) (struct i2c_client*,int ) ;int id_table; } ;
struct i2c_client {int flags; struct i2c_driver* driver; int dev; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 struct i2c_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_2);
 struct i2c_driver *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_6(VAR_2->driver);
 if (!VAR_4->probe || !VAR_4->id_table)
  return -VAR_0;
 VAR_3->driver = VAR_4;
 if (!FUNC_1(&VAR_3->dev))
  FUNC_2(&VAR_3->dev,
     VAR_3->flags & VAR_1);
 FUNC_0(VAR_2, "probe\n");

 VAR_5 = VAR_4->probe(VAR_3, FUNC_3(VAR_4->id_table, VAR_3));
 if (VAR_5)
  VAR_3->driver = ((void*)0);
 return VAR_5;
}
