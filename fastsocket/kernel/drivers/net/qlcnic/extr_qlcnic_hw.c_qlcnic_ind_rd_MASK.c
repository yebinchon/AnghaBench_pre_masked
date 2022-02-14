
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int pci_base0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;
 int FUNC_2 (int,int ,int*) ;

int FUNC_3(struct qlcnic_adapter *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(VAR_1))
  FUNC_2(VAR_2, VAR_1->ahw->pci_base0, &VAR_3);
 else {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 == -VAR_0)
   return -VAR_0;
 }
 return VAR_3;
}
