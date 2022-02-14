
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * driver_data; } ;
struct tty3270 {int view; TYPE_1__* kbd; struct tty_struct* tty; } ;
struct raw3270_view {int dummy; } ;
struct TYPE_2__ {int * tty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void
FUNC_2(struct raw3270_view *VAR_0)
{
 struct tty3270 *VAR_1;
 struct tty_struct *VAR_2;

 VAR_1 = (struct tty3270 *) VAR_0;
 VAR_2 = VAR_1->tty;
 if (VAR_2) {
  VAR_2->driver_data = ((void*)0);
  VAR_1->tty = VAR_1->kbd->tty = ((void*)0);
  FUNC_1(VAR_2);
  FUNC_0(&VAR_1->view);
 }
}
