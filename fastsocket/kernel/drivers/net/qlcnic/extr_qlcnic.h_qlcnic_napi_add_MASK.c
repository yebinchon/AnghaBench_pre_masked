
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* napi_add ) (struct qlcnic_adapter*,struct net_device*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0,
      struct net_device *VAR_1)
{
 return VAR_0->nic_ops->napi_add(VAR_0, VAR_1);
}
