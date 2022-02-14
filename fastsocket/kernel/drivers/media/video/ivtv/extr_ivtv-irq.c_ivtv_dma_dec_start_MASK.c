
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bytesused; } ;
struct ivtv_stream {int sg_pending_size; int sg_processing_size; int type; int name; scalar_t__ sg_processed; int sg_pending; int sg_processing; int dma_xfer_cnt; TYPE_1__ q_predma; int q_dma; struct ivtv* itv; } ;
struct ivtv_sg_host_element {int dummy; } ;
struct ivtv {int cur_dma_stream; int i_flags; scalar_t__ dma_retries; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ivtv_stream*) ;
 int FUNC_2 (struct ivtv_stream*,TYPE_1__*,int *,int *,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ivtv_stream *VAR_1)
{
 struct ivtv *VAR_2 = VAR_1->itv;

 if (VAR_1->q_predma.bytesused)
  FUNC_2(VAR_1, &VAR_1->q_predma, ((void*)0), &VAR_1->q_dma, VAR_1->q_predma.bytesused);
 VAR_1->dma_xfer_cnt++;
 FUNC_3(VAR_1->sg_processing, VAR_1->sg_pending, sizeof(struct ivtv_sg_host_element) * VAR_1->sg_pending_size);
 VAR_1->sg_processing_size = VAR_1->sg_pending_size;
 VAR_1->sg_pending_size = 0;
 VAR_1->sg_processed = 0;

 FUNC_0("start DMA for %s\n", VAR_1->name);
 VAR_2->dma_retries = 0;
 FUNC_1(VAR_1);
 FUNC_4(VAR_0, &VAR_2->i_flags);
 VAR_2->cur_dma_stream = VAR_1->type;
}
