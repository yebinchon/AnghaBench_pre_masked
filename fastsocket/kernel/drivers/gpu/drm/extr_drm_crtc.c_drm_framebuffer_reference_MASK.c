
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_framebuffer {int refcount; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_framebuffer *VAR_0)
{
 FUNC_0("FB ID: %d\n", VAR_0->base.id);
 FUNC_1(&VAR_0->refcount);
}
