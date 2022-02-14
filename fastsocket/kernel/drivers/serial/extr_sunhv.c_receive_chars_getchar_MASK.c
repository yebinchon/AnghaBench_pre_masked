
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx; } ;
struct uart_port {TYPE_1__ icount; } ;
struct tty_struct {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (long*) ;
 int FUNC_1 (struct tty_struct*,long,int ) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int) ;
 scalar_t__ FUNC_4 (struct uart_port*,long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_5, struct tty_struct *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 10000;

 while (VAR_8-- > 0) {
  long VAR_9;
  long VAR_10 = FUNC_0(&VAR_9);

  if (VAR_9 == VAR_2)
   break;

  if (VAR_10 == VAR_0) {
   if (FUNC_2(VAR_5))
    continue;
   VAR_7 = 1;
   VAR_10 = 0;
  }

  if (VAR_10 == VAR_1) {
   VAR_4 = 1;
   FUNC_3(VAR_5, 0);
  } else if (VAR_4) {
   VAR_4 = 0;
   FUNC_3(VAR_5, 1);
  }

  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_5, VAR_10);
   continue;
  }

  VAR_5->icount.rx++;

  if (FUNC_4(VAR_5, VAR_10))
   continue;

  FUNC_1(VAR_6, VAR_10, VAR_3);
 }

 return VAR_7;
}
