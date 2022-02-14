
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct moxa_port* driver_data; } ;
struct TYPE_2__ {int flags; } ;
struct moxa_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct moxa_port*,int) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_1)
{
 struct moxa_port *VAR_2 = VAR_1->driver_data;
 FUNC_1(VAR_1);
 FUNC_0(VAR_2, 2);
 VAR_2->port.flags &= ~VAR_0;
 VAR_1->driver_data = ((void*)0);
 FUNC_2(&VAR_2->port, ((void*)0));
}
