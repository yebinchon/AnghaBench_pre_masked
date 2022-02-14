
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** head; } ;
struct i2o_message {TYPE_1__ u; } ;
struct i2o_controller {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct i2o_message* FUNC_5 (struct i2o_controller*,int ) ;
 int FUNC_6 (struct i2o_controller*,struct i2o_message*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct i2o_controller *VAR_6)
{
 struct i2o_message *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 FUNC_4();

 VAR_7->u.head[0] = FUNC_2(VAR_1 | VAR_5);
 VAR_7->u.head[1] =
     FUNC_2(VAR_3 << 24 | VAR_2 << 12 |
   VAR_0);

 if ((VAR_8 = FUNC_6(VAR_6, VAR_7, 30)))
  FUNC_8("%s: Unable to clear (status=%#x).\n", VAR_6->name, -VAR_8);
 else
  FUNC_7("%s: Cleared.\n", VAR_6->name);


 FUNC_3();

 return VAR_8;
}
