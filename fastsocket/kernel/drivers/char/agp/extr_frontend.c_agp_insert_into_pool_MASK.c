
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {struct agp_memory* next; struct agp_memory* prev; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {struct agp_memory* pool; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct agp_memory * VAR_1)
{
 struct agp_memory *VAR_2;

 VAR_2 = VAR_0.current_controller->pool;

 if (VAR_2 != ((void*)0)) {
  VAR_2->prev = VAR_1;
  VAR_1->next = VAR_2;
 }
 VAR_0.current_controller->pool = VAR_1;
}
