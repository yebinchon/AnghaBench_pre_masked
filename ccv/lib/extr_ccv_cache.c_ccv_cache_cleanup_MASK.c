
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rnum; int origin; scalar_t__ age; scalar_t__ size; int ffree; } ;
typedef TYPE_1__ ccv_cache_t ;
typedef int ccv_cache_index_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(ccv_cache_t* VAR_0)
{
 if (VAR_0->rnum > 0)
 {
  FUNC_0(&VAR_0->origin, VAR_0->ffree);
  VAR_0->size = 0;
  VAR_0->age = 0;
  VAR_0->rnum = 0;
  FUNC_1(&VAR_0->origin, 0, sizeof(ccv_cache_index_t));
 }
}
