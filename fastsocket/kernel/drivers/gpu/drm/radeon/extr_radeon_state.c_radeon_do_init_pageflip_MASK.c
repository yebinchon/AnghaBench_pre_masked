
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int page_flipping; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_3__ {int pfCurrentPage; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_4, struct drm_master *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_4->dev_private;
 struct drm_radeon_master_private *VAR_7 = VAR_5->driver_priv;
 VAR_3;

 FUNC_3("\n");

 FUNC_1(6);
 FUNC_6();
 FUNC_4(FUNC_2(VAR_1, 0));
 FUNC_4(FUNC_5(VAR_1) |
   VAR_2);
 FUNC_4(FUNC_2(VAR_0, 0));
 FUNC_4(FUNC_5(VAR_0) |
   VAR_2);
 FUNC_0();

 VAR_6->page_flipping = 1;

 if (VAR_7->sarea_priv->pfCurrentPage != 1)
  VAR_7->sarea_priv->pfCurrentPage = 0;

 return 0;
}
