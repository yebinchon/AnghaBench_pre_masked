
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* resource_ops; } ;
struct TYPE_2__ {struct resource* (* find_io ) (unsigned long,int,unsigned long,struct pcmcia_socket*) ;} ;


 struct resource* FUNC_0 (unsigned long,int,unsigned long,struct pcmcia_socket*) ;

struct resource *FUNC_1(unsigned long VAR_0, int VAR_1,
     unsigned long VAR_2, struct pcmcia_socket *VAR_3)
{
 if (VAR_3->resource_ops->find_io)
  return VAR_3->resource_ops->find_io(VAR_0, VAR_1, VAR_2, VAR_3);
 return ((void*)0);
}
