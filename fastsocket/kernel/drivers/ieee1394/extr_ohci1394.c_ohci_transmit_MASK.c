
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_trm_ctx {int lock; int pending_list; } ;
struct ti_ohci {scalar_t__ max_packet_size; struct dma_trm_ctx at_req_context; struct dma_trm_ctx at_resp_context; } ;
struct hpsb_packet {scalar_t__ data_size; scalar_t__ type; int tcode; int driver_list; } ;
struct hpsb_host {struct ti_ohci* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct ti_ohci*,struct dma_trm_ctx*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct hpsb_host *VAR_4, struct hpsb_packet *VAR_5)
{
 struct ti_ohci *VAR_6 = VAR_4->hostdata;
 struct dma_trm_ctx *VAR_7;
 unsigned long VAR_8;

 if (VAR_5->data_size > VAR_6->max_packet_size) {
  FUNC_0(VAR_1,
        "Transmit packet size %Zd is too big",
        VAR_5->data_size);
  return -VAR_0;
 }

 if (VAR_5->type == VAR_3)
  VAR_7 = &VAR_6->at_req_context;
 else if ((VAR_5->tcode & 0x02) && (VAR_5->tcode != VAR_2))
  VAR_7 = &VAR_6->at_resp_context;
 else
  VAR_7 = &VAR_6->at_req_context;

 FUNC_3(&VAR_7->lock,VAR_8);

 FUNC_2(&VAR_5->driver_list, &VAR_7->pending_list);

 FUNC_1(VAR_6, VAR_7);

 FUNC_4(&VAR_7->lock,VAR_8);

 return 0;
}
