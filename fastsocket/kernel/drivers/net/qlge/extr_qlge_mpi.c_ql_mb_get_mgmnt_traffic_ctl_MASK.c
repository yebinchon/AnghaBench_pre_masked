
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;
struct mbox_params {int in_count; int out_count; scalar_t__* mbox_out; int * mbox_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ,char*) ;
 int FUNC_3 (struct ql_adapter*,struct mbox_params*) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_8, u32 *VAR_9)
{
 struct mbox_params VAR_10;
 struct mbox_params *VAR_11 = &VAR_10;
 int VAR_12;

 FUNC_0(VAR_11, 0, sizeof(struct mbox_params));
 *VAR_9 = 0;

 VAR_11->in_count = 1;
 VAR_11->out_count = 1;

 VAR_11->mbox_in[0] = VAR_3;

 VAR_12 = FUNC_3(VAR_8, VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11->mbox_out[0] == VAR_5) {
  *VAR_9 = VAR_11->mbox_in[1];
  return VAR_12;
 }

 if (VAR_11->mbox_out[0] == VAR_6) {
   FUNC_2(VAR_8, VAR_7, VAR_2, VAR_8->ndev,
     "Command not supported by firmware version.\n");
  VAR_12 = -VAR_0;
 } else if (VAR_11->mbox_out[0] == VAR_4) {
  FUNC_1(VAR_8, VAR_7, VAR_8->ndev,
     "Failed to get MPI traffic control.\n");
  VAR_12 = -VAR_1;
 }
 return VAR_12;
}
