
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int hw_stopped; int stopped; struct gs_port* driver_data; } ;
struct TYPE_3__ {int flags; } ;
struct gs_port {int xmit_head; int xmit_cnt; TYPE_2__* rd; TYPE_1__ port; int port_write_mutex; scalar_t__ xmit_buf; } ;
struct TYPE_4__ {int (* enable_tx_interrupts ) (struct gs_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (scalar_t__,unsigned char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gs_port*) ;

int FUNC_7(struct tty_struct * VAR_4,
                    const unsigned char *VAR_5, int VAR_6)
{
 struct gs_port *VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10;

 FUNC_0 ();

 VAR_7 = VAR_4->driver_data;

 if (!VAR_7) return 0;

 if (! (VAR_7->port.flags & VAR_0))
  return 0;




 FUNC_4(& VAR_7->port_write_mutex);

 while (1) {

  VAR_8 = VAR_6;




  VAR_10 = VAR_3 - VAR_7->xmit_head;
  if (VAR_10 < VAR_8) VAR_8 = VAR_10;




  VAR_10 = VAR_3 - 1 - VAR_7->xmit_cnt;
  if (VAR_10 < VAR_8) VAR_8 = VAR_10;


  if (VAR_8 <= 0) break;

  FUNC_3 (VAR_7->xmit_buf + VAR_7->xmit_head, VAR_5, VAR_8);

  VAR_7 -> xmit_cnt += VAR_8;
  VAR_7 -> xmit_head = (VAR_7->xmit_head + VAR_8) & (VAR_3 -1);
  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
  VAR_9 += VAR_8;
 }
 FUNC_5(& VAR_7->port_write_mutex);

 FUNC_2 (VAR_1, "write: interrupts are %s\n",
             (VAR_7->port.flags & VAR_2)?"enabled": "disabled");

 if (VAR_7->xmit_cnt &&
     !VAR_4->stopped &&
     !VAR_4->hw_stopped &&
     !(VAR_7->port.flags & VAR_2)) {
  VAR_7->port.flags |= VAR_2;
  VAR_7->rd->enable_tx_interrupts (VAR_7);
 }
 FUNC_1 ();
 return VAR_9;
}
