
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; int name; scalar_t__ driver_data; } ;
struct m68k_serial {int is_cons; int line; } ;
struct TYPE_2__ {scalar_t__ c_line; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 scalar_t__ FUNC_1 (struct m68k_serial*,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct m68k_serial *VAR_2 = (struct m68k_serial *)VAR_1->driver_data;

 if (FUNC_1(VAR_2, VAR_1->name, "rs_set_ldisc"))
  return;

 VAR_2->is_cons = (VAR_1->termios->c_line == VAR_0);

 FUNC_0("ttyS%d console mode %s\n", VAR_2->line, VAR_2->is_cons ? "on" : "off");
}
