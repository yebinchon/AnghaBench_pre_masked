
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long rx; } ;
struct uart_port {TYPE_1__ icount; } ;
struct tty_struct {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (unsigned long,int ,unsigned long*) ;
 int FUNC_2 (struct tty_struct*,scalar_t__*,unsigned long) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_port*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_6, struct tty_struct *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 10000;

 while (VAR_9-- > 0) {
  unsigned long VAR_10 = FUNC_0(VAR_4);
  unsigned long VAR_11, VAR_12;
  long VAR_13 = FUNC_1(VAR_10, VAR_3, &VAR_11);

  if (VAR_13 != VAR_2) {
   VAR_11 = 0;

   if (VAR_13 == VAR_0) {
    if (FUNC_3(VAR_6))
     continue;
    VAR_8 = 1;
    *VAR_4 = 0;
    VAR_11 = 1;
   } else if (VAR_13 == VAR_1) {
    VAR_5 = 1;
    FUNC_4(VAR_6, 0);
    continue;
   } else {

    break;
   }
  }

  if (VAR_5) {
   VAR_5 = 0;
   FUNC_4(VAR_6, 1);
  }

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   FUNC_5(VAR_6, VAR_4[VAR_12]);

  if (VAR_7 == ((void*)0))
   continue;

  VAR_6->icount.rx += VAR_11;

  FUNC_2(VAR_7, VAR_4, VAR_11);
 }

 return VAR_8;
}
