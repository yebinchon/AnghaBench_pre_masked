
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty3270_line {int dummy; } ;
struct tty3270_cell {int dummy; } ;
struct TYPE_3__ {int rows; int cols; } ;
struct tty3270 {TYPE_2__* screen; TYPE_1__ view; } ;
struct TYPE_4__ {struct TYPE_4__* cells; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_2(struct tty3270 *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_3 = sizeof(struct tty3270_line) * (VAR_2->view.rows - 2);
 VAR_2->screen = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->screen)
  goto out_err;
 for (VAR_4 = 0; VAR_4 < VAR_2->view.rows - 2; VAR_4++) {
  VAR_3 = sizeof(struct tty3270_cell) * VAR_2->view.cols;
  VAR_2->screen[VAR_4].cells = FUNC_1(VAR_3, VAR_1);
  if (!VAR_2->screen[VAR_4].cells)
   goto out_screen;
 }
 return 0;
out_screen:
 while (VAR_4--)
  FUNC_0(VAR_2->screen[VAR_4].cells);
 FUNC_0(VAR_2->screen);
out_err:
 return -VAR_0;
}
