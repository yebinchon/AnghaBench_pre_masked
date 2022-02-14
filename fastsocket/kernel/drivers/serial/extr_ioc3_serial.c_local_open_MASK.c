
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ioc3_port {int ip_sscr; int ip_tx_lowat; TYPE_2__* ip_serial_regs; TYPE_1__* ip_uart_regs; int ip_flags; } ;
struct TYPE_4__ {int sscr; } ;
struct TYPE_3__ {int iu_lcr; int iu_fcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static inline int FUNC_4(struct ioc3_port *VAR_9)
{
 int VAR_10 = 0;

 VAR_9->ip_flags = VAR_0;


 if (VAR_9->ip_sscr & VAR_2) {
  FUNC_3(VAR_9->ip_sscr | VAR_3,
         &VAR_9->ip_serial_regs->sscr);
  while ((FUNC_1(&VAR_9->ip_serial_regs->sscr)
   & VAR_4) == 0) {
   VAR_10++;
   if (VAR_10 > VAR_1) {
    FUNC_0();
    return -1;
   }
  }
 }






 FUNC_2(VAR_7 | VAR_6,
        &VAR_9->ip_uart_regs->iu_fcr);

 FUNC_2(VAR_8, &VAR_9->ip_uart_regs->iu_lcr);





 VAR_9->ip_sscr &= ~VAR_5;
 VAR_9->ip_sscr |= 1;




 FUNC_3(VAR_9->ip_sscr, &VAR_9->ip_serial_regs->sscr);
 VAR_9->ip_tx_lowat = 1;
 return 0;
}
