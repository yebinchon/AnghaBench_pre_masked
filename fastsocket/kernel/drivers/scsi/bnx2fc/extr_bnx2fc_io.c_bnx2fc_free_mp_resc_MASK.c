
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fcoe_bd_ctx {int dummy; } ;
struct bnx2fc_mp_req {int * resp_buf; int resp_buf_dma; int * req_buf; int req_buf_dma; int * mp_resp_bd; int mp_resp_bd_dma; int * mp_req_bd; int mp_req_bd_dma; scalar_t__ tm_flags; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {TYPE_2__* pcidev; } ;
struct bnx2fc_cmd {TYPE_1__* port; struct bnx2fc_mp_req mp_req; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct bnx2fc_interface* priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2fc_cmd *VAR_1)
{
 struct bnx2fc_mp_req *VAR_2 = &(VAR_1->mp_req);
 struct bnx2fc_interface *VAR_3 = VAR_1->port->priv;
 struct bnx2fc_hba *VAR_4 = VAR_3->hba;
 size_t VAR_5 = sizeof(struct fcoe_bd_ctx);


 VAR_2->tm_flags = 0;
 if (VAR_2->mp_req_bd) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_5,
         VAR_2->mp_req_bd,
         VAR_2->mp_req_bd_dma);
  VAR_2->mp_req_bd = ((void*)0);
 }
 if (VAR_2->mp_resp_bd) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_5,
         VAR_2->mp_resp_bd,
         VAR_2->mp_resp_bd_dma);
  VAR_2->mp_resp_bd = ((void*)0);
 }
 if (VAR_2->req_buf) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_0,
         VAR_2->req_buf,
         VAR_2->req_buf_dma);
  VAR_2->req_buf = ((void*)0);
 }
 if (VAR_2->resp_buf) {
  FUNC_0(&VAR_4->pcidev->dev, VAR_0,
         VAR_2->resp_buf,
         VAR_2->resp_buf_dma);
  VAR_2->resp_buf = ((void*)0);
 }
}
