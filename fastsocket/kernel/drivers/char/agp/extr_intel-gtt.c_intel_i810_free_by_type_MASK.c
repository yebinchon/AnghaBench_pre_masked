
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {scalar_t__ type; int page_count; int * pages; int key; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* agp_destroy_page ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct agp_memory*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct agp_memory*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct agp_memory *VAR_4)
{
 FUNC_0(VAR_4->key);
 if (VAR_4->type == VAR_2) {
  if (VAR_4->page_count == 4)
   FUNC_2(VAR_4->pages[0]);
  else {
   VAR_3->driver->agp_destroy_page(VAR_4->pages[0],
            VAR_1);
   VAR_3->driver->agp_destroy_page(VAR_4->pages[0],
            VAR_0);
  }
  FUNC_1(VAR_4);
 }
 FUNC_3(VAR_4);
}
