
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; } ;
struct tty3270 {TYPE_2__* screen; TYPE_1__ view; } ;
struct TYPE_4__ {struct TYPE_4__* cells; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(struct tty3270 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->view.rows - 2; VAR_1++)
  FUNC_0(VAR_0->screen[VAR_1].cells);
 FUNC_0(VAR_0->screen);
}
