
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 long VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 long FUNC_2 (char) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1, char VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 10000;

 FUNC_0(&VAR_1->lock, VAR_3);

 while (VAR_4-- > 0) {
  long VAR_5 = FUNC_2(VAR_2);
  if (VAR_5 == VAR_0)
   break;
  FUNC_3(1);
 }

 FUNC_1(&VAR_1->lock, VAR_3);
}
