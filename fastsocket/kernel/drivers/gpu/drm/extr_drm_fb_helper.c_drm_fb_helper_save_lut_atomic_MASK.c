
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct drm_fb_helper {TYPE_1__* funcs; } ;
struct drm_crtc {int gamma_size; int * gamma_store; } ;
struct TYPE_2__ {int (* gamma_get ) (struct drm_crtc*,int *,int *,int *,int) ;} ;


 int FUNC_0 (struct drm_crtc*,int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0, struct drm_fb_helper *VAR_1)
{
 uint16_t *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_2 = VAR_0->gamma_store;
 VAR_3 = VAR_2 + VAR_0->gamma_size;
 VAR_4 = VAR_3 + VAR_0->gamma_size;

 for (VAR_5 = 0; VAR_5 < VAR_0->gamma_size; VAR_5++)
  VAR_1->funcs->gamma_get(VAR_0, &VAR_2[VAR_5], &VAR_3[VAR_5], &VAR_4[VAR_5], VAR_5);
}
