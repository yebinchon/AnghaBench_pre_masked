
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_daddr_t ;
typedef int daddr_t ;
struct TYPE_5__ {scalar_t__ bmu_avail; scalar_t__ bmu_bitmap; } ;
struct TYPE_6__ {int bm_bighint; TYPE_1__ u; } ;
typedef TYPE_2__ blmeta_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static daddr_t
FUNC_2(blmeta_t *VAR_3, daddr_t VAR_4, daddr_t VAR_5, daddr_t VAR_6,
  int VAR_7)
{
 int VAR_8;
 int VAR_9 = (VAR_7 >> VAR_1);

 if (VAR_3->u.bmu_avail == 0) {



  VAR_3->bm_bighint = VAR_5;
  return(VAR_2);
 }

 if (VAR_3->u.bmu_avail == VAR_6) {
  VAR_6 >>= VAR_1;





  for (VAR_8 = 1; VAR_8 <= VAR_7; VAR_8 += VAR_9) {
   if (VAR_3[VAR_8].bm_bighint == (daddr_t)-1)
    break;
   if (VAR_9 == 1) {
    VAR_3[VAR_8].u.bmu_bitmap = (u_daddr_t)-1;
    VAR_3[VAR_8].bm_bighint = VAR_0;
   } else {
    VAR_3[VAR_8].bm_bighint = VAR_6;
    VAR_3[VAR_8].u.bmu_avail = VAR_6;
   }
  }
 } else {
  VAR_6 >>= VAR_1;
 }

 for (VAR_8 = 1; VAR_8 <= VAR_7; VAR_8 += VAR_9) {
  if (VAR_5 <= VAR_3[VAR_8].bm_bighint) {



   daddr_t VAR_10;
   if (VAR_9 == 1)
    VAR_10 = FUNC_0(&VAR_3[VAR_8], VAR_4, VAR_5);
   else
    VAR_10 = FUNC_2(&VAR_3[VAR_8], VAR_4, VAR_5,
          VAR_6, VAR_9 - 1);
   if (VAR_10 != VAR_2) {
    VAR_3->u.bmu_avail -= VAR_5;
    if (VAR_3->bm_bighint > VAR_3->u.bmu_avail)
     VAR_3->bm_bighint = VAR_3->u.bmu_avail;
    return VAR_10;
   }
  } else if (VAR_3[VAR_8].bm_bighint == (daddr_t)-1) {



   break;
  } else if (VAR_5 > VAR_6) {




   FUNC_1("blist_meta_alloc: allocation too large");
  }
  VAR_4 += VAR_6;
 }




 if (VAR_3->bm_bighint >= VAR_5)
  VAR_3->bm_bighint = VAR_5 - 1;
 return(VAR_2);
}
