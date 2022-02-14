
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ioc4_port {int ip_notify; int ip_sscr; int ip_ienb; TYPE_1__* ip_serial_regs; struct hooks* ip_hooks; } ;
struct hooks {int intr_rx_timer; int intr_rx_high; int intr_tx_explicit; int intr_delta_dcd; int intr_delta_cts; int intr_tx_mt; } ;
struct TYPE_2__ {int sscr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ioc4_port*,int) ;
 int FUNC_2 (struct ioc4_port*,int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct ioc4_port *VAR_6, int VAR_7, int VAR_8)
{
 struct hooks *VAR_9 = VAR_6->ip_hooks;
 uint32_t VAR_10, VAR_11;

 FUNC_0(!VAR_7);

 VAR_10 = VAR_11 = 0;

 if (VAR_7 & VAR_2)
  VAR_10 |= (VAR_9->intr_rx_timer | VAR_9->intr_rx_high);
 if (VAR_7 & VAR_5)
  VAR_10 |= VAR_9->intr_tx_explicit;
 if (VAR_7 & VAR_4) {
  VAR_10 |= VAR_9->intr_delta_dcd;
  VAR_11 |= VAR_1;
 }
 if (VAR_7 & VAR_3)
  VAR_10 |= VAR_9->intr_delta_cts;

 if (VAR_8) {
  FUNC_2(VAR_6, VAR_10);
  VAR_6->ip_notify |= VAR_7;
  VAR_6->ip_sscr |= VAR_11;
 } else {
  FUNC_1(VAR_6, VAR_10);
  VAR_6->ip_notify &= ~VAR_7;
  VAR_6->ip_sscr &= ~VAR_11;
 }





 if (VAR_6->ip_notify & (VAR_2 | VAR_4))
  VAR_6->ip_sscr |= VAR_0;
 else if (!(VAR_6->ip_ienb & VAR_9->intr_tx_mt))
  VAR_6->ip_sscr &= ~VAR_0;

 FUNC_3(VAR_6->ip_sscr, &VAR_6->ip_serial_regs->sscr);
 return 0;
}
