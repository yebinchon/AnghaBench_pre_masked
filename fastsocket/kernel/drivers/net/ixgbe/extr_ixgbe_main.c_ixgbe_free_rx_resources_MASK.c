
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {int * desc; int dma; int size; int dev; int * rx_buffer_info; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct ixgbe_ring*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ixgbe_ring *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_2(VAR_0->rx_buffer_info);
 VAR_0->rx_buffer_info = ((void*)0);


 if (!VAR_0->desc)
  return;

 FUNC_0(VAR_0->dev, VAR_0->size,
     VAR_0->desc, VAR_0->dma);

 VAR_0->desc = ((void*)0);
}
