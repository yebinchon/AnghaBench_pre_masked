
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_stream {int dma; scalar_t__ buf_size; TYPE_1__* itv; } ;
struct ivtv_buffer {int dma_handle; } ;
struct TYPE_2__ {int pdev; } ;


 scalar_t__ FUNC_0 (struct ivtv_stream*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ivtv_stream *VAR_0, struct ivtv_buffer *VAR_1)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0->itv->pdev, VAR_1->dma_handle,
    VAR_0->buf_size + 256, VAR_0->dma);
}
