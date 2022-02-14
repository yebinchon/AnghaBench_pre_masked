
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int index; struct a2232_port* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int count; int flags; struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct a2232_port {TYPE_2__ gs; } ;


 int VAR_0 ;
 int FUNC_0 (struct a2232_port*) ;
 struct a2232_port* VAR_1 ;
 int FUNC_1 (struct a2232_port*,struct file*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct * VAR_2, struct file * VAR_3)
{

 int VAR_4;
 int VAR_5;
 struct a2232_port *VAR_6;

 VAR_4 = VAR_2->index;
 VAR_6 = &VAR_1[VAR_4];

 VAR_2->driver_data = VAR_6;
 VAR_6->gs.port.tty = VAR_2;
 VAR_6->gs.port.count++;
 VAR_5 = FUNC_2(&VAR_6->gs);
 if (VAR_5) {
  VAR_6->gs.port.count--;
  return VAR_5;
 }
 VAR_6->gs.port.flags |= VAR_0;
 VAR_5 = FUNC_1(VAR_6, VAR_3);

 if (VAR_5) {
  VAR_6->gs.port.count--;
  return VAR_5;
 }

 FUNC_0(VAR_6);

 return 0;
}
