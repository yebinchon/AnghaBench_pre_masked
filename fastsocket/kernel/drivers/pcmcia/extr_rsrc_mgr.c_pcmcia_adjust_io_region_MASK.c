
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* resource_ops; } ;
struct TYPE_2__ {int (* adjust_io_region ) (struct resource*,unsigned long,unsigned long,struct pcmcia_socket*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct resource*,unsigned long,unsigned long,struct pcmcia_socket*) ;

int FUNC_1(struct resource *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3, struct pcmcia_socket *VAR_4)
{
 if (VAR_4->resource_ops->adjust_io_region)
  return VAR_4->resource_ops->adjust_io_region(VAR_1, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
