
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_3__* agp_buffer_map; TYPE_1__* agp; TYPE_2__* dev_private; scalar_t__ irq_enabled; } ;
struct drm_agp_buffer {scalar_t__ handle; } ;
struct drm_agp_binding {scalar_t__ handle; } ;
struct TYPE_5__ {scalar_t__ agp_handle; int * head; int * warp_pipe_phys; scalar_t__ warp_pipe; int prim; scalar_t__ used_new_dma_init; int * status; int * mmio; int * sarea_priv; int * sarea; TYPE_3__* primary; TYPE_3__* warp; scalar_t__ agp_size; int * agp_textures; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ acquired; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_agp_buffer*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct drm_agp_binding*) ;
 int FUNC_4 (TYPE_3__*,struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 FUNC_0("\n");





 if (VAR_1->irq_enabled)
  FUNC_5(VAR_1);

 if (VAR_1->dev_private) {
  drm_mga_private_t *VAR_4 = VAR_1->dev_private;

  if ((VAR_4->warp != ((void*)0))
      && (VAR_4->warp->type != VAR_0))
   FUNC_4(VAR_4->warp, VAR_1);

  if ((VAR_4->primary != ((void*)0))
      && (VAR_4->primary->type != VAR_0))
   FUNC_4(VAR_4->primary, VAR_1);

  if (VAR_1->agp_buffer_map != ((void*)0))
   FUNC_4(VAR_1->agp_buffer_map, VAR_1);

  if (VAR_4->used_new_dma_init) {
  }

  VAR_4->warp = ((void*)0);
  VAR_4->primary = ((void*)0);
  VAR_4->sarea = ((void*)0);
  VAR_4->sarea_priv = ((void*)0);
  VAR_1->agp_buffer_map = ((void*)0);

  if (VAR_2) {
   VAR_4->mmio = ((void*)0);
   VAR_4->status = ((void*)0);
   VAR_4->used_new_dma_init = 0;
  }

  FUNC_6(&VAR_4->prim, 0, sizeof(VAR_4->prim));
  VAR_4->warp_pipe = 0;
  FUNC_6(VAR_4->warp_pipe_phys, 0,
         sizeof(VAR_4->warp_pipe_phys));

  if (VAR_4->head != ((void*)0))
   FUNC_7(VAR_1);
 }

 return VAR_3;
}
