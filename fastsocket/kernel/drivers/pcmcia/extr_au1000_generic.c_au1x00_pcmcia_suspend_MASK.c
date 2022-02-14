
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {int dummy; } ;
struct au1000_pcmcia_socket {TYPE_1__* ops; int nr; } ;
struct TYPE_2__ {int (* socket_suspend ) (struct au1000_pcmcia_socket*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct au1000_pcmcia_socket*) ;
 struct au1000_pcmcia_socket* FUNC_2 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_0)
{
 struct au1000_pcmcia_socket *VAR_1 = FUNC_2(VAR_0);

 FUNC_0("suspending socket %u\n", VAR_1->nr);

 VAR_1->ops->socket_suspend(VAR_1);

 return 0;
}
