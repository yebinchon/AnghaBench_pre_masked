
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int vm_tag_t ;
typedef int vm_size_t ;
struct TYPE_12__ {scalar_t__ total; int wastediv; int waste; scalar_t__ peak; } ;
typedef TYPE_2__ vm_allocation_zone_total_t ;
struct TYPE_13__ {scalar_t__ mapped; scalar_t__ total; size_t subtotalscount; size_t flags; TYPE_1__* subtotals; scalar_t__ peak; int tag; } ;
typedef TYPE_3__ vm_allocation_site_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_14__ {scalar_t__ mapped; scalar_t__ size; unsigned int site; int collectable_bytes; scalar_t__* name; scalar_t__ peak; int flags; int zone; int tag; } ;
typedef TYPE_4__ mach_memory_info_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned int tag; } ;


 int FUNC_0 (TYPE_3__*) ;
 unsigned int FUNC_1 (TYPE_3__*,int *,int ) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__*,int ,size_t) ;
 TYPE_3__** VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 TYPE_2__** VAR_16 ;
 int FUNC_8 (unsigned int,int*) ;

__attribute__((used)) static uint64_t
FUNC_9(mach_memory_info_t * VAR_17, unsigned int VAR_18, uint64_t VAR_19, boolean_t VAR_20)
{
    size_t VAR_21;
    unsigned int VAR_22, VAR_23, VAR_24;
    vm_allocation_site_t * VAR_25;
 FUNC_4(&VAR_14);

 for (VAR_22 = 0; VAR_22 <= VAR_15; VAR_22++)
    {
  VAR_25 = VAR_13[VAR_22];
  if (!VAR_25) continue;
  VAR_17[VAR_22].mapped = VAR_25->mapped;
  VAR_17[VAR_22].tag = VAR_25->tag;
        if (!VAR_20)
        {
   VAR_17[VAR_22].size = VAR_25->total;



        }
        else
        {
   if (!VAR_25->subtotalscount && (VAR_25->total != VAR_17[VAR_22].size))
   {
       FUNC_6("tag mismatch[%d] 0x%qx, iter 0x%qx\n", VAR_22, VAR_25->total, VAR_17[VAR_22].size);
       VAR_17[VAR_22].size = VAR_25->total;
   }
        }
    }

    VAR_24 = (VAR_15 + 1);
    VAR_23 = VAR_24;
    if (VAR_23 >= VAR_18) VAR_23 = VAR_18;

    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
    {
  VAR_25 = VAR_13[VAR_22];
  if (!VAR_25) continue;
  VAR_17[VAR_22].flags |= VAR_7;
  if (VAR_22 < VAR_0)
  {
      VAR_17[VAR_22].site = VAR_22;
      VAR_17[VAR_22].flags |= VAR_6;
      if (VAR_1 == VAR_22)
      {
    VAR_17[VAR_22].flags |= VAR_2;
    VAR_17[VAR_22].flags &= ~VAR_7;
    VAR_17[VAR_22].collectable_bytes = VAR_19;
   }
  }
  else if ((VAR_21 = (VAR_11 & (VAR_25->flags >> VAR_12))))
  {
      VAR_17[VAR_22].site = 0;
      VAR_17[VAR_22].flags |= VAR_5;
      if (VAR_21 > sizeof(VAR_17[VAR_22].name)) VAR_21 = sizeof(VAR_17[VAR_22].name);
      FUNC_7(&VAR_17[VAR_22].name[0], FUNC_0(VAR_25), VAR_21);
  }
  else if (VAR_10 & VAR_25->flags)
  {
      VAR_17[VAR_22].site = FUNC_1(VAR_25, ((void*)0), 0);
      VAR_17[VAR_22].flags |= VAR_4;
  }
  else
  {
      VAR_17[VAR_22].site = FUNC_2(VAR_25);
      VAR_17[VAR_22].flags |= VAR_3;
  }
        if (VAR_25->subtotalscount)
        {
   uint64_t VAR_26, VAR_27, VAR_28;
   uint32_t VAR_29;
   vm_tag_t VAR_30;

            VAR_17[VAR_22].size = VAR_25->total;
            VAR_26 = VAR_17[VAR_22].size;
            VAR_17[VAR_22].mapped = VAR_26;
            VAR_27 = 0;
            for (VAR_29 = 0; VAR_29 < VAR_25->subtotalscount; VAR_29++)
            {
    VAR_30 = VAR_25->subtotals[VAR_29].tag;
    FUNC_3(VAR_30 < VAR_18);
    if (VAR_17[VAR_30].name[0]) continue;
    VAR_28 = VAR_17[VAR_30].mapped;
    if (VAR_28 > VAR_17[VAR_30].size) VAR_28 = VAR_17[VAR_30].size;
    if (VAR_28 > VAR_26) VAR_28 = VAR_26;
    VAR_17[VAR_30].mapped -= VAR_28;
    VAR_17[VAR_30].size -= VAR_28;
    VAR_26 -= VAR_28;
    VAR_27 += VAR_28;
            }
            VAR_17[VAR_22].size = VAR_27;
        }
 }
 FUNC_5(&VAR_14);

    return (0);
}
