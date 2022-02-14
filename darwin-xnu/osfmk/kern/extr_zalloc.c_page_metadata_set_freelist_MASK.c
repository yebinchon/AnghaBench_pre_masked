
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef void* uint32_t ;
struct zone_page_metadata {void* freelist_offset; } ;
typedef scalar_t__ addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct zone_page_metadata*) ;
 void* VAR_1 ;
 scalar_t__ FUNC_2 (struct zone_page_metadata*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct zone_page_metadata*,int) ;

__attribute__((used)) static inline void
FUNC_5(struct zone_page_metadata *VAR_2, void *VAR_3)
{
 FUNC_3(FUNC_2(VAR_2) != VAR_0);
 if (VAR_3 == ((void*)0))
  VAR_2->freelist_offset = VAR_1;
 else {
  if (FUNC_4(VAR_2, sizeof(struct zone_page_metadata)))
   VAR_2->freelist_offset = (uint32_t)((vm_offset_t)(VAR_3) - FUNC_0(FUNC_1(VAR_2)));
  else
   VAR_2->freelist_offset = (uint32_t)((vm_offset_t)(VAR_3) - (vm_offset_t)VAR_2);
 }
}
