
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct rsp_que {scalar_t__ dma_fx00; int length_fx00; int ring_fx00; scalar_t__ dma; int ring; int length; } ;
struct req_que {scalar_t__ dma_fx00; int length_fx00; int ring_fx00; scalar_t__ dma; int ring; int length; } ;
struct qla_hw_data {struct rsp_que** rsp_q_map; struct rsp_que** req_q_map; } ;


 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,struct rsp_que*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct scsi_qla_host *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 struct req_que *VAR_3 = VAR_2->req_q_map[0];
 struct rsp_que *VAR_4 = VAR_2->rsp_q_map[0];

 VAR_3->length_fx00 = VAR_3->length;
 VAR_3->ring_fx00 = VAR_3->ring;
 VAR_3->dma_fx00 = VAR_3->dma;

 VAR_4->length_fx00 = VAR_4->length;
 VAR_4->ring_fx00 = VAR_4->ring;
 VAR_4->dma_fx00 = VAR_4->dma;

 FUNC_0(VAR_0, VAR_1, 0x012d,
     "req: %p, ring_fx00: %p, length_fx00: 0x%x,"
     "req->dma_fx00: 0x%llx\n", VAR_3, VAR_3->ring_fx00,
     VAR_3->length_fx00, (u64)VAR_3->dma_fx00);

 FUNC_0(VAR_0, VAR_1, 0x012e,
     "rsp: %p, ring_fx00: %p, length_fx00: 0x%x,"
     "rsp->dma_fx00: 0x%llx\n", VAR_4, VAR_4->ring_fx00,
     VAR_4->length_fx00, (u64)VAR_4->dma_fx00);
}
