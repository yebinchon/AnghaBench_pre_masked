
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct zone* zone_t ;
typedef int vm_size_t ;
struct zone_page_metadata {int dummy; } ;
struct zone_free_element {int dummy; } ;
struct zone {int elem_size; } ;


 int VAR_0 ;
 struct zone* FUNC_0 (struct zone_page_metadata*) ;
 scalar_t__ FUNC_1 (void*,int) ;
 struct zone_page_metadata* FUNC_2 (struct zone_free_element*,int ) ;
 scalar_t__ FUNC_3 (void*,struct zone**,int *) ;

vm_size_t
FUNC_4(void *VAR_1, zone_t *VAR_2)
{
 struct zone *VAR_3;
 if (FUNC_1(VAR_1, sizeof(void *))) {
  struct zone_page_metadata *VAR_4 = FUNC_2((struct zone_free_element *)VAR_1, VAR_0);
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_2) {
   *VAR_2 = VAR_3;
  }
  return (VAR_3->elem_size);
 } else {







  return 0;
 }
}
