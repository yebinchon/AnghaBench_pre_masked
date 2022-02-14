
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct txx9dmac_desc {TYPE_1__ txd; } ;
struct txx9dmac_chan {int lock; int active_list; int queue; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct txx9dmac_chan* FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct txx9dmac_chan*,struct txx9dmac_desc*) ;
 scalar_t__ FUNC_6 (struct txx9dmac_chan*) ;
 int FUNC_7 (struct txx9dmac_chan*,int *) ;
 int FUNC_8 (struct txx9dmac_chan*,int ) ;
 int FUNC_9 (struct txx9dmac_chan*) ;
 struct txx9dmac_desc* FUNC_10 (struct txx9dmac_chan*) ;
 int FUNC_11 (struct txx9dmac_chan*) ;

__attribute__((used)) static void FUNC_12(struct dma_chan *VAR_1)
{
 struct txx9dmac_chan *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->lock);

 if (!FUNC_0(&VAR_2->active_list))
  FUNC_11(VAR_2);
 if (!FUNC_0(&VAR_2->queue)) {
  if (FUNC_0(&VAR_2->active_list)) {
   FUNC_7(VAR_2, &VAR_2->active_list);
   FUNC_8(VAR_2, FUNC_9(VAR_2));
  } else if (FUNC_4()) {
   struct txx9dmac_desc *VAR_3 = FUNC_10(VAR_2);

   if (!(VAR_3->txd.flags & VAR_0) ||
       FUNC_6(VAR_2))
    FUNC_5(VAR_2, VAR_3);
  }
 }

 FUNC_2(&VAR_2->lock);
}
