
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int boolean_t ;
struct TYPE_2__ {size_t n_debugids; int* debugids; int types; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;

boolean_t
FUNC_2(uint32_t VAR_5)
{

 if (FUNC_1(VAR_5) == VAR_0) {
  return VAR_1;
 }






 for (uint8_t VAR_6 = 0; VAR_6 < VAR_4->n_debugids; VAR_6++) {
  uint32_t VAR_7 =
   VAR_4->debugids[VAR_6];
  uint32_t VAR_8 = VAR_3[FUNC_0(VAR_4->types, VAR_6)];

  if ((VAR_5 & VAR_8) == VAR_7) {
   return VAR_2;
  }
 }

 return VAR_1;
}
