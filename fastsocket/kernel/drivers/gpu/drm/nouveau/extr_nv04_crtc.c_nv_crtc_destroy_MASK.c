
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvbo; } ;
struct nouveau_crtc {TYPE_1__ cursor; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct nouveau_crtc*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct nouveau_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0)
{
 struct nouveau_crtc *VAR_1 = FUNC_5(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(VAR_0);

 FUNC_3(VAR_1->cursor.nvbo);
 FUNC_4(VAR_1->cursor.nvbo);
 FUNC_2(((void*)0), &VAR_1->cursor.nvbo);
 FUNC_1(VAR_1);
}
