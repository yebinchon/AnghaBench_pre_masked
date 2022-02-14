
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ irq_mask; int pci_irq; } ;
struct yenta_socket {int cb_irq; TYPE_1__ socket; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct yenta_socket*,int ) ;

__attribute__((used)) static void FUNC_2(struct yenta_socket *VAR_2, u32 VAR_3)
{
 VAR_2->socket.pci_irq = VAR_2->cb_irq;
 if (VAR_1)
  VAR_2->socket.irq_mask = FUNC_1(VAR_2, VAR_3);
 else
  VAR_2->socket.irq_mask = 0;

 FUNC_0(VAR_0, &VAR_2->dev->dev,
     "ISA IRQ mask 0x%04x, PCI irq %d\n",
     VAR_2->socket.irq_mask, VAR_2->cb_irq);
}
