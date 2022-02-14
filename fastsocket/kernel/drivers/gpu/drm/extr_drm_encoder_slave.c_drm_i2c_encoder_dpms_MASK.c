
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int (* dpms ) (struct drm_encoder*,int) ;} ;


 TYPE_1__* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int) ;

void FUNC_2(struct drm_encoder *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0)->dpms(VAR_0, VAR_1);
}
