
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ql_adapter {int ndev; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; void** mbox_in; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct mbox_params*,int ,int) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_5 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_6(struct ql_adapter *VAR_4, u64 VAR_5, u32 VAR_6,
 u32 VAR_7)
{
 int VAR_8 = 0;
 struct mbox_params VAR_9;
 struct mbox_params *VAR_10 = &VAR_9;

 FUNC_3(VAR_10, 0, sizeof(struct mbox_params));

 VAR_10->in_count = 9;
 VAR_10->out_count = 1;

 VAR_10->mbox_in[0] = VAR_1;
 VAR_10->mbox_in[1] = FUNC_0(VAR_6);
 VAR_10->mbox_in[2] = FUNC_2(VAR_5);
 VAR_10->mbox_in[3] = FUNC_0(VAR_5);
 VAR_10->mbox_in[4] = FUNC_2(VAR_7);
 VAR_10->mbox_in[5] = FUNC_0(VAR_7);
 VAR_10->mbox_in[6] = FUNC_2(FUNC_1(VAR_5));
 VAR_10->mbox_in[7] = FUNC_0(FUNC_1(VAR_5));
 VAR_10->mbox_in[8] = FUNC_2(VAR_6);


 VAR_8 = FUNC_5(VAR_4, VAR_10);
 if (VAR_8)
  return VAR_8;

 if (VAR_10->mbox_out[0] != VAR_2) {
  FUNC_4(VAR_4, VAR_3, VAR_4->ndev, "Failed to dump risc RAM.\n");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
