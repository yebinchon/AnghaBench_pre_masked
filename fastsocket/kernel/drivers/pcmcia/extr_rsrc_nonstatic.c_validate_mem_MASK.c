
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {int num; int base; struct resource_map* next; } ;
struct socket_data {struct resource_map mem_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_1, unsigned int VAR_2)
{
 struct resource_map *VAR_3, VAR_4;
 struct socket_data *VAR_5 = VAR_1->resource_data;
 unsigned long VAR_6 = 0;

 for (VAR_3 = VAR_5->mem_db.next; VAR_3 != &VAR_5->mem_db; VAR_3 = VAR_4.next) {
  VAR_4 = *VAR_3;
  VAR_6 += FUNC_0(VAR_4.base, VAR_4.num, VAR_1);
 }
 if (VAR_6 > 0)
  return 0;
 return -VAR_0;
}
