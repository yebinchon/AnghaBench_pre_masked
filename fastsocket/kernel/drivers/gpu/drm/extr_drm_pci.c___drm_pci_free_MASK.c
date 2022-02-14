
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_5__ {size_t size; int busaddr; scalar_t__ vaddr; } ;
typedef TYPE_2__ drm_dma_handle_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,size_t,scalar_t__,int ) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct drm_device * VAR_1, drm_dma_handle_t * VAR_2)
{

 unsigned long VAR_3;
 size_t VAR_4;


 if (VAR_2->vaddr) {


  for (VAR_3 = (unsigned long)VAR_2->vaddr, VAR_4 = VAR_2->size;
       VAR_4 > 0; VAR_3 += VAR_0, VAR_4 -= VAR_0) {
   FUNC_0(FUNC_2(VAR_3));
  }
  FUNC_1(&VAR_1->pdev->dev, VAR_2->size, VAR_2->vaddr,
      VAR_2->busaddr);
 }
}
