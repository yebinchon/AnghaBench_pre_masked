
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mbox_out; } ;
struct ql_adapter {int ndev; TYPE_1__ idc_mbc; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_3(struct ql_adapter *VAR_4)
{
 struct mbox_params VAR_5;
 struct mbox_params *VAR_6 = &VAR_5;
 int VAR_7 = 0;

 FUNC_0(VAR_6, 0, sizeof(struct mbox_params));

 VAR_6->in_count = 5;
 VAR_6->out_count = 1;

 VAR_6->mbox_in[0] = VAR_1;
 VAR_6->mbox_in[1] = VAR_4->idc_mbc.mbox_out[1];
 VAR_6->mbox_in[2] = VAR_4->idc_mbc.mbox_out[2];
 VAR_6->mbox_in[3] = VAR_4->idc_mbc.mbox_out[3];
 VAR_6->mbox_in[4] = VAR_4->idc_mbc.mbox_out[4];

 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->mbox_out[0] != VAR_2) {
  FUNC_1(VAR_4, VAR_3, VAR_4->ndev, "Failed IDC ACK send.\n");
  VAR_7 = -VAR_0;
 }
 return VAR_7;
}
