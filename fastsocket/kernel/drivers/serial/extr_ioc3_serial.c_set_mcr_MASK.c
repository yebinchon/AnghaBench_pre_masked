
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct uart_port {int dummy; } ;
struct ioc3_port {int ip_sscr; TYPE_2__* ip_serial_regs; TYPE_1__* ip_uart_regs; } ;
struct TYPE_4__ {int sscr; int shadow; } ;
struct TYPE_3__ {int iu_mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ioc3_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static inline int FUNC_4(struct uart_port *VAR_4,
     int VAR_5, int VAR_6)
{
 struct ioc3_port *VAR_7 = FUNC_0(VAR_4);
 uint32_t VAR_8;
 int VAR_9 = 0;
 char VAR_10;

 if (!VAR_7)
  return -1;


 if (VAR_7->ip_sscr & VAR_1) {
  FUNC_3(VAR_7->ip_sscr | VAR_2,
         &VAR_7->ip_serial_regs->sscr);
  while ((FUNC_1(&VAR_7->ip_serial_regs->sscr)
   & VAR_3) == 0) {
   VAR_9++;
   if (VAR_9 > VAR_0)
    return -1;
  }
 }
 VAR_8 = FUNC_1(&VAR_7->ip_serial_regs->shadow);
 VAR_10 = (VAR_8 & 0xff000000) >> 24;


 VAR_10 |= VAR_5;
 VAR_8 |= VAR_6;
 FUNC_2(VAR_10, &VAR_7->ip_uart_regs->iu_mcr);
 FUNC_3(VAR_8, &VAR_7->ip_serial_regs->shadow);


 if (VAR_7->ip_sscr & VAR_1) {
  FUNC_3(VAR_7->ip_sscr, &VAR_7->ip_serial_regs->sscr);
 }
 return 0;
}
