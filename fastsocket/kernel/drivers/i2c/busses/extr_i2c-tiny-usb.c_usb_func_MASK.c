
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dev; } ;
typedef int func ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_adapter*,int ,int ,int ,int *,int) ;

__attribute__((used)) static u32 FUNC_3(struct i2c_adapter *VAR_1)
{
 __le32 VAR_2;


 if (FUNC_2(VAR_1, VAR_0, 0, 0, &VAR_2, sizeof(VAR_2)) !=
     sizeof(VAR_2)) {
  FUNC_0(&VAR_1->dev, "failure reading functionality\n");
  return 0;
 }

 return FUNC_1(VAR_2);
}
