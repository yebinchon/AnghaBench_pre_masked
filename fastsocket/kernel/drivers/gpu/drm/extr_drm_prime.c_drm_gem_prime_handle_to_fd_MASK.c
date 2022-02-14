
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {void* export_dma_buf; TYPE_1__* import_attach; } ;
struct TYPE_6__ {int lock; } ;
struct drm_file {TYPE_3__ prime; } ;
struct drm_device {TYPE_2__* driver; } ;
typedef void dma_buf ;
struct TYPE_5__ {void* (* gem_prime_export ) (struct drm_device*,struct drm_gem_object*,int ) ;} ;
struct TYPE_4__ {void* dmabuf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 struct drm_gem_object* FUNC_3 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (TYPE_3__*,void*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (struct drm_device*,struct drm_gem_object*,int ) ;

int FUNC_10(struct drm_device *VAR_1,
  struct drm_file *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
  int *VAR_5)
{
 struct drm_gem_object *VAR_6;
 void *VAR_7;
 int VAR_8 = 0;
 struct dma_buf *VAR_9;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_7(&VAR_2->prime.lock);

 if (VAR_6->import_attach) {
  VAR_9 = VAR_6->import_attach->dmabuf;
  goto out_have_obj;
 }

 if (VAR_6->export_dma_buf) {
  VAR_9 = VAR_6->export_dma_buf;
  goto out_have_obj;
 }

 VAR_7 = VAR_1->driver->gem_prime_export(VAR_1, VAR_6, VAR_4);
 if (FUNC_0(VAR_7)) {



  VAR_8 = FUNC_1(VAR_7);
  goto out;
 }
 VAR_6->export_dma_buf = VAR_7;




 VAR_8 = FUNC_5(&VAR_2->prime,
           VAR_6->export_dma_buf, VAR_3);
 if (VAR_8)
  goto out;

 *VAR_5 = FUNC_2(VAR_7, VAR_4);
 FUNC_8(&VAR_2->prime.lock);
 return 0;

out_have_obj:
 FUNC_6(VAR_9);
 *VAR_5 = FUNC_2(VAR_9, VAR_4);
out:
 FUNC_4(VAR_6);
 FUNC_8(&VAR_2->prime.lock);
 return VAR_8;
}
