
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {int bitmap; int set; } ;
struct TYPE_9__ {int off; int sign; int type; } ;
struct TYPE_12__ {TYPE_2__ branch; TYPE_1__ terminal; } ;
struct TYPE_11__ {scalar_t__ rnum; int age; int size; TYPE_4__ origin; } ;
typedef TYPE_3__ ccv_cache_t ;
typedef TYPE_4__ ccv_cache_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

void* FUNC_8(ccv_cache_t* VAR_1, uint64_t VAR_2, uint8_t* VAR_3)
{
 if (!VAR_0)
  FUNC_7();
 if (VAR_1->rnum == 0)
  return 0;
 int VAR_4, VAR_5 = 0, VAR_6 = -1;
 ccv_cache_index_t* VAR_7 = 0;
 ccv_cache_index_t* VAR_8 = &VAR_1->origin;
 ccv_cache_index_t* VAR_9 = &VAR_1->origin;
 uint64_t VAR_10 = 63;
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
 {
  int VAR_11 = VAR_9->terminal.off & 0x1;
  int VAR_12 = VAR_9->terminal.off & 0x2;
  if (VAR_11)
  {
   VAR_5 = 1;
   break;
  }
  if (VAR_7 != 0 && FUNC_6(VAR_7->branch.bitmap) > 1)
   VAR_8 = VAR_9;
  VAR_7 = VAR_9;
  VAR_6 = VAR_4;
  ccv_cache_index_t* VAR_13 = (ccv_cache_index_t*)(VAR_9->branch.set - (VAR_9->branch.set & 0x3));
  int VAR_14 = (VAR_2 & VAR_10) >> (VAR_4 * 6);
  if (VAR_12)
  {
   VAR_9 = VAR_13 + VAR_14;
  } else {
   uint64_t VAR_15 = 1;
   VAR_15 = VAR_15 << VAR_14;
   if (VAR_15 & VAR_9->branch.bitmap)
   {
    uint64_t VAR_16 = (VAR_15 - 1) & VAR_9->branch.bitmap;
    VAR_9 = VAR_13 + FUNC_6(VAR_16);
   } else {
    return 0;
   }
  }
  VAR_10 <<= 6;
 }
 if (!VAR_5)
  return 0;
 int VAR_17 = VAR_9->terminal.off & 0x1;
 if (!VAR_17)
  return 0;
 if (VAR_9->terminal.sign != VAR_2)
  return 0;
 void* VAR_18 = (void*)(VAR_9->terminal.off - (VAR_9->terminal.off & 0x3));
 if (VAR_3)
  *VAR_3 = FUNC_0(VAR_9->terminal.type);
 uint32_t VAR_19 = FUNC_1(VAR_9->terminal.type);
 if (VAR_9 != &VAR_1->origin)
 {
  uint64_t VAR_20 = 1, VAR_21 = 63;
  int VAR_22 = (VAR_2 & (VAR_21 << (VAR_6 * 6))) >> (VAR_6 * 6);
  VAR_20 = VAR_20 << VAR_22;
  uint64_t VAR_23 = (VAR_20 - 1) & VAR_7->branch.bitmap;
  uint32_t VAR_24 = FUNC_6(VAR_23);
  uint32_t VAR_25 = FUNC_6(VAR_7->branch.bitmap);
  FUNC_4(VAR_25 > 1);
  ccv_cache_index_t* VAR_26 = (ccv_cache_index_t*)(VAR_7->branch.set - (VAR_7->branch.set & 0x3));
  if (VAR_25 > 2 || (VAR_25 == 2 && !(VAR_26[1 - VAR_24].terminal.off & 0x1)))
  {
   VAR_7->branch.bitmap &= ~VAR_20;
   for (VAR_4 = VAR_24 + 1; VAR_4 < VAR_25; VAR_4++)
    VAR_26[VAR_4 - 1] = VAR_26[VAR_4];
   VAR_26 = (ccv_cache_index_t*)FUNC_5(VAR_26, sizeof(ccv_cache_index_t) * (VAR_25 - 1));
   VAR_7->branch.set = (uint64_t)VAR_26;
  } else {
   ccv_cache_index_t VAR_27 = VAR_26[1 - VAR_24];
   FUNC_3(VAR_8);
   *VAR_8 = VAR_27;
  }
  FUNC_2(&VAR_1->origin, VAR_2);
 } else {

  VAR_1->age = 1;
 }
 VAR_1->rnum--;
 VAR_1->size -= VAR_19;
 return VAR_18;
}
