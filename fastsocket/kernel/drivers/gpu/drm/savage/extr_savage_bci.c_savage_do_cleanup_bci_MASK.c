
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* agp_buffer_map; TYPE_1__* dev_private; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ handle; } ;
struct TYPE_3__ {scalar_t__ dma_type; scalar_t__ dma_pages; TYPE_2__* cmd_dma; TYPE_2__ fake_dma; } ;
typedef TYPE_1__ drm_savage_private_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct drm_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct drm_device * VAR_2)
{
 drm_savage_private_t *VAR_3 = VAR_2->dev_private;

 if (VAR_3->cmd_dma == &VAR_3->fake_dma) {
  FUNC_1(VAR_3->fake_dma.handle);
 } else if (VAR_3->cmd_dma && VAR_3->cmd_dma->handle &&
     VAR_3->cmd_dma->type == VAR_1 &&
     VAR_3->dma_type == VAR_0)
  FUNC_0(VAR_3->cmd_dma, VAR_2);

 if (VAR_3->dma_type == VAR_0 &&
     VAR_2->agp_buffer_map && VAR_2->agp_buffer_map->handle) {
  FUNC_0(VAR_2->agp_buffer_map, VAR_2);



  VAR_2->agp_buffer_map = ((void*)0);
 }

 FUNC_1(VAR_3->dma_pages);

 return 0;
}
