
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* zone_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_address_t ;
struct zone_page_metadata {int pages; } ;
struct zone_free_element {struct zone_free_element* next; } ;
struct TYPE_5__ {int intermediate; int all_free; int any_free_foreign; } ;
struct TYPE_6__ {TYPE_1__ pages; scalar_t__ allows_foreign; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 struct zone_free_element* FUNC_1 (struct zone_page_metadata*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zone_t VAR_0, vm_offset_t VAR_1)
{
 struct zone_free_element *VAR_2;
 struct zone_page_metadata *VAR_3;

 if (VAR_0->allows_foreign) {
  for (VAR_3 = (struct zone_page_metadata *)FUNC_4(&VAR_0->pages.any_free_foreign);
    !FUNC_3(&VAR_0->pages.any_free_foreign, &(VAR_3->pages));
    VAR_3 = (struct zone_page_metadata *)FUNC_5(&(VAR_3->pages))) {
   for (VAR_2 = FUNC_1(VAR_3);
     VAR_2 != ((void*)0);
     VAR_2 = VAR_2->next) {
    if (!FUNC_0(VAR_0, (vm_address_t)VAR_2) || (vm_address_t)VAR_2 == VAR_1)
     FUNC_2("zone_check_freelist");
   }
  }
 }
 for (VAR_3 = (struct zone_page_metadata *)FUNC_4(&VAR_0->pages.all_free);
  !FUNC_3(&VAR_0->pages.all_free, &(VAR_3->pages));
  VAR_3 = (struct zone_page_metadata *)FUNC_5(&(VAR_3->pages))) {
  for (VAR_2 = FUNC_1(VAR_3);
   VAR_2 != ((void*)0);
   VAR_2 = VAR_2->next) {
   if (!FUNC_0(VAR_0, (vm_address_t)VAR_2) || (vm_address_t)VAR_2 == VAR_1)
    FUNC_2("zone_check_freelist");
  }
 }
 for (VAR_3 = (struct zone_page_metadata *)FUNC_4(&VAR_0->pages.intermediate);
  !FUNC_3(&VAR_0->pages.intermediate, &(VAR_3->pages));
  VAR_3 = (struct zone_page_metadata *)FUNC_5(&(VAR_3->pages))) {
  for (VAR_2 = FUNC_1(VAR_3);
   VAR_2 != ((void*)0);
   VAR_2 = VAR_2->next) {
   if (!FUNC_0(VAR_0, (vm_address_t)VAR_2) || (vm_address_t)VAR_2 == VAR_1)
    FUNC_2("zone_check_freelist");
  }
 }
}
