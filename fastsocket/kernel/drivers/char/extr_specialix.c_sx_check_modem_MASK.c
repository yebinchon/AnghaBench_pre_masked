
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_2__ {int open_wait; struct tty_struct* tty; } ;
struct specialix_port {scalar_t__ xmit_cnt; scalar_t__ wakeup_chars; int IER; TYPE_1__ port; } ;
struct specialix_board {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 struct specialix_port* FUNC_1 (struct specialix_board*,char*) ;
 int FUNC_2 (struct specialix_board*,int ) ;
 int FUNC_3 (struct specialix_board*,int ,int ) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct specialix_board *VAR_11)
{
 struct specialix_port *VAR_12;
 struct tty_struct *VAR_13;
 unsigned char VAR_14;
 int VAR_15;

 FUNC_0(VAR_10, "Modem intr. ");
 VAR_12 = FUNC_1(VAR_11, "Modem");
 if (VAR_12 == ((void*)0))
  return;

 VAR_13 = VAR_12->port.tty;

 VAR_14 = FUNC_2(VAR_11, VAR_1);

 if ((VAR_14 & VAR_4)) {
  FUNC_0(VAR_10, "CD just changed... ");
  VAR_15 = FUNC_2(VAR_11, VAR_2) & VAR_7;
  if (VAR_15) {
   FUNC_0(VAR_10, "Waking up guys in open.\n");
   FUNC_6(&VAR_12->port.open_wait);
  } else {
   FUNC_0(VAR_10, "Sending HUP.\n");
   FUNC_4(VAR_13);
  }
 }
 FUNC_3(VAR_11, VAR_1, 0);
}
