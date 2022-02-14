
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
struct zone_page_metadata {scalar_t__ real_metadata_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct zone_page_metadata*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct zone_page_metadata *VAR_2, struct zone_page_metadata *VAR_3)
{
  FUNC_1(FUNC_0(VAR_2) == VAR_0);
  FUNC_1(FUNC_0(VAR_3) != VAR_0);
  FUNC_1((vm_offset_t)VAR_2 > (vm_offset_t)VAR_3);
  vm_offset_t VAR_4 = (vm_offset_t)VAR_2 - (vm_offset_t)VAR_3;
  FUNC_1(VAR_4 <= VAR_1);
  VAR_2->real_metadata_offset = (uint32_t)VAR_4;
}
