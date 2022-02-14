
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int state; TYPE_1__* ops; int socket; } ;
struct TYPE_2__ {int (* suspend ) (struct pcmcia_socket*) ;int (* set_socket ) (struct pcmcia_socket*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*,int ,int ) ;
 int FUNC_1 (struct pcmcia_socket*,int *) ;
 int FUNC_2 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_5)
{
 if (VAR_5->state & VAR_3)
  return -VAR_2;

 FUNC_0(VAR_5, VAR_0, VAR_1);
 VAR_5->socket = VAR_4;
 VAR_5->ops->set_socket(VAR_5, &VAR_5->socket);
 if (VAR_5->ops->suspend)
  VAR_5->ops->suspend(VAR_5);
 VAR_5->state |= VAR_3;

 return 0;
}
