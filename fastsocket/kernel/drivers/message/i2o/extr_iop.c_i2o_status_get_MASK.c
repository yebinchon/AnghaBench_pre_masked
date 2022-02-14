
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {void* tcntxt; void* icntxt; } ;
struct TYPE_6__ {TYPE_1__ s; void** head; } ;
struct i2o_message {void** body; TYPE_2__ u; } ;
struct TYPE_7__ {int phys; scalar_t__ virt; } ;
struct i2o_controller {int name; TYPE_3__ status_block; } ;
typedef int i2o_status_block ;
struct TYPE_8__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int VAR_7 ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct i2o_controller*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_4__ VAR_9 ;
 struct i2o_message* FUNC_6 (struct i2o_controller*,int ) ;
 int FUNC_7 (struct i2o_controller*,struct i2o_message*) ;
 unsigned long VAR_10 ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;

int FUNC_12(struct i2o_controller *VAR_11)
{
 struct i2o_message *VAR_12;
 volatile u8 *VAR_13;
 unsigned long VAR_14;

 VAR_13 = (u8 *) VAR_11->status_block.virt;
 FUNC_8(VAR_11->status_block.virt, 0, sizeof(i2o_status_block));

 VAR_12 = FUNC_6(VAR_11, VAR_5);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_12->u.head[0] = FUNC_2(VAR_7 | VAR_8);
 VAR_12->u.head[1] =
     FUNC_2(VAR_4 << 24 | VAR_2 << 12 |
   VAR_0);
 VAR_12->u.s.icntxt = FUNC_2(VAR_9.context);
 VAR_12->u.s.tcntxt = FUNC_2(0x00000000);
 VAR_12->body[0] = FUNC_2(0x00000000);
 VAR_12->body[1] = FUNC_2(0x00000000);
 VAR_12->body[2] = FUNC_2(FUNC_5(VAR_11->status_block.phys));
 VAR_12->body[3] = FUNC_2(FUNC_4(VAR_11->status_block.phys));
 VAR_12->body[4] = FUNC_2(sizeof(i2o_status_block));

 FUNC_7(VAR_11, VAR_12);


 VAR_14 = VAR_10 + VAR_6 * VAR_3;
 while (VAR_13[87] != 0xFF) {
  if (FUNC_11(VAR_10, VAR_14)) {
   FUNC_9("%s: Get status timeout.\n", VAR_11->name);
   return -VAR_1;
  }

  FUNC_10(1);
 }





 return 0;
}
