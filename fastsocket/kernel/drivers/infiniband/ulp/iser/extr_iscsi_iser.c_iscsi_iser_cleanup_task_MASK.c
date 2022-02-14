
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {int dma_addr; } ;
struct iser_device {int ib_device; } ;
struct iscsi_task {int sc; TYPE_1__* conn; struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {scalar_t__ status; struct iser_tx_desc desc; } ;
struct iscsi_iser_conn {TYPE_2__* ib_conn; } ;
struct TYPE_4__ {struct iser_device* device; } ;
struct TYPE_3__ {struct iscsi_iser_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct iscsi_iser_task*) ;

__attribute__((used)) static void FUNC_2(struct iscsi_task *VAR_4)
{
 struct iscsi_iser_task *VAR_5 = VAR_4->dd_data;
 struct iser_tx_desc *VAR_6 = &VAR_5->desc;

 struct iscsi_iser_conn *VAR_7 = VAR_4->conn->dd_data;
 struct iser_device *VAR_8 = VAR_7->ib_conn->device;

 FUNC_0(VAR_8->ib_device,
  VAR_6->dma_addr, VAR_1, VAR_0);


 if (!VAR_4->sc)
  return;

 if (VAR_5->status == VAR_3) {
  VAR_5->status = VAR_2;
  FUNC_1(VAR_5);
 }
}
