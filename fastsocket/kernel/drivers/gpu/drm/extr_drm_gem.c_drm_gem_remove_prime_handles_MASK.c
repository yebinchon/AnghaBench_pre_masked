
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {scalar_t__ export_dma_buf; TYPE_1__* import_attach; } ;
struct drm_file {int prime; } ;
struct TYPE_2__ {scalar_t__ dmabuf; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct drm_gem_object *VAR_0, struct drm_file *VAR_1)
{
 if (VAR_0->import_attach) {
  FUNC_0(&VAR_1->prime,
    VAR_0->import_attach->dmabuf);
 }
 if (VAR_0->export_dma_buf) {
  FUNC_0(&VAR_1->prime,
    VAR_0->export_dma_buf);
 }
}
