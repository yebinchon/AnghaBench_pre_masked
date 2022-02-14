
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int output; } ;
struct TYPE_6__ {int last_dpms; TYPE_1__ restore; } ;
struct TYPE_5__ {int saved_state; } ;


 int FUNC_0 (struct drm_device*,int ,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_device*,int *) ;
 TYPE_2__* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;

 FUNC_0(VAR_3, 0, VAR_1 +
    FUNC_2(VAR_2),
    FUNC_1(VAR_2)->restore.output);

 FUNC_3(VAR_3, &FUNC_4(VAR_2)->saved_state);

 FUNC_1(VAR_2)->last_dpms = VAR_0;
}
