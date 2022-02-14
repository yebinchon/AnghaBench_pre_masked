
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int index; struct mxser_port* driver_data; } ;
struct TYPE_4__ {int lock; int count; } ;
struct mxser_port {TYPE_1__ port; int ioaddr; } ;
struct file {int dummy; } ;
struct TYPE_5__ {struct mxser_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*,struct tty_struct*,struct file*) ;
 int FUNC_4 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct mxser_port *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = VAR_4->index;
 if (VAR_9 == VAR_1)
  return 0;
 if (VAR_9 < 0 || VAR_9 > VAR_1)
  return -VAR_0;
 VAR_6 = &VAR_3[VAR_9 / VAR_2].ports[VAR_9 % VAR_2];
 if (!VAR_6->ioaddr)
  return -VAR_0;

 VAR_4->driver_data = VAR_6;
 FUNC_4(&VAR_6->port, VAR_4);



 FUNC_1(&VAR_6->port.lock, VAR_7);
 VAR_6->port.count++;
 FUNC_2(&VAR_6->port.lock, VAR_7);
 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(&VAR_6->port, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 return 0;
}
