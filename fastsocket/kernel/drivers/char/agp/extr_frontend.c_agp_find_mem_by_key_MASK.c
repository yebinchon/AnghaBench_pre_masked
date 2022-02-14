
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int key; struct agp_memory* next; } ;
struct TYPE_4__ {TYPE_1__* current_controller; } ;
struct TYPE_3__ {struct agp_memory* pool; } ;


 int FUNC_0 (char*,int,struct agp_memory*) ;
 TYPE_2__ VAR_0 ;

struct agp_memory *FUNC_1(int VAR_1)
{
 struct agp_memory *VAR_2;

 if (VAR_0.current_controller == ((void*)0))
  return ((void*)0);

 VAR_2 = VAR_0.current_controller->pool;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->key == VAR_1)
   break;
  VAR_2 = VAR_2->next;
 }

 FUNC_0("key=%d -> mem=%p", VAR_1, VAR_2);
 return VAR_2;
}
