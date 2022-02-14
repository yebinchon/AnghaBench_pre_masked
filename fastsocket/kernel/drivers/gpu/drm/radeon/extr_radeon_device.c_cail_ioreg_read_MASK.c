
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct card_info {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(struct card_info *VAR_0, uint32_t VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev->dev_private;
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_1*4);
 return VAR_3;
}
