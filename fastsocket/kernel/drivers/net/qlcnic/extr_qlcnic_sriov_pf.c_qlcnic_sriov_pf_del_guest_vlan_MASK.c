
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_vport {scalar_t__ vlan; } ;
struct qlcnic_vf_info {int pci_func; int rx_ctx_id; struct qlcnic_vport* vp; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_vport*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_3,
       struct qlcnic_vf_info *VAR_4)

{
 struct qlcnic_vport *VAR_5 = VAR_4->vp;

 if (!VAR_5->vlan)
  return -VAR_0;

 if (!VAR_4->rx_ctx_id) {
  VAR_5->vlan = 0;
  return 0;
 }

 FUNC_0(VAR_3, VAR_5, VAR_4->pci_func,
        VAR_5->vlan, VAR_2);
 VAR_5->vlan = 0;
 FUNC_0(VAR_3, VAR_5, VAR_4->pci_func,
        0, VAR_1);
 return 0;
}
