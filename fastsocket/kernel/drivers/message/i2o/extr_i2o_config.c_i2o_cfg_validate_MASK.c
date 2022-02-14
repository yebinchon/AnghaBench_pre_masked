
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** head; } ;
struct i2o_message {TYPE_1__ u; } ;
struct i2o_controller {int dummy; } ;
struct TYPE_4__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 TYPE_2__ VAR_8 ;
 struct i2o_controller* FUNC_3 (int) ;
 struct i2o_message* FUNC_4 (struct i2o_controller*,int ) ;
 int FUNC_5 (struct i2o_controller*,struct i2o_message*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_9)
{
 int VAR_10;
 int VAR_11 = (int)VAR_9;
 struct i2o_message *VAR_12;
 struct i2o_controller *VAR_13;

 VAR_13 = FUNC_3(VAR_11);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_13, VAR_6);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_12->u.head[0] = FUNC_2(VAR_2 | VAR_7);
 VAR_12->u.head[1] =
     FUNC_2(VAR_4 << 24 | VAR_3 << 12 | VAR_11);
 VAR_12->u.head[2] = FUNC_2(VAR_8.context);
 VAR_12->u.head[3] = FUNC_2(0);

 VAR_10 = FUNC_5(VAR_13, VAR_12, 10);

 if (VAR_10 != VAR_5) {
  FUNC_6("Can't validate configuration, ErrorStatus = %d\n",
    VAR_10);
  return -VAR_1;
 }

 return 0;
}
