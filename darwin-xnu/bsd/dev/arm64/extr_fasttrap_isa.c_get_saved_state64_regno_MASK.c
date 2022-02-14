
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int * x; int sp; int lr; int fp; } ;
typedef TYPE_1__ arm_saved_state64_t ;



__attribute__((used)) static uint64_t
FUNC_0(arm_saved_state64_t *VAR_0, uint32_t VAR_1, int VAR_2)
{

 switch (VAR_1) {
  case 29:
   return VAR_0->fp;
  case 30:
   return VAR_0->lr;
  case 31:

   if (VAR_2) {
    return 0;
   } else {
    return VAR_0->sp;
   }
  default:
   return VAR_0->x[VAR_1];
 }
}
