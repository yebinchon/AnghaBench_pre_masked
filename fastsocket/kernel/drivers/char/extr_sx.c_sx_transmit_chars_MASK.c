
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tty; } ;
struct TYPE_6__ {int xmit_cnt; int xmit_tail; int xmit_buf; int wakeup_chars; TYPE_2__ port; } ;
struct sx_port {int locks; TYPE_3__ gs; TYPE_1__* board; } ;
struct TYPE_4__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct sx_port*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (struct sx_port*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct sx_port*,int ) ;
 int FUNC_8 (struct sx_port*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct sx_port *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2();
 FUNC_6(VAR_1, "Port %p: transmit %d chars\n",
   VAR_6, VAR_6->gs.xmit_cnt);

 if (FUNC_9(VAR_2, &VAR_6->locks)) {
  return;
 }

 while (1) {
  VAR_7 = VAR_6->gs.xmit_cnt;

  FUNC_6(VAR_1, "Copying %d ", VAR_7);
  VAR_8 = FUNC_7(VAR_6, VAR_4);



  VAR_9 = (FUNC_7(VAR_6, VAR_5) - VAR_8 - 1) &
    0xff;


  if (VAR_7 > VAR_9)
   VAR_7 = VAR_9;
  FUNC_6(VAR_1, " %d(%d) ", VAR_7, VAR_9);


  if (VAR_7 > 0x100 - VAR_8)
   VAR_7 = 0x100 - VAR_8;

  FUNC_6(VAR_1, " %d(%d) ", VAR_7, 0x100 - VAR_8);


  if (VAR_7 > VAR_0 - VAR_6->gs.xmit_tail)
   VAR_7 = VAR_0 - VAR_6->gs.xmit_tail;

  FUNC_6(VAR_1, " %d(%ld) \n",
    VAR_7, VAR_0 - VAR_6->gs.xmit_tail);



  if (VAR_7 == 0)
   break;

  FUNC_4(VAR_6->board->base + FUNC_0(VAR_6, VAR_3) +
   VAR_8, VAR_6->gs.xmit_buf + VAR_6->gs.xmit_tail, VAR_7);


  FUNC_8(VAR_6, VAR_4, (VAR_8 + VAR_7) & 0xff);


  VAR_6->gs.xmit_tail = (VAR_6->gs.xmit_tail + VAR_7) &
    (VAR_0 - 1);




  VAR_6->gs.xmit_cnt -= VAR_7;
 }

 if (VAR_6->gs.xmit_cnt == 0) {
  FUNC_5(VAR_6);
 }

 if ((VAR_6->gs.xmit_cnt <= VAR_6->gs.wakeup_chars) && VAR_6->gs.port.tty) {
  FUNC_10(VAR_6->gs.port.tty);
  FUNC_6(VAR_1, "Waking up.... ldisc (%d)....\n",
    VAR_6->gs.wakeup_chars);
 }

 FUNC_1(VAR_2, &VAR_6->locks);
 FUNC_3();
}
