
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct sx_port* driver_data; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct sx_port {TYPE_2__ gs; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct sx_port *VAR_2 = VAR_1->driver_data;

 FUNC_0();




 VAR_2->gs.port.flags &= ~VAR_0;
 FUNC_1();
 return;
}
