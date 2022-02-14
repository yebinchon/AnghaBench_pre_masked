
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int index; int low_latency; int name; struct async_struct* driver_data; } ;
struct file {int dummy; } ;
struct async_struct {int flags; int line; int close_wait; struct tty_struct* tty; TYPE_1__* state; } ;
struct TYPE_5__ {int flags; struct TYPE_5__* next; scalar_t__ write; } ;
struct TYPE_4__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,struct async_struct**) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (struct async_struct*) ;
 unsigned char* VAR_12 ;
 scalar_t__ FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_13, struct file * VAR_14)
{
 struct async_struct *VAR_15;
 int VAR_16, VAR_17;
 unsigned long VAR_18;

 VAR_17 = VAR_13->index;
 if ((VAR_17 < 0) || (VAR_17 >= VAR_9))
  return -VAR_5;
 VAR_16 = FUNC_1(VAR_17, &VAR_15);
 if (VAR_16)
  return VAR_16;
 VAR_13->driver_data = VAR_15;
 VAR_15->tty = VAR_13;




 VAR_15->tty->low_latency = (VAR_15->flags & VAR_2) ? 1 : 0;

 if (!VAR_12) {
  VAR_18 = FUNC_2(VAR_8);
  if (!VAR_18)
   return -VAR_6;
  if (VAR_12)
   FUNC_0(VAR_18);
  else
   VAR_12 = (unsigned char *) VAR_18;
 }




 if (FUNC_6(VAR_14) ||
     (VAR_15->flags & VAR_0)) {
  if (VAR_15->flags & VAR_0)
   FUNC_3(&VAR_15->close_wait);




  return -VAR_4;

 }




 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16) {
  return VAR_16;
 }




 VAR_10 = VAR_11;
 while (VAR_10) {
  if ((VAR_10->flags & VAR_3) && VAR_10->write) break;
  VAR_10 = VAR_10->next;
 }




 return 0;
}
