
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct moxa_port* driver_data; } ;
struct TYPE_2__ {int open_wait; scalar_t__ count; } ;
struct moxa_port {TYPE_1__ port; } ;


 int FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct moxa_port *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = VAR_1->driver_data;
 if (VAR_2 == ((void*)0)) {
  FUNC_2(&VAR_0);
  return;
 }
 VAR_2->port.count = 0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0);

 FUNC_3(&VAR_2->port.open_wait);
}
