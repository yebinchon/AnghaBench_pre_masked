
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {unsigned long base; int num; struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; } ;
struct resource {int dummy; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*,unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct resource *VAR_2, unsigned long VAR_3,
          unsigned long VAR_4, struct pcmcia_socket *VAR_5)
{
 struct resource_map *VAR_6;
 struct socket_data *VAR_7 = VAR_5->resource_data;
 int VAR_8 = -VAR_0;

 FUNC_1(&VAR_1);
 for (VAR_6 = VAR_7->io_db.next; VAR_6 != &VAR_7->io_db; VAR_6 = VAR_6->next) {
  unsigned long VAR_9 = VAR_6->base;
  unsigned long VAR_10 = VAR_6->base + VAR_6->num - 1;

  if (VAR_9 > VAR_3 || VAR_4 > VAR_10)
   continue;

  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4 - VAR_3 + 1);
  break;
 }
 FUNC_2(&VAR_1);

 return VAR_8;
}
