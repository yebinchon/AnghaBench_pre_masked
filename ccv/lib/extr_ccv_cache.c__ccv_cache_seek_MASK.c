
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int set; int bitmap; } ;
struct TYPE_6__ {int off; } ;
struct TYPE_8__ {TYPE_2__ branch; TYPE_1__ terminal; } ;
typedef TYPE_3__ ccv_cache_index_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static ccv_cache_index_t* FUNC_2(ccv_cache_index_t* VAR_1, uint64_t VAR_2, int* VAR_3)
{
 if (!VAR_0)
  FUNC_1();
 int VAR_4;
 uint64_t VAR_5 = 63;
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++)
 {
  int VAR_6 = VAR_1->terminal.off & 0x1;
  int VAR_7 = VAR_1->terminal.off & 0x2;
  if (VAR_6)
  {
   if (VAR_3)
    *VAR_3 = VAR_4;
   return VAR_1;
  } else {
   ccv_cache_index_t* VAR_8 = (ccv_cache_index_t*)(VAR_1->branch.set - (VAR_1->branch.set & 0x3));
   int VAR_9 = (VAR_2 & VAR_5) >> (VAR_4 * 6);
   if (VAR_7)
   {
    VAR_1 = VAR_8 + VAR_9;
   } else {
    uint64_t VAR_10 = 1;
    VAR_10 = VAR_10 << VAR_9;
    if (VAR_10 & VAR_1->branch.bitmap) {
     uint64_t VAR_11 = (VAR_10 - 1) & VAR_1->branch.bitmap;
     VAR_1 = VAR_8 + FUNC_0(VAR_11);
    } else {
     if (VAR_3)
      *VAR_3 = VAR_4;
     return VAR_1;
    }
   }
   VAR_5 <<= 6;
  }
 }
 return 0;
}
