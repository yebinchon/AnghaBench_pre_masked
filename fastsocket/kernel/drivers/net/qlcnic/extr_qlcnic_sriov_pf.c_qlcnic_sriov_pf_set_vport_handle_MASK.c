
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u16 ;
struct qlcnic_vport {void* handle; } ;
struct qlcnic_sriov {TYPE_2__* vf_info; void* vp_handle; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {scalar_t__ pci_func; struct qlcnic_sriov* sriov; } ;


 int FUNC_0 (struct qlcnic_adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_0,
          u16 VAR_1, u8 VAR_2)
{
 struct qlcnic_sriov *VAR_3 = VAR_0->ahw->sriov;
 struct qlcnic_vport *VAR_4;
 int VAR_5;

 if (VAR_0->ahw->pci_func == VAR_2) {
  VAR_3->vp_handle = VAR_1;
 } else {
  VAR_5 = FUNC_0(VAR_0, VAR_2);
  if (VAR_5 < 0)
   return;
  VAR_4 = VAR_3->vf_info[VAR_5].vp;
  VAR_4->handle = VAR_1;
 }
}
