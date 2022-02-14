
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {int flags; TYPE_1__ mode_info; } ;
struct TYPE_4__ {int ulTargetMemoryClock; } ;
typedef TYPE_2__ SET_MEMORY_CLOCK_PS_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct radeon_device *VAR_3,
      uint32_t VAR_4)
{
 SET_MEMORY_CLOCK_PS_ALLOCATION VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3->flags & VAR_1)
  return;

 VAR_5.ulTargetMemoryClock = FUNC_2(VAR_4);

 FUNC_1(VAR_3->mode_info.atom_context, VAR_6, (uint32_t *)&VAR_5);
}
