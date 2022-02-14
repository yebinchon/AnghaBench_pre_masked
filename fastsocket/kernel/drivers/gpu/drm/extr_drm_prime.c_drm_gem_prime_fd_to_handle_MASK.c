
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct drm_file {TYPE_2__ prime; } ;
struct drm_device {TYPE_1__* driver; } ;
typedef struct drm_gem_object dma_buf ;
struct TYPE_4__ {struct drm_gem_object* (* gem_prime_import ) (struct drm_device*,struct drm_gem_object*) ;} ;


 scalar_t__ FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_2 (int) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (TYPE_2__*,struct drm_gem_object*,int ) ;
 int FUNC_8 (TYPE_2__*,struct drm_gem_object*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct drm_gem_object* FUNC_11 (struct drm_device*,struct drm_gem_object*) ;

int FUNC_12(struct drm_device *VAR_0,
  struct drm_file *VAR_1, int VAR_2, uint32_t *VAR_3)
{
 struct dma_buf *VAR_4;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_9(&VAR_1->prime.lock);

 VAR_6 = FUNC_8(&VAR_1->prime,
   VAR_4, VAR_3);
 if (!VAR_6) {
  VAR_6 = 0;
  goto out_put;
 }


 VAR_5 = VAR_0->driver->gem_prime_import(VAR_0, VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto out_put;
 }

 VAR_6 = FUNC_4(VAR_1, VAR_5, VAR_3);
 FUNC_6(VAR_5);
 if (VAR_6)
  goto out_put;

 VAR_6 = FUNC_7(&VAR_1->prime,
   VAR_4, *VAR_3);
 if (VAR_6)
  goto fail;

 FUNC_10(&VAR_1->prime.lock);

 FUNC_3(VAR_4);

 return 0;

fail:



 FUNC_5(VAR_5);
out_put:
 FUNC_3(VAR_4);
 FUNC_10(&VAR_1->prime.lock);
 return VAR_6;
}
