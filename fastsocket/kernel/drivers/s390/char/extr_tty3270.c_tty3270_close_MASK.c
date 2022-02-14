
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int count; int * driver_data; } ;
struct tty3270 {int view; TYPE_1__* kbd; int tty; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int * tty; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct tty3270 *VAR_2;

 if (VAR_0->count > 1)
  return;
 VAR_2 = (struct tty3270 *) VAR_0->driver_data;
 if (VAR_2) {
  VAR_0->driver_data = ((void*)0);
  VAR_2->tty = *(VAR_2->kbd->tty = ((void*)0));
  FUNC_0(&VAR_2->view);
 }
}
