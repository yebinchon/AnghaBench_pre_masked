
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_2__* netdev; TYPE_1__* ahw; scalar_t__ portnum; int state; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int capabilities2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct qlcnic_adapter *VAR_8, int VAR_9)
{
 struct qlcnic_nic_req VAR_10;
 u64 VAR_11;
 int VAR_12;

 if (!FUNC_4(VAR_7, &VAR_8->state))
  return 0;

 FUNC_2(&VAR_10, 0, sizeof(struct qlcnic_nic_req));

 VAR_10.qhdr = FUNC_0(VAR_4 << 23);

 VAR_11 = VAR_3 | ((u64)VAR_8->portnum << 16);
 VAR_10.req_hdr = FUNC_0(VAR_11);

 VAR_11 = 0;
 if (VAR_9) {
  VAR_11 = VAR_0 | VAR_5;
  if (VAR_8->ahw->capabilities2 & VAR_2)
   VAR_11 |= VAR_1 |
    VAR_6;
 }

 VAR_10.words[0] = FUNC_0(VAR_11);

 VAR_12 = FUNC_3(VAR_8, (struct cmd_desc_type0 *)&VAR_10, 1);
 if (VAR_12 != 0)
  FUNC_1(&VAR_8->netdev->dev,
   "Could not send configure hw lro request\n");

 return VAR_12;
}
