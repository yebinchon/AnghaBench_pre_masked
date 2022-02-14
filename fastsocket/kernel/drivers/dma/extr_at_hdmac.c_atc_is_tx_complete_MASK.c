
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int cookie; } ;
struct at_dma_chan {int lock; int completed_cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct at_dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct at_dma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status
FUNC_7(struct dma_chan *VAR_1,
  dma_cookie_t VAR_2,
  dma_cookie_t *VAR_3, dma_cookie_t *VAR_4)
{
 struct at_dma_chan *VAR_5 = FUNC_6(VAR_1);
 dma_cookie_t VAR_6;
 dma_cookie_t VAR_7;
 enum dma_status VAR_8;

 FUNC_2(FUNC_1(VAR_1), "is_tx_complete: %d (d%d, u%d)\n",
   VAR_2, VAR_3 ? *VAR_3 : 0, VAR_4 ? *VAR_4 : 0);

 FUNC_4(&VAR_5->lock);

 VAR_7 = VAR_5->completed_cookie;
 VAR_6 = VAR_1->cookie;

 VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_6);
 if (VAR_8 != VAR_0) {
  FUNC_0(VAR_5);

  VAR_7 = VAR_5->completed_cookie;
  VAR_6 = VAR_1->cookie;

  VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_6);
 }

 FUNC_5(&VAR_5->lock);

 if (VAR_3)
  *VAR_3 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_8;
}
