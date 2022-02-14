
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg_safe_bm_size; int reg_safe_bm; } ;
struct TYPE_4__ {TYPE_1__ r300; } ;
struct radeon_device {TYPE_2__ config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_1)
{
 VAR_1->config.r300.reg_safe_bm = VAR_0;
 VAR_1->config.r300.reg_safe_bm_size = FUNC_0(VAR_0);
}
