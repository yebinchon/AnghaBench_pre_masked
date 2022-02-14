
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {void* tcntxt; void* icntxt; } ;
struct TYPE_7__ {TYPE_1__ s; void** head; } ;
struct i2o_message {void** body; TYPE_2__ u; } ;
struct TYPE_9__ {int phys; } ;
struct TYPE_8__ {scalar_t__* virt; int phys; } ;
struct i2o_controller {TYPE_4__ out_queue; int name; TYPE_3__ status; } ;
struct TYPE_10__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ volatile VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int VAR_11 ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_12 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_5__ VAR_13 ;
 int FUNC_5 (struct i2o_controller*,int) ;
 struct i2o_message* FUNC_6 (struct i2o_controller*,int ) ;
 int FUNC_7 (struct i2o_controller*,struct i2o_message*) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct i2o_controller *VAR_15)
{
 u32 VAR_16;
 volatile u8 *VAR_17 = VAR_15->status.virt;
 struct i2o_message *VAR_18;
 ulong VAR_19;
 int VAR_20;

 FUNC_9("%s: Initializing Outbound Queue...\n", VAR_15->name);

 FUNC_8(VAR_15->status.virt, 0, 4);

 VAR_18 = FUNC_6(VAR_15, VAR_10);
 if (FUNC_0(VAR_18))
  return FUNC_1(VAR_18);

 VAR_18->u.head[0] = FUNC_2(VAR_1 | VAR_12);
 VAR_18->u.head[1] =
     FUNC_2(VAR_6 << 24 | VAR_3 << 12 |
   VAR_0);
 VAR_18->u.s.icntxt = FUNC_2(VAR_13.context);
 VAR_18->u.s.tcntxt = FUNC_2(0x00000000);
 VAR_18->body[0] = FUNC_2(VAR_11);

 VAR_18->body[1] = FUNC_2(VAR_8 << 16 | 0x80);
 VAR_18->body[2] = FUNC_2(0xd0000004);
 VAR_18->body[3] = FUNC_2(FUNC_4(VAR_15->status.phys));
 VAR_18->body[4] = FUNC_2(FUNC_3(VAR_15->status.phys));

 FUNC_7(VAR_15, VAR_18);

 VAR_19 = VAR_14 + VAR_9 * VAR_4;
 while (*VAR_17 <= VAR_5) {
  if (FUNC_12(VAR_14, VAR_19)) {
   FUNC_10("%s: Timeout Initializing\n", VAR_15->name);
   return -VAR_2;
  }
  FUNC_11(1);
 }

 VAR_16 = VAR_15->out_queue.phys;


 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  FUNC_5(VAR_15, VAR_16);
  FUNC_13(1);
  VAR_16 += VAR_8 * sizeof(u32);
 }

 return 0;
}
