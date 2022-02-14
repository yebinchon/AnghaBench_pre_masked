
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* io_irq; void* csc_irq; } ;
typedef TYPE_1__ vrc4171_socket_t ;
struct pcmcia_socket {int features; int map_size; unsigned int sock; int pci_irq; scalar_t__ irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_4)
{
 vrc4171_socket_t *VAR_5;
 unsigned int VAR_6;

 VAR_4->features |= VAR_1 | VAR_0;
 VAR_4->irq_mask = 0;
 VAR_4->map_size = 0x1000;
 VAR_4->pci_irq = VAR_2;

 VAR_6 = VAR_4->sock;
 VAR_5 = &VAR_3[VAR_6];
 VAR_5->csc_irq = FUNC_0();
 VAR_5->io_irq = FUNC_0();

 return 0;
}
