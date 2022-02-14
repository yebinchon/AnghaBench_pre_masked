
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;
typedef int ext_diag_registers ;
typedef int diag_registers ;


 int VAR_0 ;
 int VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_2(VAR_3);
 else
  VAR_4 = sizeof(ext_diag_registers) + sizeof(diag_registers);

 return VAR_1 + VAR_4 + VAR_0 + 1;
}
