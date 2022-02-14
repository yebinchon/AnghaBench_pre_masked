
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct zone_page_metadata {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zone_page_metadata*) ;
 scalar_t__ FUNC_2 (struct zone_page_metadata*,int) ;
 int FUNC_3 (struct zone_page_metadata*) ;

__attribute__((used)) static inline vm_offset_t
FUNC_4(struct zone_page_metadata *VAR_0)
{
 if (FUNC_2(VAR_0, sizeof(struct zone_page_metadata)))
  return (vm_offset_t)(FUNC_0(FUNC_1(VAR_0)));
 else
  return (vm_offset_t)(FUNC_3(VAR_0));
}
