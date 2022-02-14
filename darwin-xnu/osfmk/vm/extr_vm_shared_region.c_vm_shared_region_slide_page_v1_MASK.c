
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_slide_info_t ;
typedef TYPE_3__* vm_shared_region_slide_info_entry_v1_t ;
typedef int vm_offset_t ;
typedef scalar_t__ vaddr ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef TYPE_4__* slide_info_entry_toc_t ;
typedef int kern_return_t ;
struct TYPE_9__ {int* entry; } ;
struct TYPE_8__ {int toc_count; int entry_count; scalar_t__ entry_offset; scalar_t__ toc_offset; } ;
struct TYPE_7__ {int slide; TYPE_1__* slide_info_entry; } ;
struct TYPE_6__ {TYPE_3__ v1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_3(vm_shared_region_slide_info_t VAR_3, vm_offset_t VAR_4, uint32_t VAR_5)
{
 uint16_t *VAR_6 = ((void*)0);
 slide_info_entry_toc_t VAR_7 = ((void*)0);
 uint32_t VAR_8=0, VAR_9=0;
 uint8_t VAR_10 = 0;
 uint32_t VAR_11 = VAR_3->slide;
 int VAR_12 = FUNC_2(FUNC_0());

 vm_shared_region_slide_info_entry_v1_t VAR_13 = &VAR_3->slide_info_entry->v1;
 VAR_6 = (uint16_t*)((uintptr_t)VAR_13 + VAR_13->toc_offset);

 if (VAR_5 >= VAR_13->toc_count) {
  FUNC_1("No slide entry for this page in toc. PageIndex: %d Toc Count: %d\n", VAR_5, VAR_13->toc_count);
 } else {
  uint16_t VAR_14 = (uint16_t)(VAR_6[VAR_5]);
  slide_info_entry_toc_t VAR_15 = (slide_info_entry_toc_t)((uintptr_t)VAR_13 + VAR_13->entry_offset);

  if (VAR_14 >= VAR_13->entry_count) {
   FUNC_1("No sliding bitmap entry for entryIndex: %d amongst %d entries\n", VAR_14, VAR_13->entry_count);
  } else {
   VAR_7 = &VAR_15[VAR_14];

   for(VAR_8=0; VAR_8 < VAR_2; ++VAR_8) {
    VAR_10 = VAR_7->entry[VAR_8];
    if (VAR_10!=0) {
     for (VAR_9=0; VAR_9 <8; ++VAR_9) {
      if (VAR_10 & (1 <<VAR_9)){
       uint32_t *VAR_16;
       uint32_t VAR_17;

       VAR_16 = (uint32_t*)((uintptr_t)(VAR_4)+(sizeof(uint32_t)*(VAR_8*8 +VAR_9)));
       VAR_17 = *VAR_16;
       *VAR_16 += VAR_11;
       if (VAR_12 && *VAR_16 < VAR_17) {






        FUNC_1("vm_shared_region_slide() carry over: i=%d j=%d b=0x%x slide=0x%x old=0x%x new=0x%x\n",
               VAR_8, VAR_9, VAR_10, VAR_11, VAR_17, *VAR_16);
        return VAR_0;
       }
      }
     }
    }
   }
  }
 }

 return VAR_1;
}
