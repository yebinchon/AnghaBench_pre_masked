
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* zone_t ;
typedef int vm_offset_t ;
struct zone_page_metadata {int free_count; int pages; scalar_t__ page_count; } ;
struct zone_free_element {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int intermediate; int all_free; int any_free_foreign; } ;
struct TYPE_7__ {int elem_size; int countfree; int count; TYPE_1__ pages; int count_all_free_pages; scalar_t__ allows_foreign; int zone_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct zone_page_metadata*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int* FUNC_4 (int ,int*) ;
 int FUNC_5 (struct zone_page_metadata*) ;
 struct zone_page_metadata* FUNC_6 (struct zone_free_element*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int,int ,int ) ;
 scalar_t__ FUNC_9 (struct zone_page_metadata*) ;
 int FUNC_10 (struct zone_page_metadata*,struct zone_free_element*) ;
 int FUNC_11 (char*,void*,int ) ;
 int FUNC_12 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_13(zone_t VAR_4,
             vm_offset_t VAR_5,
             boolean_t VAR_6)
{
 vm_offset_t VAR_7;
 struct zone_page_metadata *VAR_8;

 vm_offset_t *VAR_9 = (vm_offset_t *) VAR_5;
 vm_offset_t *VAR_10 = FUNC_4(VAR_4->elem_size, VAR_9);

 VAR_8 = FUNC_6((struct zone_free_element *)VAR_5, VAR_1);
 FUNC_2(FUNC_0(VAR_8) == VAR_4);
 VAR_7 = (vm_offset_t)FUNC_9(VAR_8);

 if (FUNC_1(!FUNC_7(VAR_4, VAR_7)))
  FUNC_11("zfree: invalid head pointer %p for freelist of zone %s\n",
        (void *) VAR_7, VAR_4->zone_name);

 if (FUNC_1(!FUNC_7(VAR_4, VAR_5)))
  FUNC_11("zfree: freeing invalid pointer %p to zone %s\n",
        (void *) VAR_5, VAR_4->zone_name);

 if (FUNC_1(VAR_7 == VAR_5))
  FUNC_11("zfree: double free of %p to zone %s\n",
        (void *) VAR_5, VAR_4->zone_name);







 *VAR_10 = VAR_7 ^ (VAR_6 ? VAR_3 : VAR_2);






 *VAR_9 = VAR_7 ^ VAR_2;
 FUNC_10(VAR_8, (struct zone_free_element *)VAR_5);
 VAR_8->free_count++;
 if (VAR_4->allows_foreign && !FUNC_3(VAR_5, VAR_4->elem_size)) {
  if (VAR_8->free_count == 1) {

   FUNC_12(&VAR_4->pages.any_free_foreign, &(VAR_8->pages));
  } else {

  }
 } else if (VAR_8->free_count == FUNC_5(VAR_8)) {

  FUNC_12(&VAR_4->pages.all_free, &(VAR_8->pages));
  VAR_4->count_all_free_pages += VAR_8->page_count;
 } else if (VAR_8->free_count == 1) {

  FUNC_12(&VAR_4->pages.intermediate, &(VAR_8->pages));
 }
 VAR_4->count--;
 VAR_4->countfree++;




}
