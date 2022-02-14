
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioc4_port {int ip_sscr; int ip_tx_lowat; TYPE_2__* ip_serial_regs; TYPE_1__* ip_uart_regs; int ip_flags; } ;
struct TYPE_4__ {int sscr; } ;
struct TYPE_3__ {int i4u_lcr; int i4u_fcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static inline int FUNC_3(struct ioc4_port *VAR_10)
{
 int VAR_11 = 0;

 VAR_10->ip_flags = VAR_5;


 if (VAR_10->ip_sscr & VAR_0) {
  FUNC_2(VAR_10->ip_sscr | VAR_1,
   &VAR_10->ip_serial_regs->sscr);
  while((FUNC_0(&VAR_10->ip_serial_regs-> sscr)
    & VAR_2) == 0) {
   VAR_11++;
   if (VAR_11 > VAR_4) {
    VAR_10->ip_flags = VAR_6;
    return -1;
   }
  }
 }






 FUNC_1(VAR_8 | VAR_7,
    &VAR_10->ip_uart_regs->i4u_fcr);

 FUNC_1(VAR_9, &VAR_10->ip_uart_regs->i4u_lcr);





 VAR_10->ip_sscr &= ~VAR_3;
 VAR_10->ip_sscr |= 1;




 FUNC_2(VAR_10->ip_sscr, &VAR_10->ip_serial_regs->sscr);
 VAR_10->ip_tx_lowat = 1;
 return 0;
}
