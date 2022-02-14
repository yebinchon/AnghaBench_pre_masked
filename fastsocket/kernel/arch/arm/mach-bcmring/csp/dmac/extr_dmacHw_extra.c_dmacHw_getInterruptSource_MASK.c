
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int dmacHw_HANDLE_t ;
struct TYPE_3__ {int channel; int module; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_2 ;

dmacHw_HANDLE_t FUNC_4(void)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 + VAR_1; VAR_3++) {
  if ((FUNC_3(VAR_2[VAR_3].module) &
       ((0x00000001 << VAR_2[VAR_3].channel)))
      || (FUNC_1(VAR_2[VAR_3].module) &
   ((0x00000001 << VAR_2[VAR_3].channel)))
      || (FUNC_2(VAR_2[VAR_3].module) &
   ((0x00000001 << VAR_2[VAR_3].channel)))
      ) {
   return FUNC_0(&VAR_2[VAR_3]);
  }
 }
 return FUNC_0(((void*)0));
}
