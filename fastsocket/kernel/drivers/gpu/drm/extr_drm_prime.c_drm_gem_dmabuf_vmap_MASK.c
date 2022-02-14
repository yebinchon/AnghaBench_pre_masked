
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; } ;
struct dma_buf {struct drm_gem_object* priv; } ;
struct TYPE_2__ {void* (* gem_prime_vmap ) (struct drm_gem_object*) ;} ;


 void* FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static void *FUNC_1(struct dma_buf *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->priv;
 struct drm_device *VAR_2 = VAR_1->dev;

 return VAR_2->driver->gem_prime_vmap(VAR_1);
}
