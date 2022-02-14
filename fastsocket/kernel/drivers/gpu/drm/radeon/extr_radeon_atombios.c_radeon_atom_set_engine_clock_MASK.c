
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {int ulTargetEngineClock; } ;
typedef TYPE_2__ SET_ENGINE_CLOCK_PS_ALLOCATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct radeon_device *VAR_2,
      uint32_t VAR_3)
{
 SET_ENGINE_CLOCK_PS_ALLOCATION VAR_4;
 int VAR_5 = FUNC_0(VAR_0, VAR_1);

 VAR_4.ulTargetEngineClock = FUNC_2(VAR_3);

 FUNC_1(VAR_2->mode_info.atom_context, VAR_5, (uint32_t *)&VAR_4);
}
