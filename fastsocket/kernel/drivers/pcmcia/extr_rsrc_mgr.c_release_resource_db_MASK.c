
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_socket {TYPE_1__* resource_ops; } ;
struct TYPE_2__ {int (* exit ) (struct pcmcia_socket*) ;} ;


 int FUNC_0 (struct pcmcia_socket*) ;

void FUNC_1(struct pcmcia_socket *VAR_0)
{
 if (VAR_0->resource_ops->exit)
  VAR_0->resource_ops->exit(VAR_0);
}
