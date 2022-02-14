
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cafe_camera {int nbufs; int ** dma_bufs; int * dma_handles; int dma_buf_size; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cafe_camera *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nbufs; VAR_1++) {
  FUNC_0(&VAR_0->pdev->dev, VAR_0->dma_buf_size,
    VAR_0->dma_bufs[VAR_1], VAR_0->dma_handles[VAR_1]);
  VAR_0->dma_bufs[VAR_1] = ((void*)0);
 }
 VAR_0->nbufs = 0;
}
