
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tty_struct {int dummy; } ;
struct moxa_port {int DCDState; int port; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 struct tty_struct* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct moxa_port *VAR_0, u8 VAR_1)
{
 struct tty_struct *VAR_2;
 VAR_1 = !!VAR_1;

 if (VAR_1 != VAR_0->DCDState) {
  VAR_2 = FUNC_3(&VAR_0->port);
  if (VAR_2 && FUNC_0(VAR_2) && !VAR_1)
   FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
 VAR_0->DCDState = VAR_1;
}
