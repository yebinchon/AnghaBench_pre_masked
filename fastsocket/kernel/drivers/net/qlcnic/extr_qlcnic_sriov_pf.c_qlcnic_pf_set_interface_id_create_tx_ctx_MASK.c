
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int pci_func; } ;


 int FUNC_0 (struct qlcnic_adapter*,int ) ;

void FUNC_1(struct qlcnic_adapter *VAR_0,
           u32 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0,
      VAR_0->ahw->pci_func);
 *VAR_1 |= VAR_2 << 16;
}
