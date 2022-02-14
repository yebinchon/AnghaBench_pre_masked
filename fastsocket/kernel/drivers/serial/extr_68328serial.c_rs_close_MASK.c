
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num; int (* open ) (struct tty_struct*) ;int (* close ) (struct tty_struct*) ;} ;
struct tty_struct {int count; int closing; TYPE_5__ ldisc; TYPE_2__* termios; int name; scalar_t__ driver_data; } ;
struct TYPE_6__ {int * tty; } ;
struct m68k_serial {size_t line; int count; int flags; scalar_t__ closing_wait; int close_wait; int open_wait; scalar_t__ close_delay; scalar_t__ blocked_open; TYPE_1__ port; scalar_t__ event; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int ustcnt; } ;
typedef TYPE_3__ m68328_uart ;
struct TYPE_7__ {size_t c_line; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_5__* VAR_6 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t,...) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct m68k_serial*,int ,char*) ;
 int FUNC_7 (struct m68k_serial*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct file*) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*,scalar_t__) ;
 TYPE_3__* VAR_7 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct tty_struct *VAR_8, struct file * VAR_9)
{
 struct m68k_serial * VAR_10 = (struct m68k_serial *)VAR_8->driver_data;
 m68328_uart *VAR_11 = &VAR_7[VAR_10->line];
 unsigned long VAR_12;

 if (!VAR_10 || FUNC_6(VAR_10, VAR_8->name, "rs_close"))
  return;

 FUNC_2(VAR_12);

 if (FUNC_10(VAR_9)) {
  FUNC_1(VAR_12);
  return;
 }

 if ((VAR_8->count == 1) && (VAR_10->count != 1)) {







  FUNC_4("rs_close: bad serial port count; tty->count is 1, "
         "info->count is %d\n", VAR_10->count);
  VAR_10->count = 1;
 }
 if (--VAR_10->count < 0) {
  FUNC_4("rs_close: bad serial port count for ttyS%d: %d\n",
         VAR_10->line, VAR_10->count);
  VAR_10->count = 0;
 }
 if (VAR_10->count) {
  FUNC_1(VAR_12);
  return;
 }
 VAR_10->flags |= VAR_1;




 VAR_8->closing = 1;
 if (VAR_10->closing_wait != VAR_2)
  FUNC_12(VAR_8, VAR_10->closing_wait);







 VAR_11->ustcnt &= ~VAR_4;
 VAR_11->ustcnt &= ~(VAR_4 | VAR_5);

 FUNC_7(VAR_10);
 FUNC_5(VAR_8);

 FUNC_11(VAR_8);
 VAR_8->closing = 0;
 VAR_10->event = 0;
 VAR_10->port.tty = ((void*)0);
 if (VAR_10->blocked_open) {
  if (VAR_10->close_delay) {
   FUNC_3(FUNC_0(VAR_10->close_delay));
  }
  FUNC_13(&VAR_10->open_wait);
 }
 VAR_10->flags &= ~(VAR_3|VAR_1);
 FUNC_13(&VAR_10->close_wait);
 FUNC_1(VAR_12);
}
