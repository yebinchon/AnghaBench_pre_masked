
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_1__* pdev; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2, u8 VAR_3)
{
 struct qlcnic_nic_req VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(struct qlcnic_nic_req));

 VAR_4.qhdr = FUNC_0(VAR_1 << 23);
 VAR_4.req_hdr = FUNC_0(VAR_0 |
  ((u64) VAR_2->portnum << 16) | ((u64) 0x1 << 32));

 VAR_4.words[0] = FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_2, (struct cmd_desc_type0 *)&VAR_4, 1);
 if (VAR_5 != 0)
  FUNC_1(&VAR_2->pdev->dev, "%sting loopback mode failed\n",
    VAR_3 ? "Set" : "Reset");
 return VAR_5;
}
