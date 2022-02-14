
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_controller {int name; } ;


 int FUNC_0 (struct i2o_controller*) ;
 int FUNC_1 (struct i2o_controller*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2o_controller *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;


 FUNC_2("%s: Attempting to enable...\n", VAR_0->name);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
