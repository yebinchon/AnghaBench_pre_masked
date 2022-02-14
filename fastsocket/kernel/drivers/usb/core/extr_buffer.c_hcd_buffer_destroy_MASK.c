
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {struct dma_pool** pool; } ;
struct dma_pool {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_pool*) ;

void FUNC_1(struct usb_hcd *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct dma_pool *VAR_3 = VAR_1->pool[VAR_2];
  if (VAR_3) {
   FUNC_0(VAR_3);
   VAR_1->pool[VAR_2] = ((void*)0);
  }
 }
}
