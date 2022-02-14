
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef void* uint8_t ;
typedef void* uint32_t ;
typedef int instr ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int lsap_probe; int * lsap_patch_point; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static
void FUNC_1(boolean_t VAR_4, int VAR_5)
{
#pragma unused(active)
 int VAR_6;





 for (VAR_6 = 0; VAR_3[VAR_6].lsap_patch_point; VAR_6++) {
  if (VAR_5 == VAR_3[VAR_6].lsap_probe)

  {
   uint8_t VAR_7;
   VAR_7 = (VAR_4 ? VAR_1 : VAR_2 );
   (void) FUNC_0( (vm_offset_t)&VAR_7, *(VAR_3[VAR_6].lsap_patch_point),
        sizeof(VAR_7));
  }
 }
}
