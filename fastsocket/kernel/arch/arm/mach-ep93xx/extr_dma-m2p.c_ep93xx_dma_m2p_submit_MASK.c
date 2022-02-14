
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m2p_channel {int lock; int buffers_pending; struct ep93xx_dma_buffer* buffer_next; struct ep93xx_dma_buffer* buffer_xfer; scalar_t__ base; } ;
struct ep93xx_dma_m2p_client {int cookie; int (* buffer_started ) (int ,struct ep93xx_dma_buffer*) ;struct m2p_channel* channel; } ;
struct ep93xx_dma_buffer {int list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m2p_channel*,struct ep93xx_dma_buffer*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct m2p_channel*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct ep93xx_dma_buffer*) ;

void FUNC_7(struct ep93xx_dma_m2p_client *VAR_3,
      struct ep93xx_dma_buffer *VAR_4)
{
 struct m2p_channel *VAR_5 = VAR_3->channel;
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_3(VAR_5->base + VAR_0);
 if (VAR_5->buffer_xfer == ((void*)0)) {
  VAR_5->buffer_xfer = VAR_4;
  FUNC_0(VAR_5, VAR_4);
  VAR_3->buffer_started(VAR_3->cookie, VAR_4);

  VAR_7 |= VAR_2;
  FUNC_2(VAR_5, VAR_7);

 } else if (VAR_5->buffer_next == ((void*)0)) {
  VAR_5->buffer_next = VAR_4;
  FUNC_0(VAR_5, VAR_4);

  VAR_7 |= VAR_1;
  FUNC_2(VAR_5, VAR_7);
 } else {
  FUNC_1(&VAR_4->list, &VAR_5->buffers_pending);
 }
 FUNC_5(&VAR_5->lock, VAR_6);
}
