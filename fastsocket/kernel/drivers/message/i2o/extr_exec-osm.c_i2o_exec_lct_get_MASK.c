
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** head; } ;
struct i2o_message {void** body; TYPE_1__ u; } ;
struct TYPE_4__ {int len; int phys; } ;
struct i2o_controller {TYPE_2__ dlct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct i2o_controller*) ;
 struct i2o_message* FUNC_4 (struct i2o_controller*,int ) ;
 int FUNC_5 (struct i2o_controller*,struct i2o_message*,int ) ;

int FUNC_6(struct i2o_controller *VAR_9)
{
 struct i2o_message *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = -VAR_1;

 for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++) {
  VAR_10 = FUNC_4(VAR_9, VAR_7);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  VAR_10->u.head[0] =
      FUNC_2(VAR_2 | VAR_8);
  VAR_10->u.head[1] =
      FUNC_2(VAR_4 << 24 | VAR_3 << 12 |
    VAR_0);
  VAR_10->body[0] = FUNC_2(0xffffffff);
  VAR_10->body[1] = FUNC_2(0x00000000);
  VAR_10->body[2] = FUNC_2(0xd0000000 | VAR_9->dlct.len);
  VAR_10->body[3] = FUNC_2(VAR_9->dlct.phys);

  VAR_12 = FUNC_5(VAR_9, VAR_10, VAR_6);
  if (VAR_12 < 0)
   break;

  VAR_12 = FUNC_3(VAR_9);
  if (VAR_12 != -VAR_1)
   break;
 }

 return VAR_12;
}
