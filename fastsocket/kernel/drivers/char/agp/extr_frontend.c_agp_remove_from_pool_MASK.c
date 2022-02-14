
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {struct agp_memory* prev; struct agp_memory* next; int key; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {struct agp_memory* pool; } ;


 int FUNC_0 (char*,struct agp_memory*) ;
 TYPE_2__ VAR_0 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct agp_memory *VAR_1)
{
 struct agp_memory *VAR_2;
 struct agp_memory *VAR_3;



 FUNC_0("mem=%p", VAR_1);
 if (FUNC_1(VAR_1->key) != ((void*)0)) {
  VAR_3 = VAR_1->next;
  VAR_2 = VAR_1->prev;

  if (VAR_2 != ((void*)0)) {
   VAR_2->next = VAR_3;
   if (VAR_3 != ((void*)0))
    VAR_3->prev = VAR_2;

  } else {

   if (VAR_3 != ((void*)0))
    VAR_3->prev = ((void*)0);

   VAR_0.current_controller->pool = VAR_3;
  }
 }
}
