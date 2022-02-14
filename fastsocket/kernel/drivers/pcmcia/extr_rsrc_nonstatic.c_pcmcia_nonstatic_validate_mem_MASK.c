
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_data {unsigned int rsrc_mem_probe; } ;
struct pcmcia_socket {int features; int state; struct socket_data* resource_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct pcmcia_socket*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_6)
{
 struct socket_data *VAR_7 = VAR_6->resource_data;
 unsigned int VAR_8 = VAR_1;
 int VAR_9 = 0;

 if (!VAR_4)
  return 0;

 FUNC_0(&VAR_5);

 if (VAR_6->features & VAR_3)
  VAR_8 = VAR_0;

 if (VAR_8 & ~VAR_7->rsrc_mem_probe) {
  if (VAR_6->state & VAR_2)
   VAR_9 = FUNC_2(VAR_6, VAR_8);
  if (!VAR_9)
   VAR_7->rsrc_mem_probe |= VAR_8;
 }

 FUNC_1(&VAR_5);

 return VAR_9;
}
