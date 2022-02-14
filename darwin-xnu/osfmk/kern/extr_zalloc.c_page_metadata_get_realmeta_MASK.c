
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct zone_page_metadata {scalar_t__ real_metadata_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct zone_page_metadata*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline struct zone_page_metadata *
FUNC_2(struct zone_page_metadata *VAR_1)
{
 FUNC_1(FUNC_0(VAR_1) == VAR_0);
 return (struct zone_page_metadata *)((vm_offset_t)VAR_1 - VAR_1->real_metadata_offset);
}
