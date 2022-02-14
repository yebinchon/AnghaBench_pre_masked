
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arm_saved_state {scalar_t__* r; } ;
struct TYPE_2__ {int mach_trap_arg_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 TYPE_1__* VAR_3 ;

void
FUNC_2(
     struct arm_saved_state * VAR_4,
     unsigned int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8[3] = {0, 0, 0};

 VAR_7 = VAR_3[VAR_5].mach_trap_arg_count;

 if (VAR_7 > 3)
  VAR_7 = 3;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  VAR_8[VAR_6] = (int) VAR_4->r[VAR_6];

 FUNC_0(VAR_2,
  FUNC_1(VAR_1, (VAR_5)) | VAR_0,
  VAR_8[0], VAR_8[1], VAR_8[2], 0, 0);

}
