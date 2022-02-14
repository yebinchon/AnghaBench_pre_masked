
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int daddr_t ;
struct TYPE_4__ {scalar_t__ bmu_avail; scalar_t__ bmu_bitmap; } ;
struct TYPE_5__ {int bm_bighint; TYPE_1__ u; } ;
typedef TYPE_2__ blmeta_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static daddr_t
FUNC_0(blmeta_t *VAR_2, daddr_t VAR_3, int VAR_4, daddr_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 daddr_t VAR_8 = 0;





 if (VAR_3 == VAR_0) {
  if (VAR_2) {
   VAR_2->bm_bighint = 0;
   VAR_2->u.bmu_bitmap = 0;
  }
  return(VAR_8);
 }







 if (VAR_2) {
  VAR_2->bm_bighint = 0;
  VAR_2->u.bmu_avail = 0;
 }

 VAR_3 >>= VAR_1;
 VAR_7 = (VAR_4 >> VAR_1);

 for (VAR_6 = 1; VAR_6 <= VAR_4; VAR_6 += VAR_7) {
  if (VAR_5 >= VAR_3) {



   VAR_8 = VAR_6 + FUNC_0(
       ((VAR_2) ? &VAR_2[VAR_6] : ((void*)0)),
       VAR_3,
       VAR_7 - 1,
       VAR_3
   );
   VAR_5 -= VAR_3;
  } else if (VAR_5 > 0) {



   VAR_8 = VAR_6 + FUNC_0(
       ((VAR_2) ? &VAR_2[VAR_6] : ((void*)0)),
       VAR_3,
       VAR_7 - 1,
       VAR_5
   );
   VAR_5 = 0;
  } else {



   if (VAR_2)
    VAR_2[VAR_6].bm_bighint = (daddr_t)-1;
   break;
  }
 }
 if (VAR_8 < VAR_6)
  VAR_8 = VAR_6;
 return(VAR_8);
}
