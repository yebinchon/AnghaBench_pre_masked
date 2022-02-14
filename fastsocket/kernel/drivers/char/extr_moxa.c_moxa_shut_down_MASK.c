
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct moxa_port* driver_data; } ;
struct TYPE_2__ {int flags; } ;
struct moxa_port {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct moxa_port*) ;
 int FUNC_2 (struct moxa_port*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 struct moxa_port *VAR_3 = VAR_2->driver_data;

 if (!(VAR_3->port.flags & VAR_0))
  return;

 FUNC_1(VAR_3);




 if (FUNC_0(VAR_2))
  FUNC_2(VAR_3, 0, 0);

 FUNC_3(&VAR_1);
 VAR_3->port.flags &= ~VAR_0;
 FUNC_4(&VAR_1);
}
