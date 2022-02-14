
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_2__* driver; TYPE_1__* termios; } ;
struct tty_port {int flags; int blocked_open; int count; int open_wait; } ;
struct slgt_info {int lock; struct tty_port port; } ;
struct file {int f_flags; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int *) ;
 int VAR_12 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct file*) ;
 int FUNC_10 (struct tty_port*) ;
 int FUNC_11 (struct tty_port*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_14, struct file *VAR_15,
      struct slgt_info *VAR_16)
{
 FUNC_1(VAR_13, VAR_12);
 int VAR_17;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 unsigned long VAR_20;
 int VAR_21;
 struct tty_port *VAR_22 = &VAR_16->port;

 FUNC_0(("%s block_til_ready\n", VAR_14->driver->name));

 if (VAR_15->f_flags & VAR_8 || VAR_14->flags & (1 << VAR_11)){

  VAR_22->flags |= VAR_3;
  return 0;
 }

 if (VAR_14->termios->c_cflag & VAR_5)
  VAR_18 = 1;
 VAR_17 = 0;
 FUNC_2(&VAR_22->open_wait, &VAR_13);

 FUNC_7(&VAR_16->lock, VAR_20);
 if (!FUNC_9(VAR_15)) {
  VAR_19 = 1;
  VAR_22->count--;
 }
 FUNC_8(&VAR_16->lock, VAR_20);
 VAR_22->blocked_open++;

 while (1) {
  if ((VAR_14->termios->c_cflag & VAR_4))
   FUNC_11(VAR_22);

  FUNC_5(VAR_9);

  if (FUNC_9(VAR_15) || !(VAR_22->flags & VAR_2)){
   VAR_17 = (VAR_22->flags & VAR_1) ?
     -VAR_6 : -VAR_7;
   break;
  }

  VAR_21 = FUNC_10(VAR_22);

   if (!(VAR_22->flags & VAR_0) && (VAR_18 || VAR_21 ))
    break;

  if (FUNC_6(VAR_12)) {
   VAR_17 = -VAR_7;
   break;
  }

  FUNC_0(("%s block_til_ready wait\n", VAR_14->driver->name));
  FUNC_4();
 }

 FUNC_5(VAR_10);
 FUNC_3(&VAR_22->open_wait, &VAR_13);

 if (VAR_19)
  VAR_22->count++;
 VAR_22->blocked_open--;

 if (!VAR_17)
  VAR_22->flags |= VAR_3;

 FUNC_0(("%s block_til_ready ready, rc=%d\n", VAR_14->driver->name, VAR_17));
 return VAR_17;
}
