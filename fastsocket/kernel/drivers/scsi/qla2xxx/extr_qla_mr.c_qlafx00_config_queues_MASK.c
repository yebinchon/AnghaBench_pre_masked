
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct rsp_que {scalar_t__ length; void* dma; void* ring; } ;
struct req_que {scalar_t__ length; void* dma; void* ring; } ;
struct qla_hw_data {scalar_t__ req_que_len; int req_que_off; scalar_t__ rsp_que_len; int rsp_que_off; int pdev; scalar_t__ iobase; struct rsp_que** rsp_q_map; struct rsp_que** req_q_map; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,struct rsp_que*,void*,scalar_t__,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_3(struct scsi_qla_host *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 struct req_que *VAR_6 = VAR_5->req_q_map[0];
 struct rsp_que *VAR_7 = VAR_5->rsp_q_map[0];
 dma_addr_t VAR_8 = FUNC_0(VAR_5->pdev, 2);

 VAR_6->length = VAR_5->req_que_len;
 VAR_6->ring = (void *)VAR_5->iobase + VAR_5->req_que_off;
 VAR_6->dma = VAR_8 + VAR_5->req_que_off;
 if ((!VAR_6->ring) || (VAR_6->length == 0)) {
  FUNC_2(VAR_3, VAR_5->pdev, 0x012f,
      "Unable to allocate memory for req_ring\n");
  return VAR_0;
 }

 FUNC_1(VAR_2, VAR_4, 0x0130,
     "req: %p req_ring pointer %p req len 0x%x "
     "req off 0x%x\n, req->dma: 0x%llx",
     VAR_6, VAR_6->ring, VAR_6->length,
     VAR_5->req_que_off, (u64)VAR_6->dma);

 VAR_7->length = VAR_5->rsp_que_len;
 VAR_7->ring = (void *)VAR_5->iobase + VAR_5->rsp_que_off;
 VAR_7->dma = VAR_8 + VAR_5->rsp_que_off;
 if ((!VAR_7->ring) || (VAR_7->length == 0)) {
  FUNC_2(VAR_3, VAR_5->pdev, 0x0131,
      "Unable to allocate memory for rsp_ring\n");
  return VAR_0;
 }

 FUNC_1(VAR_2, VAR_4, 0x0132,
     "rsp: %p rsp_ring pointer %p rsp len 0x%x "
     "rsp off 0x%x, rsp->dma: 0x%llx\n",
     VAR_7, VAR_7->ring, VAR_7->length,
     VAR_5->rsp_que_off, (u64)VAR_7->dma);

 return VAR_1;
}
