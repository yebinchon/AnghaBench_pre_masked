
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gserial {int (* disconnect ) (struct gserial*) ;} ;
struct gs_port {int open_count; int openclose; int port_lock; int close_wait; int port_num; int * port_tty; int port_write_buf; struct gserial* port_usb; int drain_wait; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gs_port*) ;
 int FUNC_5 (char*,int ,struct tty_struct*,struct file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct gserial*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct gs_port *VAR_4 = VAR_2->driver_data;
 struct gserial *VAR_5;

 FUNC_6(&VAR_4->port_lock);

 if (VAR_4->open_count != 1) {
  if (VAR_4->open_count == 0)
   FUNC_0(1);
  else
   --VAR_4->open_count;
  goto exit;
 }

 FUNC_5("gs_close: ttyGS%d (%p,%p) ...\n", VAR_4->port_num, VAR_2, VAR_3);




 VAR_4->openclose = 1;
 VAR_4->open_count = 0;

 VAR_5 = VAR_4->port_usb;
 if (VAR_5 && VAR_5->disconnect)
  VAR_5->disconnect(VAR_5);




 if (FUNC_2(&VAR_4->port_write_buf) > 0 && VAR_5) {
  FUNC_7(&VAR_4->port_lock);
  FUNC_9(VAR_4->drain_wait,
     FUNC_4(VAR_4),
     VAR_0 * VAR_1);
  FUNC_6(&VAR_4->port_lock);
  VAR_5 = VAR_4->port_usb;
 }





 if (VAR_5 == ((void*)0))
  FUNC_3(&VAR_4->port_write_buf);
 else
  FUNC_1(&VAR_4->port_write_buf);

 VAR_2->driver_data = ((void*)0);
 VAR_4->port_tty = ((void*)0);

 VAR_4->openclose = 0;

 FUNC_5("gs_close: ttyGS%d (%p,%p) done!\n",
   VAR_4->port_num, VAR_2, VAR_3);

 FUNC_10(&VAR_4->close_wait);
exit:
 FUNC_7(&VAR_4->port_lock);
}
