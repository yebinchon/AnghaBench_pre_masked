
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty3270 {int view; } ;
struct kbd_data {TYPE_1__* tty; } ;
struct TYPE_2__ {struct tty3270* driver_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct kbd_data *VAR_0)
{
 struct tty3270 *VAR_1;

 VAR_1 = VAR_0->tty->driver_data;
 FUNC_0(&VAR_1->view);
}
