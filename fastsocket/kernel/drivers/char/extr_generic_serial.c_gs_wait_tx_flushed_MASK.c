
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tty; } ;
struct gs_port {int baud; TYPE_1__ port; int xmit_buf; int xmit_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9 (void * VAR_8, unsigned long VAR_9)
{
 struct gs_port *VAR_10 = VAR_8;
 unsigned long VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 int VAR_15;

 FUNC_0();

 FUNC_2 (VAR_2, "port=%p.\n", VAR_10);
 if (VAR_10) {
  FUNC_2 (VAR_2, "xmit_cnt=%x, xmit_buf=%p, tty=%p.\n",
  VAR_10->xmit_cnt, VAR_10->xmit_buf, VAR_10->port.tty);
 }

 if (!VAR_10 || VAR_10->xmit_cnt < 0 || !VAR_10->xmit_buf) {
  FUNC_2 (VAR_2, "ERROR: !port, !port->xmit_buf or prot->xmit_cnt < 0.\n");
  FUNC_1();
  return -VAR_1;
 }

 VAR_15 = FUNC_3(VAR_10->port.tty);

 if(VAR_15 <= 0) {
  FUNC_2 (VAR_2, "nothing to wait for.\n");
  FUNC_1();
  return VAR_14;
 }

 if (VAR_9 == 0) VAR_9 = VAR_4;
 VAR_11 = VAR_7;
 if (VAR_9 != VAR_4)
  VAR_11 += VAR_10->baud?(2 * VAR_15 * 10 * VAR_3 / VAR_10->baud):0;
 VAR_11 += VAR_9;

 FUNC_2 (VAR_2, "now=%lx, end=%lx (%ld).\n",
      VAR_7, VAR_11, VAR_11-VAR_7);



 while ((VAR_13 = FUNC_3 (VAR_10->port.tty)) &&
         FUNC_8 (VAR_11, VAR_7)) {




  VAR_13 += 16;
  VAR_12 = VAR_10->baud?(1 + VAR_13 * 10 * VAR_3 / VAR_10->baud):0;

  if (VAR_12 <= 0) VAR_12 = 1;

  FUNC_2 (VAR_2, "Expect to finish in %d jiffies "
       "(%d chars).\n", VAR_12, VAR_13);

  FUNC_5(FUNC_4(VAR_12));
  if (FUNC_7 (VAR_6)) {
   FUNC_2 (VAR_2, "Signal pending. Bombing out: ");
   VAR_14 = -VAR_0;
   break;
  }
 }

 FUNC_2 (VAR_2, "charsleft = %d.\n", VAR_13);
 FUNC_6 (VAR_5);

 FUNC_1();
 return VAR_14;
}
