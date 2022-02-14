
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_vf_info {int state; int pci_func; struct qlcnic_adapter* adapter; } ;
struct TYPE_4__ {scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_bc_trans {TYPE_1__* req_hdr; struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {int dummy; } ;
struct TYPE_3__ {scalar_t__ cmd_op; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_adapter*,int,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_bc_trans *VAR_2,
        struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_vf_info *VAR_4 = VAR_2->vf;
 struct qlcnic_adapter *VAR_5 = VAR_4->adapter;
 int VAR_6;
 u16 VAR_7 = VAR_4->pci_func;

 VAR_3->rsp.arg[0] = VAR_2->req_hdr->cmd_op;
 VAR_3->rsp.arg[0] |= (1 << 16);

 if (VAR_2->req_hdr->cmd_op == VAR_0) {
  VAR_6 = FUNC_1(VAR_5, 1, VAR_7);
  if (!VAR_6) {
   VAR_6 = FUNC_2(VAR_5, VAR_7);
   if (VAR_6)
    FUNC_1(VAR_5, 0, VAR_7);
  }
 } else {
  VAR_6 = FUNC_1(VAR_5, 0, VAR_7);
 }

 if (VAR_6)
  goto err_out;

 VAR_3->rsp.arg[0] |= (1 << 25);

 if (VAR_2->req_hdr->cmd_op == VAR_0)
  FUNC_3(VAR_1, &VAR_4->state);
 else
  FUNC_0(VAR_1, &VAR_4->state);

 return VAR_6;

err_out:
 VAR_3->rsp.arg[0] |= (2 << 25);
 return VAR_6;
}
