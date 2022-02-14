
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; int name; int low_latency; struct async_struct* driver_data; } ;
struct file {int dummy; } ;
struct async_struct {int flags; int close_wait; struct tty_struct* tty; TYPE_1__* state; } ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tty_struct*,struct file*,struct async_struct*) ;
 int FUNC_1 (int,struct async_struct**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ FUNC_4 (struct async_struct*,int,char*) ;
 int FUNC_5 (struct async_struct*) ;
 scalar_t__ FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_7, struct file * VAR_8)
{
 struct async_struct *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_7->index;
 if ((VAR_11 < 0) || (VAR_11 >= VAR_6)) {
  return -VAR_4;
 }
 VAR_10 = FUNC_1(VAR_11, &VAR_9);
 if (VAR_10) {
  return VAR_10;
 }
 VAR_7->driver_data = VAR_9;
 VAR_9->tty = VAR_7;
 if (FUNC_4(VAR_9, VAR_7->name, "rs_open"))
  return -VAR_4;




 VAR_9->tty->low_latency = (VAR_9->flags & VAR_2) ? 1 : 0;




 if (FUNC_6(VAR_8) ||
     (VAR_9->flags & VAR_0)) {
  if (VAR_9->flags & VAR_0)
   FUNC_2(&VAR_9->close_wait);




  return -VAR_3;

 }




 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
  return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9);
 if (VAR_10) {




  return VAR_10;
 }




 return 0;
}
