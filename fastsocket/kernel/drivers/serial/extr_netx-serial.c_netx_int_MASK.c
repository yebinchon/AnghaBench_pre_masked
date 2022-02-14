
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct uart_port *VAR_10 = VAR_9;
 unsigned long VAR_11;
 unsigned char VAR_12;

 FUNC_3(&VAR_10->lock,VAR_11);

 VAR_12 = FUNC_2(VAR_10->membase + VAR_7) & VAR_1;
 while (VAR_12) {
  if (VAR_12 & VAR_3)
   FUNC_0(VAR_10);
  if (VAR_12 & VAR_4)
   FUNC_1(VAR_10);
  if (VAR_12 & VAR_2) {
   if (FUNC_2(VAR_10->membase + VAR_6) & VAR_0)
    FUNC_5(VAR_10, 1);
   else
    FUNC_5(VAR_10, 0);
  }
  FUNC_6(0, VAR_10->membase + VAR_7);
  VAR_12 = FUNC_2(VAR_10->membase + VAR_7) & VAR_1;
 }

 FUNC_4(&VAR_10->lock,VAR_11);
 return VAR_5;
}
