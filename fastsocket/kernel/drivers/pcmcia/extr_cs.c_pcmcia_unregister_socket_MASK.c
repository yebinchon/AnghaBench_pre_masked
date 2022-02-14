
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int socket_released; int socket_list; scalar_t__ thread; int ops; } ;


 int FUNC_0 (struct pcmcia_socket*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct pcmcia_socket*) ;
 int FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct pcmcia_socket *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_1, 0, "pcmcia_unregister_socket(0x%p)\n", VAR_1->ops);

 if (VAR_1->thread)
  FUNC_2(VAR_1->thread);

 FUNC_4(VAR_1);


 FUNC_1(&VAR_0);
 FUNC_3(&VAR_1->socket_list);
 FUNC_6(&VAR_0);


 FUNC_5(VAR_1);
 FUNC_7(&VAR_1->socket_released);
}
