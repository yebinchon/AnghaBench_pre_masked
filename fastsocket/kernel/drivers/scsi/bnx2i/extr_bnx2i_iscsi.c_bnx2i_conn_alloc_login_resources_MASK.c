
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2i_hba {TYPE_1__* pcidev; } ;
struct TYPE_5__ {int * req_buf; int req_dma_addr; int * resp_buf; int resp_dma_addr; int * req_bd_tbl; int req_bd_dma; int * resp_bd_tbl; int resp_bd_dma; int * resp_wr_ptr; int resp_buf_size; int * req_wr_ptr; scalar_t__ req_buf_size; } ;
struct bnx2i_conn {TYPE_3__* cls_conn; TYPE_2__ gen_pdu; } ;
struct TYPE_6__ {int dd_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct bnx2i_hba *VAR_5,
         struct bnx2i_conn *VAR_6)
{

 VAR_6->gen_pdu.req_buf =
  FUNC_0(&VAR_5->pcidev->dev,
       VAR_2,
       &VAR_6->gen_pdu.req_dma_addr,
       VAR_1);
 if (VAR_6->gen_pdu.req_buf == ((void*)0))
  goto login_req_buf_failure;

 VAR_6->gen_pdu.req_buf_size = 0;
 VAR_6->gen_pdu.req_wr_ptr = VAR_6->gen_pdu.req_buf;

 VAR_6->gen_pdu.resp_buf =
  FUNC_0(&VAR_5->pcidev->dev,
       VAR_2,
       &VAR_6->gen_pdu.resp_dma_addr,
       VAR_1);
 if (VAR_6->gen_pdu.resp_buf == ((void*)0))
  goto login_resp_buf_failure;

 VAR_6->gen_pdu.resp_buf_size = VAR_2;
 VAR_6->gen_pdu.resp_wr_ptr = VAR_6->gen_pdu.resp_buf;

 VAR_6->gen_pdu.req_bd_tbl =
  FUNC_0(&VAR_5->pcidev->dev, VAR_4,
       &VAR_6->gen_pdu.req_bd_dma, VAR_1);
 if (VAR_6->gen_pdu.req_bd_tbl == ((void*)0))
  goto login_req_bd_tbl_failure;

 VAR_6->gen_pdu.resp_bd_tbl =
  FUNC_0(&VAR_5->pcidev->dev, VAR_4,
       &VAR_6->gen_pdu.resp_bd_dma,
       VAR_1);
 if (VAR_6->gen_pdu.resp_bd_tbl == ((void*)0))
  goto login_resp_bd_tbl_failure;

 return 0;

login_resp_bd_tbl_failure:
 FUNC_1(&VAR_5->pcidev->dev, VAR_4,
     VAR_6->gen_pdu.req_bd_tbl,
     VAR_6->gen_pdu.req_bd_dma);
 VAR_6->gen_pdu.req_bd_tbl = ((void*)0);

login_req_bd_tbl_failure:
 FUNC_1(&VAR_5->pcidev->dev, VAR_2,
     VAR_6->gen_pdu.resp_buf,
     VAR_6->gen_pdu.resp_dma_addr);
 VAR_6->gen_pdu.resp_buf = ((void*)0);
login_resp_buf_failure:
 FUNC_1(&VAR_5->pcidev->dev, VAR_2,
     VAR_6->gen_pdu.req_buf,
     VAR_6->gen_pdu.req_dma_addr);
 VAR_6->gen_pdu.req_buf = ((void*)0);
login_req_buf_failure:
 FUNC_2(VAR_3, VAR_6->cls_conn->dd_data,
     "login resource alloc failed!!\n");
 return -VAR_0;

}
