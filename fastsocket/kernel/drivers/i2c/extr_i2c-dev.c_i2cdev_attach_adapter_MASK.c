
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_dev {struct i2c_dev* dev; } ;
struct i2c_adapter {int nr; int name; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_dev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_dev*) ;
 int VAR_1 ;
 struct i2c_dev* FUNC_3 (int ,int *,int ,int *,char*,int ) ;
 int FUNC_4 (struct i2c_dev*,int *) ;
 int FUNC_5 (int ,int ) ;
 struct i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 int VAR_2 ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct i2c_dev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_3)
{
 struct i2c_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);


 VAR_4->dev = FUNC_3(VAR_2, &VAR_3->dev,
         FUNC_1(VAR_0, VAR_3->nr), ((void*)0),
         "i2c-%d", VAR_3->nr);
 if (FUNC_0(VAR_4->dev)) {
  VAR_5 = FUNC_2(VAR_4->dev);
  goto error;
 }
 VAR_5 = FUNC_4(VAR_4->dev, &VAR_1);
 if (VAR_5)
  goto error_destroy;

 FUNC_7("i2c-dev: adapter [%s] registered as minor %d\n",
   VAR_3->name, VAR_3->nr);
 return 0;
error_destroy:
 FUNC_5(VAR_2, FUNC_1(VAR_0, VAR_3->nr));
error:
 FUNC_8(VAR_4);
 return VAR_5;
}
