
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_stream {int buf_size; scalar_t__ sg_handle; scalar_t__ sg_processing_size; scalar_t__ sg_pending_size; struct ivtv_buffer* sg_dma; struct ivtv_buffer* sg_processing; struct ivtv_buffer* sg_pending; TYPE_1__* itv; int dma; int q_free; } ;
struct ivtv_sg_element {int dummy; } ;
struct ivtv_buffer {scalar_t__ dma_handle; struct ivtv_buffer* buf; } ;
struct TYPE_2__ {int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ivtv_buffer* FUNC_0 (struct ivtv_stream*,int *) ;
 int FUNC_1 (struct ivtv_stream*) ;
 scalar_t__ FUNC_2 (struct ivtv_stream*) ;
 int FUNC_3 (struct ivtv_buffer*) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;

void FUNC_5(struct ivtv_stream *VAR_2)
{
 struct ivtv_buffer *VAR_3;


 FUNC_1(VAR_2);


 while ((VAR_3 = FUNC_0(VAR_2, &VAR_2->q_free))) {
  if (FUNC_2(VAR_2))
   FUNC_4(VAR_2->itv->pdev, VAR_3->dma_handle,
    VAR_2->buf_size + 256, VAR_2->dma);
  FUNC_3(VAR_3->buf);
  FUNC_3(VAR_3);
 }


 if (VAR_2->sg_dma != ((void*)0)) {
  if (VAR_2->sg_handle != VAR_0) {
   FUNC_4(VAR_2->itv->pdev, VAR_2->sg_handle,
     sizeof(struct ivtv_sg_element), VAR_1);
   VAR_2->sg_handle = VAR_0;
  }
  FUNC_3(VAR_2->sg_pending);
  FUNC_3(VAR_2->sg_processing);
  FUNC_3(VAR_2->sg_dma);
  VAR_2->sg_pending = ((void*)0);
  VAR_2->sg_processing = ((void*)0);
  VAR_2->sg_dma = ((void*)0);
  VAR_2->sg_pending_size = 0;
  VAR_2->sg_processing_size = 0;
 }
}
