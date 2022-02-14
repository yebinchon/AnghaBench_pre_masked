
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ppnum_t ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ alloc_up; scalar_t__ alloc_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__* VAR_7 ;

boolean_t
FUNC_0(
        ppnum_t *VAR_8)
{
 if (VAR_2) while (VAR_6 < VAR_5) {
  if (VAR_7[VAR_6].alloc_up >
      VAR_7[VAR_6].alloc_down) {
   VAR_6++;
   continue;
  }
  *VAR_8 = VAR_7[VAR_6].alloc_up++;
  VAR_2--;

  if (*VAR_8 > VAR_4)
   VAR_4 = *VAR_8;

  if (VAR_3 == 0 || *VAR_8 < VAR_3)
   VAR_3 = *VAR_8;

  return VAR_1;
 }
 return VAR_0;
}
