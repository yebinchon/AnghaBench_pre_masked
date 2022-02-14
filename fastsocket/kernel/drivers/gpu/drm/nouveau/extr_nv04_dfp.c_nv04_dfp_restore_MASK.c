
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int head; } ;
struct nouveau_encoder {int last_dpms; TYPE_5__* dcb; TYPE_1__ restore; } ;
struct nouveau_connector {TYPE_2__* native_mode; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_11__ {TYPE_3__* crtc_reg; } ;
struct TYPE_13__ {TYPE_4__ saved_reg; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_10__ {int pllvals; } ;
struct TYPE_9__ {int clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,TYPE_5__*,int,int ,int ) ;
 struct nouveau_encoder* FUNC_1 (struct drm_encoder*) ;
 struct nouveau_connector* FUNC_2 (struct nouveau_encoder*) ;
 int FUNC_3 (int *) ;
 TYPE_6__* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,TYPE_5__*,int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_4)
{
 struct nouveau_encoder *VAR_5 = FUNC_1(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 int VAR_7 = VAR_5->restore.head;

 if (VAR_5->dcb->type == VAR_0) {
  struct nouveau_connector *VAR_8 =
   FUNC_2(VAR_5);

  if (VAR_8 && VAR_8->native_mode)
   FUNC_0(VAR_6, VAR_5->dcb, VAR_7,
      VAR_2,
      VAR_8->native_mode->clock);

 } else if (VAR_5->dcb->type == VAR_1) {
  int VAR_9 = FUNC_3
     (&FUNC_4(VAR_6)->saved_reg.crtc_reg[VAR_7].pllvals);

  FUNC_5(VAR_6, VAR_5->dcb, VAR_7, VAR_9);
 }

 VAR_5->last_dpms = VAR_3;
}
