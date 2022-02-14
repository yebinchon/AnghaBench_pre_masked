
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_1__* netdev; scalar_t__ portnum; int state; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_nic_req VAR_5;
 u64 VAR_6;
 int VAR_7;

 if (!FUNC_4(VAR_3, &VAR_4->state))
  return 0;

 FUNC_2(&VAR_5, 0, sizeof(struct qlcnic_nic_req));
 VAR_5.qhdr = FUNC_0(VAR_1 << 23);

 VAR_6 = VAR_0 |
  ((u64)VAR_4->portnum << 16) |
  ((u64)VAR_2 << 56) ;

 VAR_5.req_hdr = FUNC_0(VAR_6);

 VAR_7 = FUNC_3(VAR_4, (struct cmd_desc_type0 *)&VAR_5, 1);
 if (VAR_7 != 0)
  FUNC_1(&VAR_4->netdev->dev,
     "could not cleanup lro flows\n");

 return VAR_7;
}
