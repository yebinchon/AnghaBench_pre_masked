
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct port_hooks {int intr_rx_timer; int intr_rx_high; int intr_tx_explicit; int intr_delta_dcd; int intr_delta_cts; int intr_tx_mt; } ;
struct ioc3_port {int ip_notify; int ip_sscr; TYPE_2__* ip_serial_regs; TYPE_1__* ip_card; struct port_hooks* ip_hooks; } ;
struct TYPE_4__ {int sscr; } ;
struct TYPE_3__ {int ic_enable; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ioc3_port*,int) ;
 int FUNC_2 (struct ioc3_port*,int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct ioc3_port *VAR_6, int VAR_7, int VAR_8)
{
 struct port_hooks *VAR_9 = VAR_6->ip_hooks;
 uint32_t VAR_10, VAR_11;

 FUNC_0(!VAR_7);

 VAR_10 = VAR_11 = 0;

 if (VAR_7 & VAR_0)
  VAR_10 |= (VAR_9->intr_rx_timer | VAR_9->intr_rx_high);
 if (VAR_7 & VAR_3)
  VAR_10 |= VAR_9->intr_tx_explicit;
 if (VAR_7 & VAR_2) {
  VAR_10 |= VAR_9->intr_delta_dcd;
  VAR_11 |= VAR_5;
 }
 if (VAR_7 & VAR_1)
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





 if (VAR_6->ip_notify & (VAR_0 | VAR_2))
  VAR_6->ip_sscr |= VAR_4;
 else if (!(VAR_6->ip_card->ic_enable & VAR_9->intr_tx_mt))
  VAR_6->ip_sscr &= ~VAR_4;

 FUNC_3(VAR_6->ip_sscr, &VAR_6->ip_serial_regs->sscr);
 return 0;
}
