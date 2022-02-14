
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int port_num; int port_lock; int port_write_buf; scalar_t__ port_usb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,struct tty_struct*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0)
{
 struct gs_port *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_2(&VAR_1->port_lock, VAR_2);
 if (VAR_1->port_usb)
  VAR_3 = FUNC_0(&VAR_1->port_write_buf);
 FUNC_3(&VAR_1->port_lock, VAR_2);

 FUNC_1("gs_write_room: (%d,%p) room=%d\n",
  VAR_1->port_num, VAR_0, VAR_3);

 return VAR_3;
}
