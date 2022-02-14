
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned short device; } ;


 unsigned short VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct qlcnic_adapter *VAR_1)
{
 unsigned short VAR_2 = VAR_1->pdev->device;

 return (VAR_2 == VAR_0) ? 1 : 0;
}
