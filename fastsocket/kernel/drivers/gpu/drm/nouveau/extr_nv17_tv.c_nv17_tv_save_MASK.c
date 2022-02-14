
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ptv_200; } ;
struct TYPE_6__ {int ptv_200; } ;
struct nv17_tv_encoder {TYPE_3__ saved_state; TYPE_2__ state; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {int output; } ;
struct TYPE_8__ {TYPE_1__ restore; } ;


 int FUNC_0 (struct drm_device*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_device*,TYPE_3__*) ;
 struct nv17_tv_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct nv17_tv_encoder *VAR_3 = FUNC_4(VAR_1);

 FUNC_1(VAR_1)->restore.output =
     FUNC_0(VAR_2, 0,
     VAR_0 +
     FUNC_2(VAR_1));

 FUNC_3(VAR_2, &VAR_3->saved_state);

 VAR_3->state.ptv_200 = VAR_3->saved_state.ptv_200;
}
