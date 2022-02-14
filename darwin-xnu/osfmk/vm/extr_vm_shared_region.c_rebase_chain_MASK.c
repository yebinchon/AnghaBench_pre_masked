
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_shared_region_slide_info_entry_v2_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ) ;
 scalar_t__ FUNC_2 (int *,int,int,int ) ;

__attribute__((used)) static kern_return_t
FUNC_3(
 boolean_t VAR_1,
 uint32_t VAR_2,
 uint8_t *VAR_3,
 uint16_t VAR_4,
 uint32_t VAR_5,
 vm_shared_region_slide_info_entry_v2_t VAR_6)
{
 kern_return_t VAR_7;
 if (VAR_1) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 } else {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 }

 if (VAR_7 != VAR_0) {
  FUNC_0("vm_shared_region_slide_page() offset overflow: pageIndex=%u, start_offset=%u, slide_amount=%u\n",
         VAR_2, VAR_4, VAR_5);
 }
 return VAR_7;
}
