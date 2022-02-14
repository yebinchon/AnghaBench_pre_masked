
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serial_struct {scalar_t__ type; scalar_t__ close_delay; int flags; int closing_wait; int custom_divisor; int baud_base; } ;
struct TYPE_4__ {TYPE_1__* tty; } ;
struct e100_serial {scalar_t__ type; scalar_t__ close_delay; int flags; int count; TYPE_2__ port; int closing_wait; int custom_divisor; int baud_base; } ;
typedef int new_serial ;
struct TYPE_3__ {int low_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e100_serial*) ;
 scalar_t__ FUNC_2 (struct serial_struct*,struct serial_struct*,int) ;
 int FUNC_3 (struct e100_serial*) ;

__attribute__((used)) static int
FUNC_4(struct e100_serial *VAR_8,
  struct serial_struct *VAR_9)
{
 struct serial_struct VAR_10;
 struct e100_serial VAR_11;
 int VAR_12 = 0;

 if (FUNC_2(&VAR_10, VAR_9, sizeof(VAR_10)))
  return -VAR_6;

 VAR_11 = *VAR_8;

 if (!FUNC_0(VAR_4)) {
  if ((VAR_10.type != VAR_8->type) ||
      (VAR_10.close_delay != VAR_8->close_delay) ||
      ((VAR_10.flags & ~VAR_3) !=
       (VAR_8->flags & ~VAR_3)))
   return -VAR_7;
  VAR_8->flags = ((VAR_8->flags & ~VAR_3) |
          (VAR_10.flags & VAR_3));
  goto check_and_exit;
 }

 if (VAR_8->count > 1)
  return -VAR_5;






 VAR_8->baud_base = VAR_10.baud_base;
 VAR_8->flags = ((VAR_8->flags & ~VAR_0) |
         (VAR_10.flags & VAR_0));
 VAR_8->custom_divisor = VAR_10.custom_divisor;
 VAR_8->type = VAR_10.type;
 VAR_8->close_delay = VAR_10.close_delay;
 VAR_8->closing_wait = VAR_10.closing_wait;
 VAR_8->port.tty->low_latency = (VAR_8->flags & VAR_2) ? 1 : 0;

 check_and_exit:
 if (VAR_8->flags & VAR_1) {
  FUNC_1(VAR_8);
 } else
  VAR_12 = FUNC_3(VAR_8);
 return VAR_12;
}
