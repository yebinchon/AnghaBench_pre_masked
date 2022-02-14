
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned short device; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct qlcnic_adapter *VAR_2,
     u16 VAR_3, u8 VAR_4)
{
 unsigned short VAR_5 = VAR_2->pdev->device;

 if ((VAR_5 == VAR_0) ||
     (VAR_5 == VAR_1))
  return VAR_3 | (VAR_4 << 15);
 else
  return VAR_3;
}
