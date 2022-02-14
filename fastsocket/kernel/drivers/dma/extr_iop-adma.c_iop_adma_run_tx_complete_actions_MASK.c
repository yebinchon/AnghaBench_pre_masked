
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {scalar_t__ cookie; int callback_param; int (* callback ) (int ) ;} ;
struct iop_adma_desc_slot {scalar_t__ unmap_len; scalar_t__ group_head; struct dma_async_tx_descriptor async_tx; } ;
struct iop_adma_chan {int dummy; } ;
typedef scalar_t__ dma_cookie_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_2 (struct iop_adma_desc_slot*) ;
 int FUNC_3 (struct iop_adma_chan*,struct iop_adma_desc_slot*) ;
 int FUNC_4 (struct iop_adma_chan*,struct iop_adma_desc_slot*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static dma_cookie_t
FUNC_6(struct iop_adma_desc_slot *VAR_0,
 struct iop_adma_chan *VAR_1, dma_cookie_t VAR_2)
{
 struct dma_async_tx_descriptor *VAR_3 = &VAR_0->async_tx;

 FUNC_0(VAR_3->cookie < 0);
 if (VAR_3->cookie > 0) {
  VAR_2 = VAR_3->cookie;
  VAR_3->cookie = 0;




  if (VAR_3->callback)
   VAR_3->callback(VAR_3->callback_param);




  if (VAR_0->group_head && VAR_0->unmap_len) {
   if (FUNC_2(VAR_0))
    FUNC_4(VAR_1, VAR_0);
   else
    FUNC_3(VAR_1, VAR_0);
  }
 }


 FUNC_1(VAR_3);

 return VAR_2;
}
