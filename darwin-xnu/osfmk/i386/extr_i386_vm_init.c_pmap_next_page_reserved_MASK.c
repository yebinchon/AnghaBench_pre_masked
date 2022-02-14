
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ ppnum_t ;
struct TYPE_3__ {scalar_t__ alloc_up; scalar_t__ alloc_down; int attribute; int type; int end; int base; } ;
typedef TYPE_1__ pmap_memory_region_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 size_t* VAR_8 ;
 scalar_t__ VAR_9 ;

boolean_t
FUNC_1(ppnum_t *VAR_10) {
 if (VAR_9) {
  uint32_t VAR_11;
  pmap_memory_region_t *VAR_12;
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
   uint32_t VAR_13 = VAR_8[VAR_11];
   VAR_12 = &VAR_6[VAR_13];
   if (VAR_12->alloc_up <= VAR_12->alloc_down) {
    *VAR_10 = VAR_12->alloc_up++;
    VAR_2--;

    if (*VAR_10 > VAR_4)
     VAR_4 = *VAR_10;

    if (VAR_3 == 0 || *VAR_10 < VAR_3)
     VAR_3 = *VAR_10;

    VAR_7++;





    return VAR_1;
   }
  }
 }
 return VAR_0;
}
