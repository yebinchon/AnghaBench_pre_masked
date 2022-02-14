
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct request {int errors; } ;
struct TYPE_3__ {int tcntxt; } ;
struct TYPE_4__ {int * head; TYPE_1__ s; } ;
struct i2o_message {int * body; TYPE_2__ u; } ;
struct i2o_controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int,int) ;
 struct request* FUNC_1 (struct i2o_controller*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2o_controller *VAR_1, u32 VAR_2,
      struct i2o_message *VAR_3)
{
 struct request *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_1, FUNC_2(VAR_3->u.s.tcntxt));
 if (FUNC_4(!VAR_4)) {
  FUNC_3("NULL reply received!\n");
  return -1;
 }






 if ((FUNC_2(VAR_3->body[0]) >> 24) != 0) {
  u32 VAR_6 = FUNC_2(VAR_3->body[0]);
  FUNC_3("TID %03x error status: 0x%02x, detailed status: "
   "0x%04x\n", (FUNC_2(VAR_3->u.head[1]) >> 12 & 0xfff),
   VAR_6 >> 24, VAR_6 & 0xffff);

  VAR_4->errors++;

  VAR_5 = -VAR_0;
 }

 FUNC_0(VAR_4, VAR_5, FUNC_2(VAR_3->body[1]));

 return 1;
}
