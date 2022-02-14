
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct mv64xxx_i2c_data {scalar_t__ state; int bytes_left; int rc; void* action; TYPE_2__* msg; TYPE_1__ adapter; int cntl_bits; int aborting; int byte_posn; } ;
struct TYPE_4__ {int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *,char*,scalar_t__,int,int ,int) ;
 int FUNC_1 (struct mv64xxx_i2c_data*) ;

__attribute__((used)) static void
FUNC_2(struct mv64xxx_i2c_data *VAR_16, u32 VAR_17)
{





 if (VAR_16->state == VAR_11) {
  VAR_16->action = VAR_9;
  return;
 }


 switch (VAR_17) {

 case 133:
 case 134:
  VAR_16->action = VAR_6;
  VAR_16->state = VAR_12;
  break;


 case 130:
  if (VAR_16->msg->flags & VAR_2) {
   VAR_16->action = VAR_7;
   VAR_16->state =
    VAR_13;
   break;
  }

 case 131:
 case 132:
  if ((VAR_16->bytes_left == 0)
    || (VAR_16->aborting
     && (VAR_16->byte_posn != 0))) {
   VAR_16->action = VAR_9;
   VAR_16->state = VAR_11;
  } else {
   VAR_16->action = VAR_8;
   VAR_16->state =
    VAR_14;
   VAR_16->bytes_left--;
  }
  break;


 case 138:
  if (VAR_16->msg->flags & VAR_2) {
   VAR_16->action = VAR_7;
   VAR_16->state =
    VAR_13;
   break;
  }

 case 139:
  if (VAR_16->bytes_left == 0) {
   VAR_16->action = VAR_9;
   VAR_16->state = VAR_11;
   break;
  }

 case 136:
  if (VAR_17 != 136)
   VAR_16->action = VAR_3;
  else {
   VAR_16->action = VAR_4;
   VAR_16->bytes_left--;
  }
  VAR_16->state = VAR_15;

  if ((VAR_16->bytes_left == 1) || VAR_16->aborting)
   VAR_16->cntl_bits &= ~VAR_10;
  break;

 case 135:
  VAR_16->action = VAR_5;
  VAR_16->state = VAR_11;
  break;

 case 129:
 case 128:
 case 137:

  VAR_16->action = VAR_9;
  VAR_16->state = VAR_11;
  VAR_16->rc = -VAR_1;
  break;

 default:
  FUNC_0(&VAR_16->adapter.dev,
   "mv64xxx_i2c_fsm: Ctlr Error -- state: 0x%x, "
   "status: 0x%x, addr: 0x%x, flags: 0x%x\n",
    VAR_16->state, VAR_17, VAR_16->msg->addr,
    VAR_16->msg->flags);
  VAR_16->action = VAR_9;
  FUNC_1(VAR_16);
  VAR_16->rc = -VAR_0;
 }
}
