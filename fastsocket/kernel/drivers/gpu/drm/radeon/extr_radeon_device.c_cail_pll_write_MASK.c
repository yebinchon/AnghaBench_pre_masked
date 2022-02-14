
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int (* pll_wreg ) (struct radeon_device*,int ,int ) ;} ;
struct card_info {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct card_info *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct radeon_device *VAR_3 = VAR_0->dev->dev_private;

 VAR_3->pll_wreg(VAR_3, VAR_1, VAR_2);
}
