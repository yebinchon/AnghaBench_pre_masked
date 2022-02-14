
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_encoder {int last_dpms; TYPE_1__* dcb; } ;
struct nouveau_drm {int dummy; } ;
struct drm_encoder {int dev; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int ) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 struct nouveau_encoder* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_1, int VAR_2)
{
 struct nouveau_encoder *VAR_3 = FUNC_2(VAR_1);
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_1->dev);

 if (VAR_3->last_dpms == VAR_2)
  return;
 VAR_3->last_dpms = VAR_2;

 FUNC_0(VAR_4, "Setting dpms mode %d on vga encoder (output %d)\n",
   VAR_2, VAR_3->dcb->index);

 FUNC_3(VAR_1, VAR_2 == VAR_0);
}
