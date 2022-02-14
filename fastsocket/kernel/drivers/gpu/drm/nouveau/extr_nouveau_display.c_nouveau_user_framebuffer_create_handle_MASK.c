
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_framebuffer {TYPE_1__* nvbo; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct TYPE_2__ {int gem; } ;


 int FUNC_0 (struct drm_file*,int ,unsigned int*) ;
 struct nouveau_framebuffer* FUNC_1 (struct drm_framebuffer*) ;

__attribute__((used)) static int
FUNC_2(struct drm_framebuffer *VAR_0,
           struct drm_file *VAR_1,
           unsigned int *VAR_2)
{
 struct nouveau_framebuffer *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_3->nvbo->gem, VAR_2);
}
