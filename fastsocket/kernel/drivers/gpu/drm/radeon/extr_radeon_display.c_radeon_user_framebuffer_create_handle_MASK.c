
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_framebuffer {int obj; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_file*,int ,unsigned int*) ;
 struct radeon_framebuffer* FUNC_1 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_2(struct drm_framebuffer *VAR_0,
        struct drm_file *VAR_1,
        unsigned int *VAR_2)
{
 struct radeon_framebuffer *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_3->obj, VAR_2);
}
