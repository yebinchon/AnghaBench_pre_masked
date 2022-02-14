
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_stream {int buffers; scalar_t__ dma; int buf_size; int name; int q_free; struct ivtv* itv; int * sg_dma; void* sg_handle; struct ivtv_buffer* sg_processing; struct ivtv_buffer* sg_pending; scalar_t__ sg_processing_size; scalar_t__ sg_pending_size; } ;
struct ivtv_sg_host_element {int dummy; } ;
struct ivtv_sg_element {int dummy; } ;
struct ivtv_buffer {int * buf; void* dma_handle; int list; } ;
struct ivtv {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int ,int,int,int) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ivtv_stream*,struct ivtv_buffer*) ;
 int FUNC_4 (struct ivtv_stream*,struct ivtv_buffer*,int *) ;
 scalar_t__ FUNC_5 (struct ivtv_stream*) ;
 int FUNC_6 (struct ivtv_stream*) ;
 int FUNC_7 (struct ivtv_stream*) ;
 int FUNC_8 (struct ivtv_buffer*) ;
 int * FUNC_9 (int,int) ;
 void* FUNC_10 (int,int) ;
 void* FUNC_11 (int ,int *,int,scalar_t__) ;

int FUNC_12(struct ivtv_stream *VAR_5)
{
 struct ivtv *VAR_6 = VAR_5->itv;
 int VAR_7 = sizeof(struct ivtv_sg_host_element) * VAR_5->buffers;
 int VAR_8;

 if (VAR_5->buffers == 0)
  return 0;

 FUNC_1("Allocate %s%s stream: %d x %d buffers (%dkB total)\n",
  VAR_5->dma != VAR_2 ? "DMA " : "",
  VAR_5->name, VAR_5->buffers, VAR_5->buf_size, VAR_5->buffers * VAR_5->buf_size / 1024);

 VAR_5->sg_pending = FUNC_10(VAR_7, VAR_1|VAR_4);
 if (VAR_5->sg_pending == ((void*)0)) {
  FUNC_2("Could not allocate sg_pending for %s stream\n", VAR_5->name);
  return -VAR_0;
 }
 VAR_5->sg_pending_size = 0;

 VAR_5->sg_processing = FUNC_10(VAR_7, VAR_1|VAR_4);
 if (VAR_5->sg_processing == ((void*)0)) {
  FUNC_2("Could not allocate sg_processing for %s stream\n", VAR_5->name);
  FUNC_8(VAR_5->sg_pending);
  VAR_5->sg_pending = ((void*)0);
  return -VAR_0;
 }
 VAR_5->sg_processing_size = 0;

 VAR_5->sg_dma = FUNC_10(sizeof(struct ivtv_sg_element),
     VAR_1|VAR_4);
 if (VAR_5->sg_dma == ((void*)0)) {
  FUNC_2("Could not allocate sg_dma for %s stream\n", VAR_5->name);
  FUNC_8(VAR_5->sg_pending);
  VAR_5->sg_pending = ((void*)0);
  FUNC_8(VAR_5->sg_processing);
  VAR_5->sg_processing = ((void*)0);
  return -VAR_0;
 }
 if (FUNC_5(VAR_5)) {
  VAR_5->sg_handle = FUNC_11(VAR_6->pdev, VAR_5->sg_dma,
    sizeof(struct ivtv_sg_element), VAR_3);
  FUNC_7(VAR_5);
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->buffers; VAR_8++) {
  struct ivtv_buffer *VAR_9 = FUNC_10(sizeof(struct ivtv_buffer),
      VAR_1|VAR_4);

  if (VAR_9 == ((void*)0))
   break;
  VAR_9->buf = FUNC_9(VAR_5->buf_size + 256, VAR_1|VAR_4);
  if (VAR_9->buf == ((void*)0)) {
   FUNC_8(VAR_9);
   break;
  }
  FUNC_0(&VAR_9->list);
  if (FUNC_5(VAR_5)) {
   VAR_9->dma_handle = FUNC_11(VAR_5->itv->pdev,
    VAR_9->buf, VAR_5->buf_size + 256, VAR_5->dma);
   FUNC_3(VAR_5, VAR_9);
  }
  FUNC_4(VAR_5, VAR_9, &VAR_5->q_free);
 }
 if (VAR_8 == VAR_5->buffers)
  return 0;
 FUNC_2("Couldn't allocate buffers for %s stream\n", VAR_5->name);
 FUNC_6(VAR_5);
 return -VAR_0;
}
