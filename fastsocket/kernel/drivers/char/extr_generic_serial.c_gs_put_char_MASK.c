
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct gs_port* driver_data; } ;
struct TYPE_2__ {int flags; } ;
struct gs_port {int xmit_cnt; unsigned char* xmit_buf; int xmit_head; int port_write_mutex; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct tty_struct * VAR_2, unsigned char VAR_3)
{
 struct gs_port *VAR_4;

 FUNC_0 ();

 VAR_4 = VAR_2->driver_data;

 if (!VAR_4) return 0;

 if (! (VAR_4->port.flags & VAR_0)) return 0;


 FUNC_2(& VAR_4->port_write_mutex);

 if (VAR_4->xmit_cnt >= VAR_1 - 1) {

  FUNC_3(&VAR_4->port_write_mutex);
  return 0;
 }

 VAR_4->xmit_buf[VAR_4->xmit_head++] = VAR_3;
 VAR_4->xmit_head &= VAR_1 - 1;
 VAR_4->xmit_cnt++;

 FUNC_3(&VAR_4->port_write_mutex);
 FUNC_1 ();
 return 1;
}
