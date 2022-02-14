
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct nouveau_crtc {struct drm_crtc base; } ;



__attribute__((used)) static inline struct drm_crtc *FUNC_0(struct nouveau_crtc *VAR_0)
{
 return &VAR_0->base;
}
