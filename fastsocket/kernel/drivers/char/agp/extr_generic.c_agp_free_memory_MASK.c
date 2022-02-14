
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {scalar_t__ type; size_t page_count; int key; int * pages; TYPE_2__* bridge; scalar_t__ is_bound; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* agp_destroy_page ) (int ,int ) ;int (* agp_destroy_pages ) (struct agp_memory*) ;int (* free_by_type ) (struct agp_memory*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct agp_memory*) ;
 int FUNC_2 (struct agp_memory*) ;
 int FUNC_3 (struct agp_memory*) ;
 int FUNC_4 (struct agp_memory*) ;
 int FUNC_5 (struct agp_memory*) ;
 int FUNC_6 (struct agp_memory*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(struct agp_memory *VAR_3)
{
 size_t VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 if (VAR_3->is_bound)
  FUNC_3(VAR_3);

 if (VAR_3->type >= VAR_2) {
  FUNC_2(VAR_3);
  return;
 }

 if (VAR_3->type != 0) {
  VAR_3->bridge->driver->free_by_type(VAR_3);
  return;
 }
 if (VAR_3->page_count != 0) {
  if (VAR_3->bridge->driver->agp_destroy_pages) {
   VAR_3->bridge->driver->agp_destroy_pages(VAR_3);
  } else {

   for (VAR_4 = 0; VAR_4 < VAR_3->page_count; VAR_4++) {
    VAR_3->bridge->driver->agp_destroy_page(
     VAR_3->pages[VAR_4],
     VAR_1);
   }
   for (VAR_4 = 0; VAR_4 < VAR_3->page_count; VAR_4++) {
    VAR_3->bridge->driver->agp_destroy_page(
     VAR_3->pages[VAR_4],
     VAR_0);
   }
  }
 }
 FUNC_0(VAR_3->key);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
}
