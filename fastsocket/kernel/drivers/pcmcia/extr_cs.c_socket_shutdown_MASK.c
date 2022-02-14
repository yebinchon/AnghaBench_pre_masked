
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Config; scalar_t__ AssignedIRQ; } ;
struct pcmcia_socket {int state; int dev; TYPE_2__* ops; scalar_t__ functions; scalar_t__ lock_count; TYPE_1__ irq; int socket; } ;
struct TYPE_4__ {int (* get_status ) (struct pcmcia_socket*,int*) ;int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_socket*) ;
 int FUNC_1 (struct pcmcia_socket*,int,char*) ;
 int FUNC_2 (struct pcmcia_socket*) ;
 int VAR_4 ;
 int FUNC_3 (struct pcmcia_socket*) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (struct pcmcia_socket*) ;
 int FUNC_8 (struct pcmcia_socket*,int *) ;
 int FUNC_9 (struct pcmcia_socket*,int*) ;

__attribute__((used)) static void FUNC_10(struct pcmcia_socket *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_6, 4, "shutdown\n");

 FUNC_6(VAR_6);
 VAR_6->state &= VAR_1 | VAR_2;
 FUNC_5(VAR_5 * 10);
 VAR_6->state &= VAR_1;


 VAR_6->socket = VAR_4;
 VAR_6->ops->init(VAR_6);
 VAR_6->ops->set_socket(VAR_6, &VAR_6->socket);
 VAR_6->irq.AssignedIRQ = VAR_6->irq.Config = 0;
 VAR_6->lock_count = 0;
 FUNC_3(VAR_6);



 VAR_6->functions = 0;


 FUNC_5(100);

 VAR_6->ops->get_status(VAR_6, &VAR_7);
 if (VAR_7 & VAR_3) {
  FUNC_4(VAR_0, &VAR_6->dev,
      "*** DANGER *** unable to remove socket power\n");
 }

 FUNC_2(VAR_6);
}
