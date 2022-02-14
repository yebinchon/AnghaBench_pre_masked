
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_7__ {size_t size; int * vaddr; int busaddr; } ;
typedef TYPE_2__ drm_dma_handle_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,size_t,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,size_t) ;
 int FUNC_5 (unsigned long) ;

drm_dma_handle_t *FUNC_6(struct drm_device * VAR_3, size_t VAR_4, size_t VAR_5)
{
 drm_dma_handle_t *VAR_6;

 unsigned long VAR_7;
 size_t VAR_8;






 if (VAR_5 > VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_3(sizeof(drm_dma_handle_t), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->size = VAR_4;
 VAR_6->vaddr = FUNC_1(&VAR_3->pdev->dev, VAR_4, &VAR_6->busaddr, VAR_0 | VAR_2);

 if (VAR_6->vaddr == ((void*)0)) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 FUNC_4(VAR_6->vaddr, 0, VAR_4);



 for (VAR_7 = (unsigned long)VAR_6->vaddr, VAR_8 = VAR_4;
      VAR_8 > 0; VAR_7 += VAR_1, VAR_8 -= VAR_1) {
  FUNC_0(FUNC_5(VAR_7));
 }

 return VAR_6;
}
