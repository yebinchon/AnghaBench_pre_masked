
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_4__ {int bmu_bitmap; scalar_t__ bmu_avail; } ;
struct TYPE_5__ {int bm_bighint; TYPE_1__ u; } ;
typedef TYPE_2__ blmeta_t ;
typedef int blist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(blmeta_t *VAR_2, daddr_t VAR_3, daddr_t VAR_4,
        daddr_t VAR_5, blist_t VAR_6, daddr_t VAR_7)
{
 int VAR_8;
 int VAR_9;





 if (VAR_4 == VAR_0) {
  u_daddr_t VAR_10 = VAR_2->u.bmu_bitmap;

  if (VAR_10 == (u_daddr_t)-1) {
   FUNC_0(VAR_6, VAR_3, VAR_7);
  } else if (VAR_10 != 0) {

   int VAR_11;

   for (VAR_11 = 0; VAR_11 < VAR_0 && VAR_11 < VAR_7; ++VAR_11)
    if (VAR_10 & (1 << VAR_11))
     FUNC_0(VAR_6, VAR_3 + VAR_11, 1);







  }
  return;
 }
 if (VAR_2->u.bmu_avail == 0)
  return;
 if (VAR_2->u.bmu_avail == VAR_4) {



  if (VAR_7 < VAR_4)
   FUNC_0(VAR_6, VAR_3, VAR_7);
  else
   FUNC_0(VAR_6, VAR_3, VAR_4);
  return;
 }

 VAR_4 >>= VAR_1;
 VAR_8 = (VAR_5 >> VAR_1);

 for (VAR_9 = 1; VAR_7 && VAR_9 <= VAR_5; VAR_9 += VAR_8) {
  if (VAR_2[VAR_9].bm_bighint == (daddr_t)-1)
   break;

  if (VAR_7 >= VAR_4) {
   FUNC_1(
       &VAR_2[VAR_9],
       VAR_3,
       VAR_4,
       VAR_8 - 1,
       VAR_6,
       VAR_4
   );
   VAR_7 -= VAR_4;
  } else {
   if (VAR_7) {
    FUNC_1(
        &VAR_2[VAR_9],
        VAR_3,
        VAR_4,
        VAR_8 - 1,
        VAR_6,
        VAR_7
    );
   }
   VAR_7 = 0;
  }
  VAR_3 += VAR_4;
 }
}
