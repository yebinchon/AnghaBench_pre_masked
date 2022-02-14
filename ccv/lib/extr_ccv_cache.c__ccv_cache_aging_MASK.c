
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int set; int bitmap; int age; } ;
struct TYPE_5__ {int off; int type; } ;
struct TYPE_7__ {TYPE_2__ branch; TYPE_1__ terminal; } ;
typedef TYPE_3__ ccv_cache_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(ccv_cache_index_t* VAR_1, uint64_t VAR_2)
{
 if (!VAR_0)
  FUNC_3();
 int VAR_3;
 uint64_t VAR_4 = 63;
 ccv_cache_index_t* VAR_5[10];
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
 {
  VAR_5[VAR_3] = VAR_1;
  int VAR_6 = VAR_1->terminal.off & 0x1;
  int VAR_7 = VAR_1->terminal.off & 0x2;
  if (VAR_6)
  {
   break;
  } else {
   ccv_cache_index_t* VAR_8 = (ccv_cache_index_t*)(VAR_1->branch.set - (VAR_1->branch.set & 0x3));
   int VAR_9 = (VAR_2 & VAR_4) >> (VAR_3 * 6);
   if (VAR_7)
   {
    VAR_1 = VAR_8 + VAR_9;
   } else {
    uint64_t VAR_10 = 1;
    VAR_10 = VAR_10 << VAR_9;
    if (VAR_10 & VAR_1->branch.bitmap) {
     uint64_t VAR_11 = (VAR_10 - 1) & VAR_1->branch.bitmap;
     VAR_1 = VAR_8 + FUNC_2(VAR_11);
    } else {
     break;
    }
   }
   VAR_4 <<= 6;
  }
 }
 FUNC_1(VAR_3 < 10);
 for (; VAR_3 >= 0; VAR_3--)
 {
  VAR_1 = VAR_5[VAR_3];
  int VAR_12 = VAR_1->terminal.off & 0x1;
  if (!VAR_12)
  {
   ccv_cache_index_t* VAR_13 = (ccv_cache_index_t*)(VAR_1->branch.set - (VAR_1->branch.set & 0x3));
   uint32_t VAR_14 = FUNC_2(VAR_1->branch.bitmap);
   uint32_t VAR_15 = (VAR_13[0].terminal.off & 0x1) ? FUNC_0(VAR_13[0].terminal.type) : VAR_13[0].branch.age;
   for (VAR_4 = 1; VAR_4 < VAR_14; VAR_4++)
   {
    uint32_t VAR_16 = (VAR_13[VAR_4].terminal.off & 0x1) ? FUNC_0(VAR_13[VAR_4].terminal.type) : VAR_13[VAR_4].branch.age;
    if (VAR_16 < VAR_15)
     VAR_15 = VAR_16;
   }
   VAR_1->branch.age = VAR_15;
  }
 }
}
