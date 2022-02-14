
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {int flags; int name; scalar_t__ driver_data; } ;
struct serial_icounter_struct {int dcd; int rng; int dsr; int cts; } ;
struct file {int dummy; } ;
struct async_icount {int dcd; int rng; int dsr; int cts; } ;
struct TYPE_9__ {TYPE_1__* state; int delta_msr_wait; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_8__ {struct async_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;


 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 struct async_icount VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_2__*,unsigned long) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_struct*,int ) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_12, struct file * VAR_13,
      unsigned int VAR_14, unsigned long VAR_15)
{
 int VAR_16;
 ser_info_t *VAR_17 = (ser_info_t *)VAR_12->driver_data;
 int VAR_18;
 struct async_icount VAR_19;

 struct serial_icounter_struct *VAR_20;

 if (FUNC_8(VAR_17, VAR_12->name, "rs_ioctl"))
  return -VAR_2;

 if ((VAR_14 != 130) && (VAR_14 != 131)) {
  if (VAR_12->flags & (1 << VAR_9))
      return -VAR_1;
 }

 switch (VAR_14) {
  case 134:
   VAR_18 = FUNC_10(VAR_12);
   if (VAR_18)
    return VAR_18;
   FUNC_11(VAR_12, 0);
   if (FUNC_9(VAR_11))
    return -VAR_0;
   if (!VAR_15) {
    FUNC_7(VAR_17, 250);
    if (FUNC_9(VAR_11))
     return -VAR_0;
   }
   return 0;
  case 133:
   VAR_18 = FUNC_10(VAR_12);
   if (VAR_18)
    return VAR_18;
   FUNC_11(VAR_12, 0);
   if (FUNC_9(VAR_11))
    return -VAR_0;
   FUNC_7(VAR_17, VAR_15 ? VAR_15*100 : 250);
   if (FUNC_9(VAR_11))
    return -VAR_0;
   return 0;
  case 129:
   VAR_18 = FUNC_10(VAR_12);
   if (VAR_18)
    return VAR_18;
   FUNC_11(VAR_12, 0);
   FUNC_0(VAR_17);
   return 0;
  case 132:
   VAR_18 = FUNC_10(VAR_12);
   if (VAR_18)
    return VAR_18;
   FUNC_1(VAR_17);
   return 0;
   case 130:
   return 0;
  case 131:
   FUNC_4();
   VAR_19 = VAR_17->state->icount;
   FUNC_5();
   VAR_20 = (struct serial_icounter_struct *) VAR_15;
   FUNC_6(VAR_19.cts, &VAR_20->cts);
   FUNC_6(VAR_19.dsr, &VAR_20->dsr);
   FUNC_6(VAR_19.rng, &VAR_20->rng);
   FUNC_6(VAR_19.dcd, &VAR_20->dcd);
   return 0;

  default:
   return -VAR_3;
  }
 return 0;
}
