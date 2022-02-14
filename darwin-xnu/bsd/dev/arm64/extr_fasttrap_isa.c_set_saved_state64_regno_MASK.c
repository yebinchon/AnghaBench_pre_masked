
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* register_t ;
struct TYPE_3__ {void** x; void* sp; void* lr; void* fp; } ;
typedef TYPE_1__ arm_saved_state64_t ;



__attribute__((used)) static void
FUNC_0(arm_saved_state64_t *VAR_0, uint32_t VAR_1, int VAR_2, register_t VAR_3)
{

 switch (VAR_1) {
  case 29:
   VAR_0->fp = VAR_3;
   break;
  case 30:
   VAR_0->lr = VAR_3;
   break;
  case 31:
   if (!VAR_2) {
    VAR_0->sp = VAR_3;
   }
   break;
  default:
   VAR_0->x[VAR_1] = VAR_3;
   break;
 }
}
