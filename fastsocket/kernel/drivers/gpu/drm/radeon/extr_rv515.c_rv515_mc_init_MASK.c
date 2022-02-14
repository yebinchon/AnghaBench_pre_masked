
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gtt_base_align; } ;
struct radeon_device {int flags; TYPE_1__ mc; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*,int ) ;
 int FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_1)
{

 FUNC_4(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, &VAR_1->mc, 0);
 VAR_1->mc.gtt_base_align = 0;
 if (!(VAR_1->flags & VAR_0))
  FUNC_1(VAR_1, &VAR_1->mc);
 FUNC_2(VAR_1);
}
