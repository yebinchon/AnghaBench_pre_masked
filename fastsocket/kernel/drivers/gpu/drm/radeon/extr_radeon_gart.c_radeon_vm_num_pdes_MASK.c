
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pfn; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct radeon_device *VAR_1)
{
 return VAR_1->vm_manager.max_pfn >> VAR_0;
}
