
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_daddr_t ;
typedef int daddr_t ;
struct TYPE_4__ {int bmu_bitmap; } ;
struct TYPE_5__ {int bm_bighint; TYPE_1__ u; } ;
typedef TYPE_2__ blmeta_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(blmeta_t *VAR_1, daddr_t VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2 & (VAR_0 - 1);
 u_daddr_t VAR_5;

 VAR_5 = ((u_daddr_t)-1 << VAR_4) &
     ((u_daddr_t)-1 >> (VAR_0 - VAR_3 - VAR_4));

 if (VAR_1->u.bmu_bitmap & VAR_5)
  FUNC_0("blst_radix_free: freeing free block");
 VAR_1->u.bmu_bitmap |= VAR_5;







 VAR_1->bm_bighint = VAR_0;
}
