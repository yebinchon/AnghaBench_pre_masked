
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct jsm_channel {TYPE_1__* ch_bd; int ch_flags; } ;
struct TYPE_2__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,char*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_3)
{
 struct jsm_channel *VAR_4 = (struct jsm_channel *)VAR_3;

 FUNC_0(VAR_2, VAR_1, &VAR_4->ch_bd->pci_dev, "start\n");

 VAR_4->ch_flags |= (VAR_0);

 FUNC_0(VAR_2, VAR_1, &VAR_4->ch_bd->pci_dev, "finish\n");
}
