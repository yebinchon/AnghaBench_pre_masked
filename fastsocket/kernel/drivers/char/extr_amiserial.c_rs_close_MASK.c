
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int count; int closing; int name; struct async_struct* driver_data; } ;
struct serial_state {int count; } ;
struct file {int dummy; } ;
struct async_struct {int flags; scalar_t__ closing_wait; int close_wait; int open_wait; scalar_t__ close_delay; scalar_t__ blocked_open; int * tty; scalar_t__ event; int timeout; int read_status_mask; int line; struct serial_state* state; } ;
struct TYPE_2__ {void* intreq; void* intena; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_9 (struct async_struct*,int ,char*) ;
 int FUNC_10 (struct async_struct*) ;
 scalar_t__ FUNC_11 (struct file*) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*,scalar_t__) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct tty_struct *VAR_7, struct file * VAR_8)
{
 struct async_struct * VAR_9 = VAR_7->driver_data;
 struct serial_state *VAR_10;
 unsigned long VAR_11;

 if (!VAR_9 || FUNC_9(VAR_9, VAR_7->name, "rs_close"))
  return;

 VAR_10 = VAR_9->state;

 FUNC_3(VAR_11);

 if (FUNC_11(VAR_8)) {
  FUNC_0("before DEC-hung");
  FUNC_2(VAR_11);
  return;
 }




 if ((VAR_7->count == 1) && (VAR_10->count != 1)) {







  FUNC_6("rs_close: bad serial port count; tty->count is 1, "
         "state->count is %d\n", VAR_10->count);
  VAR_10->count = 1;
 }
 if (--VAR_10->count < 0) {
  FUNC_6("rs_close: bad serial port count for ttys%d: %d\n",
         VAR_9->line, VAR_10->count);
  VAR_10->count = 0;
 }
 if (VAR_10->count) {
  FUNC_0("before DEC-2");
  FUNC_2(VAR_11);
  return;
 }
 VAR_9->flags |= VAR_0;




 VAR_7->closing = 1;
 if (VAR_9->closing_wait != VAR_1)
  FUNC_13(VAR_7, VAR_9->closing_wait);






 VAR_9->read_status_mask &= ~VAR_5;
 if (VAR_9->flags & VAR_2) {

         VAR_6.intena = VAR_4;
  FUNC_4();

  VAR_6.intreq = VAR_4;
  FUNC_4();






  FUNC_8(VAR_7, VAR_9->timeout);
 }
 FUNC_10(VAR_9);
 FUNC_7(VAR_7);

 FUNC_12(VAR_7);
 VAR_7->closing = 0;
 VAR_9->event = 0;
 VAR_9->tty = ((void*)0);
 if (VAR_9->blocked_open) {
  if (VAR_9->close_delay) {
   FUNC_5(FUNC_1(VAR_9->close_delay));
  }
  FUNC_14(&VAR_9->open_wait);
 }
 VAR_9->flags &= ~(VAR_3|VAR_0);
 FUNC_14(&VAR_9->close_wait);
 FUNC_2(VAR_11);
}
