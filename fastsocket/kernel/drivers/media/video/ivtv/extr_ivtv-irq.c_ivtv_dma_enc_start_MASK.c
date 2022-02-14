
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bytesused; } ;
struct ivtv_stream {size_t sg_pending_size; scalar_t__ type; scalar_t__ buffers; int sg_processing_size; int pending_pts; int dma_pts; int pending_backup; int dma_backup; int pending_offset; int dma_offset; scalar_t__ sg_processed; TYPE_1__* sg_pending; int sg_processing; int dma_xfer_cnt; int name; int s_flags; TYPE_2__ q_predma; int q_dma; struct ivtv* itv; } ;
struct ivtv_sg_host_element {int dummy; } ;
struct ivtv {scalar_t__ cur_pio_stream; scalar_t__ cur_dma_stream; int i_flags; scalar_t__ dma_retries; struct ivtv_stream* streams; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (char*,char*,...) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ivtv_stream*) ;
 int FUNC_3 (struct ivtv_stream*,TYPE_2__*,int *,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ivtv_stream*) ;
 scalar_t__ FUNC_5 (struct ivtv_stream*) ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ivtv_stream *VAR_7)
{
 struct ivtv *VAR_8 = VAR_7->itv;
 struct ivtv_stream *VAR_9 = &VAR_8->streams[VAR_1];
 int VAR_10;

 FUNC_0("start %s for %s\n", FUNC_4(VAR_7) ? "DMA" : "PIO", VAR_7->name);

 if (VAR_7->q_predma.bytesused)
  FUNC_3(VAR_7, &VAR_7->q_predma, ((void*)0), &VAR_7->q_dma, VAR_7->q_predma.bytesused);

 if (FUNC_4(VAR_7))
  VAR_7->sg_pending[VAR_7->sg_pending_size - 1].size += 256;
 FUNC_1(VAR_6, &VAR_7->s_flags);
 if (VAR_7->type == VAR_0 && VAR_9->sg_pending_size &&
   VAR_7->sg_pending_size + VAR_9->sg_pending_size <= VAR_7->buffers) {
  FUNC_3(VAR_9, &VAR_9->q_predma, ((void*)0), &VAR_9->q_dma, VAR_9->q_predma.bytesused);
  if (FUNC_4(VAR_9))
   VAR_9->sg_pending[VAR_9->sg_pending_size - 1].size += 256;
  for (VAR_10 = 0; VAR_10 < VAR_9->sg_pending_size; VAR_10++) {
   VAR_7->sg_pending[VAR_7->sg_pending_size++] = VAR_9->sg_pending[VAR_10];
  }
  VAR_9->dma_offset = VAR_9->pending_offset;
  VAR_9->sg_pending_size = 0;
  VAR_9->dma_xfer_cnt++;
  FUNC_7(VAR_6, &VAR_7->s_flags);
  FUNC_0("include DMA for %s\n", VAR_9->name);
 }

 VAR_7->dma_xfer_cnt++;
 FUNC_6(VAR_7->sg_processing, VAR_7->sg_pending, sizeof(struct ivtv_sg_host_element) * VAR_7->sg_pending_size);
 VAR_7->sg_processing_size = VAR_7->sg_pending_size;
 VAR_7->sg_pending_size = 0;
 VAR_7->sg_processed = 0;
 VAR_7->dma_offset = VAR_7->pending_offset;
 VAR_7->dma_backup = VAR_7->pending_backup;
 VAR_7->dma_pts = VAR_7->pending_pts;

 if (FUNC_5(VAR_7)) {
  FUNC_7(VAR_5, &VAR_8->i_flags);
  FUNC_7(VAR_3, &VAR_8->i_flags);
  FUNC_7(VAR_4, &VAR_8->i_flags);
  VAR_8->cur_pio_stream = VAR_7->type;
 }
 else {
  VAR_8->dma_retries = 0;
  FUNC_2(VAR_7);
  FUNC_7(VAR_2, &VAR_8->i_flags);
  VAR_8->cur_dma_stream = VAR_7->type;
 }
}
