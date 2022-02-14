
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t AssignedIRQ; scalar_t__ Config; } ;
struct pcmcia_socket {TYPE_2__ irq; } ;
struct pcmcia_device {scalar_t__ _irq; TYPE_4__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_8__ {int Attributes; size_t AssignedIRQ; int Instance; } ;
typedef TYPE_3__ irq_req_t ;
struct TYPE_6__ {int Attributes; } ;
struct TYPE_9__ {int state; TYPE_1__ irq; } ;
typedef TYPE_4__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*,int ,char*) ;
 int FUNC_1 (size_t,int ) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_6, irq_req_t *VAR_7)
{
 struct pcmcia_socket *VAR_8 = VAR_6->socket;
 config_t *VAR_9= VAR_6->function_config;

 if (!VAR_6->_irq)
  return -VAR_3;
 VAR_6->_irq = 0;

 if (VAR_9->state & VAR_1)
  return -VAR_2;
 if (VAR_9->irq.Attributes != VAR_7->Attributes) {
  FUNC_0(VAR_8, 0, "IRQ attributes must match assigned ones\n");
  return -VAR_3;
 }
 if (VAR_8->irq.AssignedIRQ != VAR_7->AssignedIRQ) {
  FUNC_0(VAR_8, 0, "IRQ must match assigned one\n");
  return -VAR_3;
 }
 if (--VAR_8->irq.Config == 0) {
  VAR_9->state &= ~VAR_0;
  VAR_8->irq.AssignedIRQ = 0;
 }

 if (VAR_7->Attributes & VAR_4) {
  FUNC_1(VAR_7->AssignedIRQ, VAR_7->Instance);
 }





 return 0;
}
