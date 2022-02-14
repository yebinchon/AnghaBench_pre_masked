
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_adapter {TYPE_2__* npars; TYPE_1__* ahw; } ;
struct TYPE_4__ {scalar_t__ pci_func; } ;
struct TYPE_3__ {int act_pci_func; } ;



__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ahw->act_pci_func; VAR_2++) {
  if (VAR_0->npars[VAR_2].pci_func == VAR_1)
   return VAR_2;
 }

 return -1;
}
