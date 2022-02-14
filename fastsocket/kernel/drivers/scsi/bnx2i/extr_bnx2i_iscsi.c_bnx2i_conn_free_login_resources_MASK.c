
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2i_hba {TYPE_1__* pcidev; } ;
struct TYPE_4__ {int * req_buf; int req_dma_addr; int * resp_buf; int resp_dma_addr; int * req_bd_tbl; int req_bd_dma; int * resp_bd_tbl; int resp_bd_dma; } ;
struct bnx2i_conn {TYPE_2__ gen_pdu; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_hba *VAR_2,
         struct bnx2i_conn *VAR_3)
{
 if (VAR_3->gen_pdu.resp_bd_tbl) {
  FUNC_0(&VAR_2->pcidev->dev, VAR_1,
      VAR_3->gen_pdu.resp_bd_tbl,
      VAR_3->gen_pdu.resp_bd_dma);
  VAR_3->gen_pdu.resp_bd_tbl = ((void*)0);
 }

 if (VAR_3->gen_pdu.req_bd_tbl) {
  FUNC_0(&VAR_2->pcidev->dev, VAR_1,
      VAR_3->gen_pdu.req_bd_tbl,
      VAR_3->gen_pdu.req_bd_dma);
  VAR_3->gen_pdu.req_bd_tbl = ((void*)0);
 }

 if (VAR_3->gen_pdu.resp_buf) {
  FUNC_0(&VAR_2->pcidev->dev,
      VAR_0,
      VAR_3->gen_pdu.resp_buf,
      VAR_3->gen_pdu.resp_dma_addr);
  VAR_3->gen_pdu.resp_buf = ((void*)0);
 }

 if (VAR_3->gen_pdu.req_buf) {
  FUNC_0(&VAR_2->pcidev->dev,
      VAR_0,
      VAR_3->gen_pdu.req_buf,
      VAR_3->gen_pdu.req_dma_addr);
  VAR_3->gen_pdu.req_buf = ((void*)0);
 }
}
