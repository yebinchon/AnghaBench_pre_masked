
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int gpu_caches_dirty; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct intel_ring_buffer*,struct drm_file*,int *) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_0,
        struct drm_file *VAR_1,
        struct intel_ring_buffer *VAR_2)
{

 VAR_2->gpu_caches_dirty = 1;


 (void)FUNC_0(VAR_2, VAR_1, ((void*)0));
}
