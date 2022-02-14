
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; int fw_rev_id; } ;
struct mbox_params {int out_count; int * mbox_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*,...) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_2, struct mbox_params *VAR_3)
{
 int VAR_4;

 VAR_3->out_count = 2;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, VAR_0, VAR_2->ndev, "Firmware did not initialize!\n");
 } else {
  FUNC_0(VAR_2, VAR_0, VAR_2->ndev, "Firmware Revision  = 0x%.08x.\n",
     VAR_3->mbox_out[1]);
  VAR_2->fw_rev_id = VAR_3->mbox_out[1];
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
      "Failed to init CAM/Routing tables.\n");
 }
}
