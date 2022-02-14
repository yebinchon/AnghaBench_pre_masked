
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct moxa_board_conf {unsigned int numPorts; TYPE_2__* ports; int * basemem; scalar_t__ ready; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct moxa_board_conf *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 FUNC_3(&VAR_2);
 FUNC_5(&VAR_1);
 VAR_3->ready = 0;
 FUNC_6(&VAR_1);


 for (VAR_4 = 0; VAR_4 < VAR_3->numPorts; VAR_4++)
  if (VAR_3->ports[VAR_4].port.flags & VAR_0) {
   struct tty_struct *VAR_6 = FUNC_9(
      &VAR_3->ports[VAR_4].port);
   if (VAR_6) {
    FUNC_7(VAR_6);
    FUNC_8(VAR_6);
   }
  }
 while (1) {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3->numPorts; VAR_4++)
   if (VAR_3->ports[VAR_4].port.flags & VAR_0)
    VAR_5++;
  FUNC_4(&VAR_2);
  if (!VAR_5)
   break;
  FUNC_2(50);
  FUNC_3(&VAR_2);
 }

 FUNC_0(VAR_3->basemem);
 VAR_3->basemem = ((void*)0);
 FUNC_1(VAR_3->ports);
}
