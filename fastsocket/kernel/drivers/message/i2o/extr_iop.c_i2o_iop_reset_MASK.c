
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {void* tcntxt; void* icntxt; } ;
struct TYPE_10__ {TYPE_2__ s; void** head; } ;
struct i2o_message {void** body; TYPE_3__ u; } ;
struct TYPE_11__ {int* virt; int phys; } ;
struct TYPE_8__ {TYPE_5__* virt; } ;
struct i2o_controller {int name; int promise; int no_quiesce; TYPE_4__ status; TYPE_1__ status_block; } ;
struct TYPE_12__ {int iop_state; } ;
typedef TYPE_5__ i2o_status_block ;
struct TYPE_13__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;


 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_10 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_7__ VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct i2o_message* FUNC_7 (struct i2o_controller*,unsigned long) ;
 int FUNC_8 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_9 (struct i2o_controller*,struct i2o_message*) ;
 int FUNC_10 (struct i2o_controller*) ;
 unsigned long VAR_12 ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct i2o_controller *VAR_13)
{
 volatile u8 *VAR_14 = VAR_13->status.virt;
 struct i2o_message *VAR_15;
 unsigned long VAR_16;
 i2o_status_block *VAR_17 = VAR_13->status_block.virt;
 int VAR_18 = 0;

 FUNC_12("%s: Resetting controller\n", VAR_13->name);

 VAR_15 = FUNC_7(VAR_13, VAR_8);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 FUNC_11(VAR_13->status_block.virt, 0, 8);


 FUNC_6();

 VAR_15->u.head[0] = FUNC_2(VAR_2 | VAR_10);
 VAR_15->u.head[1] =
     FUNC_2(VAR_7 << 24 | VAR_5 << 12 |
   VAR_1);
 VAR_15->u.s.icntxt = FUNC_2(VAR_11.context);
 VAR_15->u.s.tcntxt = FUNC_2(0x00000000);
 VAR_15->body[0] = FUNC_2(0x00000000);
 VAR_15->body[1] = FUNC_2(0x00000000);
 VAR_15->body[2] = FUNC_2(FUNC_4(VAR_13->status.phys));
 VAR_15->body[3] = FUNC_2(FUNC_3(VAR_13->status.phys));

 FUNC_9(VAR_13, VAR_15);


 VAR_16 = VAR_12 + VAR_9 * VAR_6;
 while (!*VAR_14) {
  if (FUNC_16(VAR_12, VAR_16))
   break;

  FUNC_15(1);
 }

 switch (*VAR_14) {
 case 128:
  FUNC_14("%s: IOP reset rejected\n", VAR_13->name);
  VAR_18 = -VAR_3;
  break;

 case 129:
  FUNC_12("%s: Reset in progress, waiting for reboot...\n",
     VAR_13->name);

  while (FUNC_0(VAR_15 = FUNC_7(VAR_13, VAR_9))) {
   if (FUNC_16(VAR_12, VAR_16)) {
    FUNC_13("%s: IOP reset timeout.\n", VAR_13->name);
    VAR_18 = FUNC_1(VAR_15);
    goto exit;
   }
   FUNC_15(1);
  }
  FUNC_8(VAR_13, VAR_15);


  VAR_13->no_quiesce = 0;


  FUNC_10(VAR_13);

  if (!VAR_13->promise && (VAR_17->iop_state != VAR_0))
   FUNC_14("%s: reset completed, but adapter not in RESET"
     " state.\n", VAR_13->name);
  else
   FUNC_12("%s: reset completed.\n", VAR_13->name);

  break;

 default:
  FUNC_13("%s: IOP reset timeout.\n", VAR_13->name);
  VAR_18 = -VAR_4;
  break;
 }

      exit:

 FUNC_5();

 return VAR_18;
}
