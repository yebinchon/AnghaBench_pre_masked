
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct nouveau_encoder {TYPE_1__ base; } ;



__attribute__((used)) static inline struct drm_encoder *FUNC_0(struct nouveau_encoder *VAR_0)
{
 return &VAR_0->base.base;
}
