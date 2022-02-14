
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_2 == -1)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_2(VAR_4, FUNC_0(VAR_1));
 FUNC_4(&VAR_1->lock, VAR_3);
}
