
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; } ;
struct tty3270 {int cy; TYPE_2__* screen; TYPE_1__ view; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 (struct tty3270*,int) ;
 int FUNC_1 (struct tty3270*,int) ;
 int FUNC_2 (struct tty3270*) ;

__attribute__((used)) static void
FUNC_3(struct tty3270 *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0) {
  FUNC_1(VAR_0, 0);
  for (VAR_2 = VAR_0->cy + 1; VAR_2 < VAR_0->view.rows - 2; VAR_2++) {
   VAR_0->screen[VAR_2].len = 0;
   FUNC_0(VAR_0, VAR_2);
  }
 } else if (VAR_1 == 1) {
  for (VAR_2 = 0; VAR_2 < VAR_0->cy; VAR_2++) {
   VAR_0->screen[VAR_2].len = 0;
   FUNC_0(VAR_0, VAR_2);
  }
  FUNC_1(VAR_0, 1);
 } else if (VAR_1 == 2) {
  for (VAR_2 = 0; VAR_2 < VAR_0->view.rows - 2; VAR_2++) {
   VAR_0->screen[VAR_2].len = 0;
   FUNC_0(VAR_0, VAR_2);
  }
 }
 FUNC_2(VAR_0);
}
