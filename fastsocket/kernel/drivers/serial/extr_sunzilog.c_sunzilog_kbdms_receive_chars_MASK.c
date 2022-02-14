
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunzilog_port {int serio; scalar_t__ serio_open; } ;


 scalar_t__ FUNC_0 (struct uart_sunzilog_port*) ;
 scalar_t__ FUNC_1 (struct uart_sunzilog_port*) ;
 int FUNC_2 (int *,unsigned char,int ) ;
 int FUNC_3 (unsigned char,int) ;
 int FUNC_4 (struct uart_sunzilog_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_sunzilog_port *VAR_0,
      unsigned char VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0)) {





 } else if (FUNC_1(VAR_0)) {
  int VAR_3 = FUNC_3(VAR_1, VAR_2);

  switch (VAR_3) {
  case 2:
   FUNC_4(VAR_0);

  case 1:
   break;

  case 0:




   break;
  };
 }
}
