
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 FUNC_1(&VAR_2->lock);

 VAR_4 = FUNC_0(VAR_2->membase + VAR_1);
 if (VAR_3 != 0)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_3(VAR_4, VAR_2->membase + VAR_1);

 FUNC_2(&VAR_2->lock);
}
