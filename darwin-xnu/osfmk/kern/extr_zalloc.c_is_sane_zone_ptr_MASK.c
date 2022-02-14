
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;
struct TYPE_3__ {int allows_foreign; scalar_t__ collectable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline boolean_t
FUNC_2(zone_t VAR_4,
                 vm_offset_t VAR_5,
   size_t VAR_6)
{

 if (FUNC_0((VAR_5 & (sizeof(vm_offset_t) - 1)) != 0))
  return VAR_0;


 if (FUNC_0(!FUNC_1(VAR_5)))
  return VAR_0;






 if (VAR_4->collectable && !VAR_4->allows_foreign) {

  if (VAR_5 >= VAR_3 &&
     (VAR_5 + VAR_6 - 1) < VAR_2 )
   return VAR_1;

  return VAR_0;
 }

 return VAR_1;
}
