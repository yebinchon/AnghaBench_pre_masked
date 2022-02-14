
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct dma_buf* export_dma_buf; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_1(struct dma_buf *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->priv;

 if (VAR_1->export_dma_buf == VAR_0) {

  VAR_1->export_dma_buf = ((void*)0);
  FUNC_0(VAR_1);
 }
}
