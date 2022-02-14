
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv17_tv_state {int ptv_200; } ;
struct nv17_tv_norm_params {scalar_t__ kind; } ;
struct nouveau_gpio {int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;} ;
struct nouveau_drm {int device; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int last_dpms; TYPE_1__* dcb; } ;
struct TYPE_5__ {struct nv17_tv_state state; } ;
struct TYPE_4__ {int index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int ) ;
 struct nv17_tv_norm_params* FUNC_1 (struct drm_encoder*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_3__* FUNC_3 (struct drm_encoder*) ;
 struct nouveau_gpio* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_encoder*,int) ;
 int FUNC_6 (struct drm_encoder*,int) ;
 int FUNC_7 (struct drm_device*,struct nv17_tv_state*,int) ;
 int FUNC_8 (struct nouveau_gpio*,int ,int ,int,int) ;
 int FUNC_9 (struct nouveau_gpio*,int ,int ,int,int) ;
 TYPE_2__* FUNC_10 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_11(struct drm_encoder *VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct nouveau_drm *VAR_8 = FUNC_2(VAR_7);
 struct nouveau_gpio *VAR_9 = FUNC_4(VAR_8->device);
 struct nv17_tv_state *VAR_10 = &FUNC_10(VAR_5)->state;
 struct nv17_tv_norm_params *VAR_11 = FUNC_1(VAR_5);

 if (FUNC_3(VAR_5)->last_dpms == VAR_6)
  return;
 FUNC_3(VAR_5)->last_dpms = VAR_6;

 FUNC_0(VAR_8, "Setting dpms mode %d on TV encoder (output %d)\n",
   VAR_6, FUNC_3(VAR_5)->dcb->index);

 VAR_10->ptv_200 &= ~1;

 if (VAR_11->kind == VAR_0) {
  FUNC_6(VAR_5, VAR_6);

 } else {
  FUNC_6(VAR_5, VAR_3);

  if (VAR_6 == VAR_4)
   VAR_10->ptv_200 |= 1;
 }

 FUNC_7(VAR_7, VAR_10, 200);

 VAR_9->set(VAR_9, 0, VAR_2, 0xff, VAR_6 == VAR_4);
 VAR_9->set(VAR_9, 0, VAR_1, 0xff, VAR_6 == VAR_4);

 FUNC_5(VAR_5, VAR_6 == VAR_4);
}
