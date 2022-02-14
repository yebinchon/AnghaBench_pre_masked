
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_1__* netdev; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_2, int VAR_3)
{
 struct qlcnic_nic_req VAR_4;
 u64 VAR_5;
 int VAR_6;
 FUNC_2(&VAR_4, 0, sizeof(struct qlcnic_nic_req));
 VAR_4.qhdr = FUNC_0(VAR_1 << 23);

 VAR_5 = VAR_0 | ((u64)VAR_2->portnum << 16);
 VAR_4.req_hdr = FUNC_0(VAR_5);
 VAR_4.words[0] = FUNC_0(VAR_3 | (VAR_3 << 8));
 VAR_6 = FUNC_3(VAR_2, (struct cmd_desc_type0 *)&VAR_4, 1);
 if (VAR_6 != 0)
  FUNC_1(&VAR_2->netdev->dev,
    "could not configure link notification\n");

 return VAR_6;
}
