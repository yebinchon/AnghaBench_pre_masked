
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int lock; int ignore_status_mask; } ;
struct ktermios {unsigned int c_iflag; unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4, struct ktermios *VAR_5,
         struct ktermios *VAR_6)
{
 unsigned int VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, 0, 4000000);
 unsigned int VAR_8 = FUNC_3(VAR_4, VAR_7);
 unsigned int VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_0(&VAR_4->lock, VAR_11);

 VAR_9 = VAR_5->c_iflag;
 VAR_10 = VAR_5->c_cflag;

 VAR_4->ignore_status_mask = 0;
 if (VAR_9 & VAR_1)
  VAR_4->ignore_status_mask |= VAR_3;
 if ((VAR_10 & VAR_0) == 0)
  VAR_4->ignore_status_mask |= VAR_2;


 FUNC_4(VAR_4, VAR_10,
       (VAR_4->uartclk / (16 * VAR_8)));

 FUNC_1(&VAR_4->lock, VAR_11);
}
