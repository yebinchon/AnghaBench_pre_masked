
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {scalar_t__ nbox; int dirty; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_6__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;
typedef int drm_r128_clear_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct drm_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_r128_private_t *VAR_6 = VAR_3->dev_private;
 drm_r128_sarea_t *VAR_7;
 drm_r128_clear_t *VAR_8 = VAR_4;
 FUNC_2("\n");

 FUNC_3(VAR_3, VAR_5);

 FUNC_1(VAR_6);

 FUNC_4(VAR_6);

 VAR_7 = VAR_6->sarea_priv;

 if (VAR_7->nbox > VAR_0)
  VAR_7->nbox = VAR_0;

 FUNC_5(VAR_3, VAR_8);
 FUNC_0();



 VAR_6->sarea_priv->dirty |= VAR_1 | VAR_2;

 return 0;
}
