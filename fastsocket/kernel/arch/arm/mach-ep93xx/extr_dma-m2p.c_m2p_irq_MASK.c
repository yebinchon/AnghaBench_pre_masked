
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m2p_channel {int lock; int * buffer_next; int * buffer_xfer; scalar_t__ base; struct ep93xx_dma_m2p_client* client; } ;
struct ep93xx_dma_m2p_client {int cookie; int (* buffer_started ) (int ,int *) ;int (* buffer_finished ) (int ,int *,int ,int) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_1 (struct m2p_channel*) ;
 int FUNC_2 (struct m2p_channel*) ;
 int FUNC_3 (struct m2p_channel*) ;
 int FUNC_4 (struct m2p_channel*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int ,int) ;
 int FUNC_10 (int ,int *,int ,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *,int ,int) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_9, void *VAR_10)
{
 struct m2p_channel *VAR_11 = VAR_10;
 struct ep93xx_dma_m2p_client *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_12 = VAR_11->client;

 FUNC_7(&VAR_11->lock);
 VAR_13 = FUNC_6(VAR_11->base + VAR_5);

 if (VAR_13 & VAR_6) {
  FUNC_14(VAR_6, VAR_11->base + VAR_5);
  VAR_15 = 1;
 }

 if ((VAR_13 & (VAR_8 | VAR_7)) == 0) {
  FUNC_8(&VAR_11->lock);
  return VAR_1;
 }

 switch (FUNC_3(VAR_11)) {
 case 131:
  FUNC_5("m2p_irq: dma interrupt without a dma buffer\n");
  FUNC_0();
  break;

 case 128:
  VAR_12->buffer_finished(VAR_12->cookie, VAR_11->buffer_xfer, 0, VAR_15);
  if (VAR_11->buffer_next != ((void*)0)) {
   VAR_12->buffer_finished(VAR_12->cookie, VAR_11->buffer_next,
         0, VAR_15);
  }
  FUNC_2(VAR_11);
  FUNC_1(VAR_11);
  if (VAR_11->buffer_xfer != ((void*)0))
   VAR_12->buffer_started(VAR_12->cookie, VAR_11->buffer_xfer);
  break;

 case 129:
  VAR_12->buffer_finished(VAR_12->cookie, VAR_11->buffer_xfer, 0, VAR_15);
  VAR_11->buffer_xfer = VAR_11->buffer_next;
  FUNC_1(VAR_11);
  VAR_12->buffer_started(VAR_12->cookie, VAR_11->buffer_xfer);
  break;

 case 130:
  FUNC_5("m2p_irq: dma interrupt while next\n");
  FUNC_0();
  break;
 }

 VAR_14 = FUNC_6(VAR_11->base + VAR_2) & ~(VAR_4 |
           VAR_3);
 if (VAR_11->buffer_xfer != ((void*)0))
  VAR_14 |= VAR_4;
 if (VAR_11->buffer_next != ((void*)0))
  VAR_14 |= VAR_3;
 FUNC_4(VAR_11, VAR_14);

 FUNC_8(&VAR_11->lock);
 return VAR_0;
}
