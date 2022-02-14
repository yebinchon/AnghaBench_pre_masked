
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; int resume_status; int socket; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_socket ) (struct pcmcia_socket*,int *) ;int (* init ) (struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int ) ;
 int FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (struct pcmcia_socket*,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_3)
{
 VAR_3->socket = VAR_1;
 VAR_3->ops->init(VAR_3);
 VAR_3->ops->set_socket(VAR_3, &VAR_3->socket);
 if (VAR_3->state & VAR_0)
  VAR_3->resume_status = FUNC_0(VAR_3, VAR_2);
 return 0;
}
