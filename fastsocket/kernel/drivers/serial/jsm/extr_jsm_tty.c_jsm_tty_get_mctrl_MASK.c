
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct jsm_channel {TYPE_1__* ch_bd; } ;
struct TYPE_2__ {int pci_dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jsm_channel*) ;
 int FUNC_1 (int ,int ,int *,char*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_3)
{
 int VAR_4;
 struct jsm_channel *VAR_5 = (struct jsm_channel *)VAR_3;

 FUNC_1(VAR_2, VAR_1, &VAR_5->ch_bd->pci_dev, "start\n");

 VAR_4 = FUNC_0(VAR_5);

 if (VAR_4 < 0)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_1, &VAR_5->ch_bd->pci_dev, "finish\n");

 return VAR_4;
}
