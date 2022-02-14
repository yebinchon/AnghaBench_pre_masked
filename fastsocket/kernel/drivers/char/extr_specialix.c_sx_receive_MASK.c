
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {struct tty_struct* tty; } ;
struct specialix_port {int * hits; TYPE_1__ port; } ;
struct specialix_board {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct specialix_port* FUNC_3 (struct specialix_board*,char*) ;
 unsigned char FUNC_4 (struct specialix_board*,int ) ;
 int FUNC_5 (struct tty_struct*,unsigned char) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct tty_struct*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_8(struct specialix_board *VAR_4)
{
 struct specialix_port *VAR_5;
 struct tty_struct *VAR_6;
 unsigned char VAR_7;

 FUNC_1();

 VAR_5 = FUNC_3(VAR_4, "Receive");
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_2, "Hmm, couldn't find port.\n");
  FUNC_2();
  return;
 }
 VAR_6 = VAR_5->port.tty;

 VAR_7 = FUNC_4(VAR_4, VAR_0);
 FUNC_0(VAR_2, "port: %p: count: %d\n", VAR_5, VAR_7);
 VAR_5->hits[VAR_7 > 8 ? 9 : VAR_7]++;

 FUNC_5(VAR_6, VAR_7);

 while (VAR_7--)
  FUNC_7(VAR_6, FUNC_4(VAR_4, VAR_1), VAR_3);
 FUNC_6(VAR_6);
 FUNC_2();
}
