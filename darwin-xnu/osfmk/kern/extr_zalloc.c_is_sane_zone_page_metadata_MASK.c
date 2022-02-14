
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone_t ;
typedef scalar_t__ vm_offset_t ;
struct zone_page_metadata {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static inline boolean_t
FUNC_1(zone_t VAR_1,
      vm_offset_t VAR_2)
{

 if (VAR_2 == 0)
  return VAR_0;
 return FUNC_0(VAR_1, VAR_2, sizeof(struct zone_page_metadata));
}
