
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct tty_struct {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct tty_struct* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct uart_port *VAR_3 = VAR_2;
 struct tty_struct *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->lock, VAR_5);

 if (VAR_4)
  FUNC_4(VAR_4);

 return VAR_0;
}
