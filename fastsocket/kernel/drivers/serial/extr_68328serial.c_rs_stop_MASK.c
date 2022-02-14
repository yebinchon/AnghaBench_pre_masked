
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct m68k_serial {size_t line; } ;
struct TYPE_3__ {int ustcnt; } ;
typedef TYPE_1__ m68328_uart ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct m68k_serial*,int ,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 struct m68k_serial *VAR_3 = (struct m68k_serial *)VAR_2->driver_data;
 m68328_uart *VAR_4 = &VAR_1[VAR_3->line];
 unsigned long VAR_5;

 if (FUNC_2(VAR_3, VAR_2->name, "rs_stop"))
  return;

 FUNC_1(VAR_5);
 VAR_4->ustcnt &= ~VAR_0;
 FUNC_0(VAR_5);
}
