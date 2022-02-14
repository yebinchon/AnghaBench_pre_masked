
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ppnum_t ;
struct TYPE_3__ {scalar_t__ alloc_down; scalar_t__ alloc_up; } ;
typedef TYPE_1__ pmap_memory_region_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;

boolean_t
FUNC_1(
           ppnum_t *VAR_9)
{
 pmap_memory_region_t *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_9))
  return VAR_1;

 if (VAR_2) {
  for (VAR_11 = VAR_7 - 1; VAR_11 >= 0; VAR_11--) {
   VAR_10 = &VAR_8[VAR_11];

   if (VAR_10->alloc_down >= VAR_10->alloc_up) {
    *VAR_9 = VAR_10->alloc_down--;
    VAR_2--;

    if (*VAR_9 > VAR_6)
     VAR_6 = *VAR_9;

                                if (VAR_5 == 0 || *VAR_9 < VAR_5)
                                        VAR_5 = *VAR_9;

                                if (VAR_4 == 0 || *VAR_9 < VAR_4)
                                        VAR_4 = *VAR_9;

                                if (*VAR_9 > VAR_3)
                                        VAR_3 = *VAR_9;

    return VAR_1;
   }
  }
 }
 return VAR_0;
}
