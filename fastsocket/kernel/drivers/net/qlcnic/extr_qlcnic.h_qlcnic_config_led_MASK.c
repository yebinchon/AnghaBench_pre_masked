
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct TYPE_2__ {int (* config_led ) (struct qlcnic_adapter*,int ,int ) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 return VAR_0->nic_ops->config_led(VAR_0, VAR_1, VAR_2);
}
