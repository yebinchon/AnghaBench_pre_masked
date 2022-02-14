
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_struct {scalar_t__ baud_base; scalar_t__ type; scalar_t__ close_delay; int flags; int closing_wait; int custom_divisor; } ;
struct m68k_serial {scalar_t__ baud_base; scalar_t__ type; scalar_t__ close_delay; int flags; int count; int closing_wait; int custom_divisor; } ;
typedef int new_serial ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct serial_struct*,struct serial_struct*,int) ;
 int FUNC_2 (struct m68k_serial*) ;

__attribute__((used)) static int FUNC_3(struct m68k_serial * VAR_6,
      struct serial_struct * VAR_7)
{
 struct serial_struct VAR_8;
 struct m68k_serial VAR_9;
 int VAR_10 = 0;

 if (!VAR_7)
  return -VAR_2;
 FUNC_1(&VAR_8,VAR_7,sizeof(VAR_8));
 VAR_9 = *VAR_6;

 if (!FUNC_0(VAR_0)) {
  if ((VAR_8.baud_base != VAR_6->baud_base) ||
      (VAR_8.type != VAR_6->type) ||
      (VAR_8.close_delay != VAR_6->close_delay) ||
      ((VAR_8.flags & ~VAR_5) !=
       (VAR_6->flags & ~VAR_5)))
   return -VAR_3;
  VAR_6->flags = ((VAR_6->flags & ~VAR_5) |
          (VAR_8.flags & VAR_5));
  VAR_6->custom_divisor = VAR_8.custom_divisor;
  goto check_and_exit;
 }

 if (VAR_6->count > 1)
  return -VAR_1;






 VAR_6->baud_base = VAR_8.baud_base;
 VAR_6->flags = ((VAR_6->flags & ~VAR_4) |
   (VAR_8.flags & VAR_4));
 VAR_6->type = VAR_8.type;
 VAR_6->close_delay = VAR_8.close_delay;
 VAR_6->closing_wait = VAR_8.closing_wait;

check_and_exit:
 VAR_10 = FUNC_2(VAR_6);
 return VAR_10;
}
