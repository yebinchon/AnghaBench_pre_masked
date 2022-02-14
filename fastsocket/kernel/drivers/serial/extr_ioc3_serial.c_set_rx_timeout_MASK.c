
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_port {int ip_rx_timeout; int ip_baud; int ip_sscr; TYPE_1__* ip_serial_regs; } ;
struct TYPE_2__ {int srtr; int sscr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ioc3_port *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_3->ip_rx_timeout = VAR_4;
 VAR_5 = VAR_4 * VAR_3->ip_baud / 4000;
 if (VAR_5 == 0)
  VAR_5 = 1;

 if ((unsigned)VAR_5 > (unsigned)VAR_2)
  return 1;

 VAR_3->ip_sscr &= ~VAR_2;
 VAR_3->ip_sscr |= VAR_5;
 FUNC_0(VAR_3->ip_sscr, &VAR_3->ip_serial_regs->sscr);




 VAR_4 = VAR_4 * VAR_1 / 100;
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 FUNC_0(VAR_4, &VAR_3->ip_serial_regs->srtr);
 return 0;
}
