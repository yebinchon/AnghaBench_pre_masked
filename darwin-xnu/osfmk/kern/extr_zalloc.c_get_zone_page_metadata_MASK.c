
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct zone_page_metadata {int dummy; } ;
struct zone_free_element {int dummy; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct zone_free_element*) ;
 scalar_t__ FUNC_1 (struct zone_page_metadata*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (struct zone_free_element*,int) ;
 struct zone_page_metadata* FUNC_4 (struct zone_page_metadata*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct zone_page_metadata*) ;

__attribute__((used)) static inline struct zone_page_metadata *
FUNC_7(struct zone_free_element *VAR_1, boolean_t VAR_2)
{
 struct zone_page_metadata *VAR_3 = 0;

 if (FUNC_3(VAR_1, sizeof(struct zone_free_element))) {
  VAR_3 = (struct zone_page_metadata *)(FUNC_0(VAR_1));
  if (VAR_2)
   FUNC_6(VAR_3);
 } else {
  VAR_3 = (struct zone_page_metadata *)(FUNC_5((vm_offset_t)VAR_1));
 }
 if (VAR_2) {
  FUNC_2((char *)VAR_3, sizeof(struct zone_page_metadata));
 }
 return ((FUNC_1(VAR_3) != VAR_0) ? VAR_3 : FUNC_4(VAR_3));
}
