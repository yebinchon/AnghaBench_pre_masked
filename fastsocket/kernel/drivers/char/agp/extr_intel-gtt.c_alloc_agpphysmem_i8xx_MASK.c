
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_memory {size_t page_count; size_t num_scratch_pages; struct page** pages; int physical; int type; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {struct page* (* agp_alloc_page ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct agp_memory* FUNC_0 (size_t) ;
 struct page* FUNC_1 () ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static struct agp_memory *FUNC_4(size_t VAR_2, int VAR_3)
{
 struct agp_memory *VAR_4;
 struct page *VAR_5;

 switch (VAR_2) {
 case 1: VAR_5 = VAR_1->driver->agp_alloc_page(VAR_1);
  break;
 case 4:

  VAR_5 = FUNC_1();
  break;
 default:
  return ((void*)0);
 }

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->pages[0] = VAR_5;
 if (VAR_2 == 4) {

  VAR_4->pages[1] = VAR_4->pages[0] + 1;
  VAR_4->pages[2] = VAR_4->pages[1] + 1;
  VAR_4->pages[3] = VAR_4->pages[2] + 1;
 }
 VAR_4->page_count = VAR_2;
 VAR_4->num_scratch_pages = VAR_2;
 VAR_4->type = VAR_0;
 VAR_4->physical = FUNC_2(VAR_4->pages[0]);
 return VAR_4;
}
