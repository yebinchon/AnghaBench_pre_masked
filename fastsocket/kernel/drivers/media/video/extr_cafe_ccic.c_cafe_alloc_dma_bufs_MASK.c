
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; } ;
struct cafe_camera {int nbufs; int * dma_handles; int ** dma_bufs; int dma_buf_size; TYPE_2__* pdev; TYPE_1__ pix_format; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cafe_camera*,int) ;
 int FUNC_1 (struct cafe_camera*,char*) ;
 int FUNC_2 (struct cafe_camera*,char*) ;
 int * FUNC_3 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct cafe_camera *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4, 1);
 if (VAR_5)
  VAR_4->dma_buf_size = VAR_2;
 else
  VAR_4->dma_buf_size = VAR_4->pix_format.sizeimage;
 if (VAR_3 > 3)
  VAR_3 = 3;

 VAR_4->nbufs = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4->dma_bufs[VAR_6] = FUNC_3(&VAR_4->pdev->dev,
    VAR_4->dma_buf_size, VAR_4->dma_handles + VAR_6,
    VAR_1);
  if (VAR_4->dma_bufs[VAR_6] == ((void*)0)) {
   FUNC_2(VAR_4, "Failed to allocate DMA buffer\n");
   break;
  }

  FUNC_5(VAR_4->dma_bufs[VAR_6], 0xcc, VAR_4->dma_buf_size);
  (VAR_4->nbufs)++;
 }

 switch (VAR_4->nbufs) {
 case 1:
     FUNC_4(&VAR_4->pdev->dev, VAR_4->dma_buf_size,
       VAR_4->dma_bufs[0], VAR_4->dma_handles[0]);
     VAR_4->nbufs = 0;
 case 0:
     FUNC_1(VAR_4, "Insufficient DMA buffers, cannot operate\n");
     return -VAR_0;

 case 2:
     if (VAR_3 > 2)
      FUNC_2(VAR_4, "Will limp along with only 2 buffers\n");
     break;
 }
 return 0;
}
