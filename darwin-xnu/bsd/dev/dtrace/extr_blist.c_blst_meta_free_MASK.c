
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int daddr_t ;
struct TYPE_5__ {scalar_t__ bmu_avail; scalar_t__ bmu_bitmap; } ;
struct TYPE_6__ {int bm_bighint; TYPE_1__ u; } ;
typedef TYPE_2__ blmeta_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_3(blmeta_t *VAR_1, daddr_t VAR_2, daddr_t VAR_3, daddr_t VAR_4,
        int VAR_5, daddr_t VAR_6)
{
 int VAR_7;
 int VAR_8 = (VAR_5 >> VAR_0);
 if (VAR_1->u.bmu_avail == 0) {




  VAR_1->u.bmu_avail = VAR_3;
  VAR_1->bm_bighint = VAR_3;

  if (VAR_3 != VAR_4) {
   for (VAR_7 = 1; VAR_7 <= VAR_5; VAR_7 += VAR_8) {
    if (VAR_1[VAR_7].bm_bighint == (daddr_t)-1)
     break;
    VAR_1[VAR_7].bm_bighint = 0;
    if (VAR_8 == 1)
     VAR_1[VAR_7].u.bmu_bitmap = 0;
    else
     VAR_1[VAR_7].u.bmu_avail = 0;
   }

  }
 } else {
  VAR_1->u.bmu_avail += VAR_3;

 }





 if (VAR_1->u.bmu_avail == VAR_4)
  return;
 if (VAR_1->u.bmu_avail > VAR_4)
  FUNC_1("blst_meta_free: freeing already free blocks (%d) %d/%d", VAR_3, VAR_1->u.bmu_avail, VAR_4);





 VAR_4 >>= VAR_0;

 VAR_7 = (VAR_2 - VAR_6) / VAR_4;
 VAR_6 += VAR_7 * VAR_4;
 VAR_7 = VAR_7 * VAR_8 + 1;

 while (VAR_7 <= VAR_5 && VAR_6 < VAR_2 + VAR_3) {
  daddr_t VAR_9;

  VAR_9 = VAR_6 + VAR_4 - VAR_2;
  if (VAR_9 > VAR_3)
   VAR_9 = VAR_3;

  if (VAR_1->bm_bighint == (daddr_t)-1)
   FUNC_1("blst_meta_free: freeing unexpected range");

  if (VAR_8 == 1)
   FUNC_0(&VAR_1[VAR_7], VAR_2, VAR_9);
  else
   FUNC_3(&VAR_1[VAR_7], VAR_2, VAR_9, VAR_4,
           VAR_8 - 1, VAR_6);
  if (VAR_1->bm_bighint < VAR_1[VAR_7].bm_bighint)
      VAR_1->bm_bighint = VAR_1[VAR_7].bm_bighint;
  VAR_3 -= VAR_9;
  VAR_2 += VAR_9;
  VAR_6 += VAR_4;
  VAR_7 += VAR_8;
 }
}
