
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct iser_tx_desc {TYPE_3__* tx_sg; int dma_addr; } ;
struct iser_device {TYPE_4__* mr; int ib_device; } ;
struct iscsi_task {struct iscsi_iser_task* dd_data; TYPE_1__* conn; } ;
struct iscsi_iser_task {struct iscsi_iser_conn* iser_conn; } ;
struct iscsi_iser_conn {TYPE_2__* ib_conn; } ;
struct TYPE_8__ {int lkey; } ;
struct TYPE_7__ {int lkey; int length; int addr; } ;
struct TYPE_6__ {struct iser_device* device; } ;
struct TYPE_5__ {struct iscsi_iser_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(struct iscsi_task *VAR_3,
      struct iser_tx_desc *VAR_4)
{
 struct iscsi_iser_conn *VAR_5 = VAR_3->conn->dd_data;
 struct iser_device *VAR_6 = VAR_5->ib_conn->device;
 struct iscsi_iser_task *VAR_7 = VAR_3->dd_data;
 u64 VAR_8;

 VAR_8 = FUNC_0(VAR_6->ib_device, (void *)VAR_4,
    VAR_2, VAR_0);
 if (FUNC_1(VAR_6->ib_device, VAR_8))
  return -VAR_1;

 VAR_4->dma_addr = VAR_8;
 VAR_4->tx_sg[0].addr = VAR_4->dma_addr;
 VAR_4->tx_sg[0].length = VAR_2;
 VAR_4->tx_sg[0].lkey = VAR_6->mr->lkey;

 VAR_7->iser_conn = VAR_5;
 return 0;
}
