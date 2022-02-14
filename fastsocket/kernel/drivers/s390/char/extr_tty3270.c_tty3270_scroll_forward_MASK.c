
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rows; int lock; } ;
struct tty3270 {int nr_up; TYPE_2__ view; } ;
struct kbd_data {TYPE_1__* tty; } ;
struct TYPE_3__ {struct tty3270* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty3270*) ;
 int FUNC_3 (struct tty3270*,int) ;
 int FUNC_4 (struct tty3270*) ;

__attribute__((used)) static void
FUNC_5(struct kbd_data *VAR_0)
{
 struct tty3270 *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->tty->driver_data;
 FUNC_0(&VAR_1->view.lock);
 VAR_2 = VAR_1->nr_up - VAR_1->view.rows + 2;
 if (VAR_2 < 0)
  VAR_2 = 0;
 if (VAR_2 != VAR_1->nr_up) {
  VAR_1->nr_up = VAR_2;
  FUNC_2(VAR_1);
  FUNC_4(VAR_1);
  FUNC_3(VAR_1, 1);
 }
 FUNC_1(&VAR_1->view.lock);
}
