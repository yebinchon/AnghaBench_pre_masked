
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct pcmcia_socket {struct bcm63xx_pcmcia_socket* driver_data; } ;
struct pccard_mem_map {int flags; scalar_t__ card_start; scalar_t__ static_start; } ;
struct bcm63xx_pcmcia_socket {struct resource* common_res; struct resource* attr_res; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_socket *VAR_1,
          struct pccard_mem_map *VAR_2)
{
 struct bcm63xx_pcmcia_socket *VAR_3;
 struct resource *VAR_4;

 VAR_3 = VAR_1->driver_data;
 if (VAR_2->flags & VAR_0)
  VAR_4 = VAR_3->attr_res;
 else
  VAR_4 = VAR_3->common_res;

 VAR_2->static_start = VAR_4->start + VAR_2->card_start;
 return 0;
}
