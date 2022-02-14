
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef size_t uint32_t ;
typedef int ppnum_t ;
struct TYPE_9__ {size_t list_size; size_t page_count; size_t bank_count; TYPE_2__* bank_bitmap; } ;
typedef TYPE_1__ hibernate_page_list_t ;
struct TYPE_10__ {int first_page; int last_page; int bitmapwords; int * bitmap; } ;
typedef TYPE_2__ hibernate_bitmap_t ;
struct TYPE_11__ {scalar_t__ MemoryMapDescriptorSize; size_t MemoryMapSize; int MemoryMap; } ;
typedef TYPE_3__ boot_args ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {scalar_t__ bootArgs; } ;
struct TYPE_12__ {int PhysicalStart; int Type; scalar_t__ NumberOfPages; } ;
typedef TYPE_4__ EfiMemoryRange ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,size_t,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,size_t) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

hibernate_page_list_t *
FUNC_7(boolean_t VAR_7)
{
    ppnum_t VAR_8, VAR_9;
    vm_size_t VAR_10;
    uint32_t VAR_11, VAR_12;
    uint32_t VAR_13, VAR_14;
    hibernate_page_list_t * VAR_15;
    hibernate_bitmap_t * VAR_16;

    EfiMemoryRange * VAR_17;
    uint32_t VAR_18, VAR_19, VAR_20;
    hibernate_bitmap_t VAR_21[VAR_1];
    boot_args * VAR_22 = (boot_args *) VAR_2.bootArgs;
    uint32_t VAR_23;
    ppnum_t VAR_24 = VAR_3;

    VAR_17 = (EfiMemoryRange *)FUNC_4(VAR_22->MemoryMap);
    if (VAR_22->MemoryMapDescriptorSize == 0)
 FUNC_5("Invalid memory map descriptor size");
    VAR_19 = VAR_22->MemoryMapDescriptorSize;
    VAR_18 = VAR_22->MemoryMapSize / VAR_19;
    VAR_12 = 0;
    VAR_23 = 0;
    for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++, VAR_17 = (EfiMemoryRange *)(((vm_offset_t)VAR_17) + VAR_19))
    {
 VAR_8 = (ppnum_t) (VAR_17->PhysicalStart >> VAR_0);
 VAR_9 = (ppnum_t) VAR_17->NumberOfPages;
 if (VAR_8 > VAR_24)
  continue;
 if ((VAR_8 + VAR_9 - 1) > VAR_24)
  VAR_9 = VAR_24 - VAR_8 + 1;
 if (!VAR_9)
  continue;

 switch (VAR_17->Type)
 {

     case 141:
     case 132:
  VAR_23 += VAR_9;


     case 136:
     case 135:
     case 139:
     case 138:
     case 137:

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  {
      if (VAR_21[VAR_11].first_page <= VAR_8)
   continue;
      if ((VAR_8 + VAR_9) == VAR_21[VAR_11].first_page)
      {
   VAR_21[VAR_11].first_page = VAR_8;
   VAR_9 = 0;
      }
      break;
  }
  if (!VAR_9) break;

  if (VAR_11 && (VAR_8 == (1 + VAR_21[VAR_11 - 1].last_page)))
      VAR_11--;
  else
  {
      VAR_12++;
      if (VAR_12 >= VAR_1) break;
      FUNC_1(&VAR_21[VAR_11],
     &VAR_21[VAR_11 + 1],
     (VAR_12 - VAR_11 - 1) * sizeof(hibernate_bitmap_t));
      VAR_21[VAR_11].first_page = VAR_8;
  }
  VAR_21[VAR_11].last_page = VAR_8 + VAR_9 - 1;
  break;


     case 130:
     case 129:

     case 140:

     case 131:
     case 128:
     case 134:
     case 133:
     default:
  break;
 }
    }

    if (VAR_12 >= VAR_1)
 return (((void*)0));



    VAR_10 = sizeof(hibernate_page_list_t);
    VAR_14 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
 VAR_13 = VAR_21[VAR_11].last_page + 1 - VAR_21[VAR_11].first_page;
 VAR_14 += VAR_13;
        VAR_10 += sizeof(hibernate_bitmap_t) + ((VAR_13 + 31) >> 5) * sizeof(uint32_t);
    }

    VAR_15 = (hibernate_page_list_t *)FUNC_2(VAR_10);
    if (!VAR_15)
 return (VAR_15);

    VAR_15->list_size = (uint32_t)VAR_10;
    VAR_15->page_count = VAR_14;
    VAR_15->bank_count = VAR_12;



    VAR_16 = &VAR_15->bank_bitmap[0];
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    {
        VAR_16->first_page = VAR_21[VAR_11].first_page;
        VAR_16->last_page = VAR_21[VAR_11].last_page;
        VAR_16->bitmapwords = (VAR_16->last_page + 1
                               - VAR_16->first_page + 31) >> 5;
        if (VAR_7) FUNC_3("hib bank[%d]: 0x%x000 end 0x%xfff\n",
            VAR_11, VAR_16->first_page, VAR_16->last_page);
 VAR_16 = (hibernate_bitmap_t *) &VAR_16->bitmap[VAR_16->bitmapwords];
    }
    if (VAR_7) FUNC_6("efi pagecount %d\n", VAR_23);

    return (VAR_15);
}
