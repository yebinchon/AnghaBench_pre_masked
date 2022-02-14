
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vport {int vlan; } ;
struct qlcnic_vf_info {int pci_func; int rx_ctx_id; struct qlcnic_vport* vp; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_vport*,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_3,
       struct qlcnic_vf_info *VAR_4,
       struct qlcnic_cmd_args *VAR_5)
{
 struct qlcnic_vport *VAR_6 = VAR_4->vp;
 int VAR_7 = -VAR_0;

 if (VAR_6->vlan)
  return VAR_7;

 if (!VAR_4->rx_ctx_id) {
  VAR_6->vlan = VAR_5->req.arg[1] >> 16;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_4->pci_func,
       0, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6->vlan = VAR_5->req.arg[1] >> 16;
 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_4->pci_func,
       VAR_6->vlan, VAR_1);

 if (VAR_7) {
  FUNC_0(VAR_3, VAR_6, VAR_4->pci_func,
         0, VAR_1);
  VAR_6->vlan = 0;
 }

 return VAR_7;
}
