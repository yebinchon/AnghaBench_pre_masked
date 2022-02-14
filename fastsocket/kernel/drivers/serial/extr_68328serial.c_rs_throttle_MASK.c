
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; scalar_t__ driver_data; } ;
struct m68k_serial {int x_char; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct m68k_serial*,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct * VAR_0)
{
 struct m68k_serial *VAR_1 = (struct m68k_serial *)VAR_0->driver_data;

 if (FUNC_2(VAR_1, VAR_0->name, "rs_throttle"))
  return;

 if (FUNC_0(VAR_0))
  VAR_1->x_char = FUNC_1(VAR_0);


}
