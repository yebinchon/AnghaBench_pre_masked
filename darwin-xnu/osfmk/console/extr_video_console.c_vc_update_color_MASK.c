
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_2__ {size_t v_depth; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t* VAR_2 ;
 void*** VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(int VAR_5, boolean_t VAR_6)
{
 if (!VAR_4.v_depth)
  return;
 if (VAR_6) {
         VAR_1 = VAR_3[VAR_5][VAR_2[VAR_4.v_depth]];
 } else {
  VAR_0 = VAR_3[VAR_5][VAR_2[VAR_4.v_depth]];
 }
}
