
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
struct ql_adapter {TYPE_1__* ndev; } ;
struct mbox_params {int in_count; int out_count; int* mbox_in; scalar_t__* mbox_out; } ;
struct TYPE_2__ {scalar_t__* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbox_params*,int ,int) ;
 int FUNC_1 (struct ql_adapter*,int ,TYPE_1__*,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;

int FUNC_3(struct ql_adapter *VAR_4, u32 VAR_5)
{
 struct mbox_params VAR_6;
 struct mbox_params *VAR_7 = &VAR_6;
 int VAR_8;
 u8 *VAR_9 = VAR_4->ndev->dev_addr;

 FUNC_0(VAR_7, 0, sizeof(struct mbox_params));

 VAR_7->in_count = 8;
 VAR_7->out_count = 1;

 VAR_7->mbox_in[0] = VAR_1;
 if (VAR_5) {
  VAR_7->mbox_in[1] = (u32)VAR_9[0];
  VAR_7->mbox_in[2] = (u32)VAR_9[1];
  VAR_7->mbox_in[3] = (u32)VAR_9[2];
  VAR_7->mbox_in[4] = (u32)VAR_9[3];
  VAR_7->mbox_in[5] = (u32)VAR_9[4];
  VAR_7->mbox_in[6] = (u32)VAR_9[5];
  VAR_7->mbox_in[7] = 0;
 } else {
  VAR_7->mbox_in[1] = 0;
  VAR_7->mbox_in[2] = 1;
  VAR_7->mbox_in[3] = 1;
  VAR_7->mbox_in[4] = 1;
  VAR_7->mbox_in[5] = 1;
  VAR_7->mbox_in[6] = 1;
  VAR_7->mbox_in[7] = 0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->mbox_out[0] != VAR_2) {
  FUNC_1(VAR_4, VAR_3, VAR_4->ndev, "Failed to set WOL mode.\n");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
