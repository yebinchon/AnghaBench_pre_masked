
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9dmac_chan {int completed; int lock; } ;
struct dma_chan {int cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct txx9dmac_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (struct txx9dmac_chan*) ;

__attribute__((used)) static enum dma_status
FUNC_5(struct dma_chan *VAR_1,
   dma_cookie_t VAR_2,
  dma_cookie_t *VAR_3, dma_cookie_t *VAR_4)
{
 struct txx9dmac_chan *VAR_5 = FUNC_3(VAR_1);
 dma_cookie_t VAR_6;
 dma_cookie_t VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->completed;
 VAR_6 = VAR_1->cookie;

 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_6);
 if (VAR_8 != VAR_0) {
  FUNC_1(&VAR_5->lock);
  FUNC_4(VAR_5);
  FUNC_2(&VAR_5->lock);

  VAR_7 = VAR_5->completed;
  VAR_6 = VAR_1->cookie;

  VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_6);
 }

 if (VAR_3)
  *VAR_3 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_8;
}
