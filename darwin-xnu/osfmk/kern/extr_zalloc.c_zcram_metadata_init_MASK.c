
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct zone_page_metadata {scalar_t__ free_count; } ;
struct zone_free_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct zone_page_metadata*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct zone_page_metadata* FUNC_2 (struct zone_free_element*,int ) ;
 int FUNC_3 (struct zone_page_metadata*,struct zone_page_metadata*) ;

__attribute__((used)) static inline void
FUNC_4(vm_offset_t VAR_3, vm_size_t VAR_4, struct zone_page_metadata *VAR_5)
{
 struct zone_page_metadata *VAR_6;


 VAR_4 -= VAR_1;
 VAR_3 += VAR_1;

 for (; VAR_4 > 0; VAR_3 += VAR_1, VAR_4 -= VAR_1) {
  VAR_6 = FUNC_2((struct zone_free_element *)VAR_3, VAR_2);
  FUNC_1(VAR_6 != VAR_5);
  FUNC_0(VAR_6, VAR_0);
  FUNC_3(VAR_6, VAR_5);
  VAR_6->free_count = 0;
 }
 return;
}
