
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_client {struct agp_client* prev; struct agp_client* next; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {int num_clients; struct agp_client* clients; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct agp_client *VAR_1)
{
 struct agp_client *VAR_2;

 VAR_2 = VAR_0.current_controller->clients;
 VAR_1->next = VAR_2;

 if (VAR_2 != ((void*)0))
  VAR_2->prev = VAR_1;

 VAR_0.current_controller->clients = VAR_1;
 VAR_0.current_controller->num_clients++;
}
