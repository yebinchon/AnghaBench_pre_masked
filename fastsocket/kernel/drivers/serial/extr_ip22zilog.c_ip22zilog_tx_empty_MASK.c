
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_2)
{
 unsigned long VAR_3;
 unsigned char VAR_4;
 unsigned int VAR_5;

 FUNC_1(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_2);

 FUNC_2(&VAR_2->lock, VAR_3);

 if (VAR_4 & VAR_1)
  VAR_5 = VAR_0;
 else
  VAR_5 = 0;

 return VAR_5;
}
