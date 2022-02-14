
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_message {int dummy; } ;
struct i2o_controller {int name; } ;


 struct i2o_message* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i2o_message*) ;
 struct i2o_message* FUNC_2 (struct i2o_controller*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

struct i2o_message *FUNC_6(struct i2o_controller *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = VAR_2 + VAR_4 * VAR_1;
 struct i2o_message *VAR_6;

 while (FUNC_1(VAR_6 = FUNC_2(VAR_3))) {
  if (FUNC_5(VAR_2, VAR_5)) {
   FUNC_3("%s: Timeout waiting for message frame.\n",
      VAR_3->name);
   return FUNC_0(-VAR_0);
  }
  FUNC_4(1);
 }

 return VAR_6;
}
