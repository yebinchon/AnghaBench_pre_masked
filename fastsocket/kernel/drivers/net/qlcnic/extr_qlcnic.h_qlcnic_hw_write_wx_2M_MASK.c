
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* write_reg ) (struct qlcnic_adapter*,int ,int ) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0,
     ulong VAR_1, u32 VAR_2)
{
 return VAR_0->ahw->hw_ops->write_reg(VAR_0, VAR_1, VAR_2);
}
