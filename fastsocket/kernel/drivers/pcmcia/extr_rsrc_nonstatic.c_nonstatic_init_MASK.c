
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
struct socket_data {TYPE_2__ io_db; TYPE_1__ mem_db; } ;
struct pcmcia_socket {void* resource_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket_data* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_2)
{
 struct socket_data *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct socket_data), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->mem_db.next = &VAR_3->mem_db;
 VAR_3->io_db.next = &VAR_3->io_db;

 VAR_2->resource_data = (void *) VAR_3;

 FUNC_1(VAR_2);

 return 0;
}
