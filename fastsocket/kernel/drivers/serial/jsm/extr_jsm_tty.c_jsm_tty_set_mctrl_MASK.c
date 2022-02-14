
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct jsm_channel {TYPE_2__* ch_bd; int ch_mostat; } ;
struct TYPE_4__ {int pci_dev; TYPE_1__* bd_ops; } ;
struct TYPE_3__ {int (* assert_modem_signals ) (struct jsm_channel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,char*) ;
 int FUNC_1 (struct jsm_channel*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_6, unsigned int VAR_7)
{
 struct jsm_channel *VAR_8 = (struct jsm_channel *)VAR_6;

 FUNC_0(VAR_1, VAR_0, &VAR_8->ch_bd->pci_dev, "start\n");

 if (VAR_7 & VAR_3)
  VAR_8->ch_mostat |= VAR_5;
 else
  VAR_8->ch_mostat &= ~VAR_5;

 if (VAR_7 & VAR_2)
  VAR_8->ch_mostat |= VAR_4;
 else
  VAR_8->ch_mostat &= ~VAR_4;

 VAR_8->ch_bd->bd_ops->assert_modem_signals(VAR_8);

 FUNC_0(VAR_1, VAR_0, &VAR_8->ch_bd->pci_dev, "finish\n");
 FUNC_2(10);
}
