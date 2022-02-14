
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_vport {scalar_t__ handle; } ;
struct qlcnic_sriov {TYPE_2__* vf_info; scalar_t__ vp_handle; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {scalar_t__ pci_func; struct qlcnic_sriov* sriov; } ;


 int FUNC_0 (struct qlcnic_adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_0,
            u8 VAR_1)
{
 struct qlcnic_sriov *VAR_2 = VAR_0->ahw->sriov;
 struct qlcnic_vport *VAR_3;
 int VAR_4;

 if (VAR_0->ahw->pci_func == VAR_1) {
  VAR_2->vp_handle = 0;
 } else {
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 < 0)
   return;
  VAR_3 = VAR_2->vf_info[VAR_4].vp;
  VAR_3->handle = 0;
 }
}
