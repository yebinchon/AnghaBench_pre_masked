
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_slide_info_t ;
typedef TYPE_3__* vm_shared_region_slide_info_entry_v2_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_8__ {int delta_mask; int page_starts_count; int page_extras_count; scalar_t__ page_extras_offset; scalar_t__ page_starts_offset; } ;
struct TYPE_7__ {int slide; TYPE_1__* slide_info_entry; } ;
struct TYPE_6__ {TYPE_3__ v2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int const,int,int *,int const,int const,TYPE_3__*) ;

__attribute__((used)) static kern_return_t
FUNC_2(vm_shared_region_slide_info_t VAR_7, vm_offset_t VAR_8, uint32_t VAR_9)
{
 vm_shared_region_slide_info_entry_v2_t VAR_10 = &VAR_7->slide_info_entry->v2;
 const uint32_t VAR_11 = VAR_7->slide;



 const boolean_t VAR_12 = (VAR_10->delta_mask >> 32) != 0;

 const uint16_t *VAR_13 = (uint16_t *)((uintptr_t)VAR_10 + VAR_10->page_starts_offset);
 const uint16_t *VAR_14 = (uint16_t *)((uintptr_t)VAR_10 + VAR_10->page_extras_offset);

 uint8_t *VAR_15 = (uint8_t *)VAR_8;
 uint16_t VAR_16;

 if (VAR_9 >= VAR_10->page_starts_count) {
  FUNC_0("vm_shared_region_slide_page() did not find page start in slide info: pageIndex=%u, count=%u\n",
         VAR_9, VAR_10->page_starts_count);
  return VAR_5;
 }
 VAR_16 = VAR_13[VAR_9];

 if (VAR_16 == VAR_2) {
  return VAR_6;
 }

 if (VAR_16 & VAR_1) {
  uint16_t VAR_17 = VAR_16 & VAR_4;
  uint16_t VAR_18;

  do {
   uint16_t VAR_19;
   kern_return_t VAR_20;

   if (VAR_17 >= VAR_10->page_extras_count) {
    FUNC_0("vm_shared_region_slide_page() out-of-bounds extras index: index=%u, count=%u\n",
           VAR_17, VAR_10->page_extras_count);
    return VAR_5;
   }
   VAR_18 = VAR_14[VAR_17];
   VAR_19 = (VAR_18 & VAR_4) << VAR_3;

   VAR_20 = FUNC_1(VAR_12, VAR_9, VAR_15, VAR_19, VAR_11, VAR_10);
   if (VAR_20 != VAR_6) {
    return VAR_5;
   }

   VAR_17++;
  } while (!(VAR_18 & VAR_0));
 } else {
  const uint32_t VAR_21 = VAR_16 << VAR_3;
  kern_return_t VAR_22;

  VAR_22 = FUNC_1(VAR_12, VAR_9, VAR_15, VAR_21, VAR_11, VAR_10);
  if (VAR_22 != VAR_6) {
   return VAR_5;
  }
 }

 return VAR_6;
}
