
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; struct resource_map mem_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int FUNC_0 (struct resource_map*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pcmcia_socket *VAR_1)
{
 struct socket_data *VAR_2 = VAR_1->resource_data;
 struct resource_map *VAR_3, *VAR_4;

 FUNC_1(&VAR_0);
 for (VAR_3 = VAR_2->mem_db.next; VAR_3 != &VAR_2->mem_db; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
 }
 for (VAR_3 = VAR_2->io_db.next; VAR_3 != &VAR_2->io_db; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
 }
 FUNC_2(&VAR_0);
}
