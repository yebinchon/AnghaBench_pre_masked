
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {struct sg_table* import_attach; struct drm_device* dev; } ;
struct drm_gem_object {struct drm_gem_object* import_attach; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; int dev; } ;
struct dma_buf_attachment {struct dma_buf_attachment* import_attach; struct drm_device* dev; } ;
struct dma_buf {int size; struct sg_table* priv; int * ops; } ;
struct TYPE_2__ {struct sg_table* (* gem_prime_import_sg_table ) (struct drm_device*,int ,struct sg_table*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sg_table*) ;
 scalar_t__ FUNC_2 (struct sg_table*) ;
 int FUNC_3 (struct sg_table*) ;
 struct sg_table* FUNC_4 (struct dma_buf*,int ) ;
 int FUNC_5 (struct dma_buf*,struct sg_table*) ;
 struct sg_table* FUNC_6 (struct sg_table*,int ) ;
 int FUNC_7 (struct dma_buf*) ;
 int FUNC_8 (struct sg_table*,struct sg_table*,int ) ;
 int FUNC_9 (struct sg_table*) ;
 int VAR_2 ;
 int FUNC_10 (struct dma_buf*) ;
 struct sg_table* FUNC_11 (struct drm_device*,int ,struct sg_table*) ;

struct drm_gem_object *FUNC_12(struct drm_device *VAR_3,
         struct dma_buf *VAR_4)
{
 struct dma_buf_attachment *VAR_5;
 struct sg_table *VAR_6;
 struct drm_gem_object *VAR_7;
 int VAR_8;

 if (!VAR_3->driver->gem_prime_import_sg_table)
  return FUNC_0(-VAR_1);

 if (VAR_4->ops == &VAR_2) {
  VAR_7 = VAR_4->priv;
  if (VAR_7->dev == VAR_3) {




   FUNC_9(VAR_7);
   return VAR_7;
  }
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3->dev);
 if (FUNC_1(VAR_5))
  return FUNC_0(FUNC_3(VAR_5));

 FUNC_10(VAR_4);

 VAR_6 = FUNC_6(VAR_5, VAR_0);
 if (FUNC_2(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);
  goto fail_detach;
 }

 VAR_7 = VAR_3->driver->gem_prime_import_sg_table(VAR_3, VAR_4->size, VAR_6);
 if (FUNC_1(VAR_7)) {
  VAR_8 = FUNC_3(VAR_7);
  goto fail_unmap;
 }

 VAR_7->import_attach = VAR_5;

 return VAR_7;

fail_unmap:
 FUNC_8(VAR_5, VAR_6, VAR_0);
fail_detach:
 FUNC_5(VAR_4, VAR_5);
 FUNC_7(VAR_4);

 return FUNC_0(VAR_8);
}
