
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct nv04_mode_state {int pllsel; } ;
struct nouveau_encoder {TYPE_1__* dcb; } ;
struct nouveau_drm {int dummy; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_8__ {int (* dpms ) (struct drm_encoder*,int) ;} ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {struct nv04_mode_state mode_reg; } ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ,int) ;
 int FUNC_2 (struct drm_device*,int,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct nouveau_drm*,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_4 (struct drm_encoder*) ;
 TYPE_3__* FUNC_5 (int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_encoder* FUNC_7 (struct drm_encoder*) ;
 TYPE_2__* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct nouveau_drm *VAR_8 = FUNC_6(VAR_7);
 struct nouveau_encoder *VAR_9 = FUNC_7(VAR_5);
 struct nv04_mode_state *VAR_10 = &FUNC_8(VAR_7)->mode_reg;
 uint8_t VAR_11;

 FUNC_3(VAR_8, "Setting dpms mode %d on TV encoder (output %d)\n",
   VAR_6, VAR_9->dcb->index);

 VAR_10->pllsel &= ~(VAR_3 | VAR_4);

 if (VAR_6 == VAR_0) {
  int VAR_12 = FUNC_5(VAR_5->crtc)->index;
  VAR_11 = FUNC_0(VAR_7, VAR_12, VAR_1);

  VAR_10->pllsel |= VAR_12 ? VAR_4 :
     VAR_3;


  VAR_11 |= 0x80;

  FUNC_2(VAR_7, VAR_12, VAR_1, VAR_11);
 }

 FUNC_1(VAR_7, 0, VAR_2, VAR_10->pllsel);

 FUNC_4(VAR_5)->dpms(VAR_5, VAR_6);
}
