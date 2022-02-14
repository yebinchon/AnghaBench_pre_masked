
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; TYPE_2__* dev_private; } ;
struct TYPE_3__ {int table_size; } ;
struct TYPE_4__ {int fb_aper_offset; TYPE_1__ gart_info; } ;
typedef TYPE_2__ drm_radeon_private_t ;
typedef int drm_local_map_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ,int ,int ,int ,int **) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct drm_device *VAR_3)
{
 int VAR_4;
 drm_local_map_t *VAR_5;
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;

 VAR_6->gart_info.table_size = VAR_0;

 VAR_6->fb_aper_offset = FUNC_2(VAR_3->pdev, 0);
 VAR_4 = FUNC_0(VAR_3, VAR_6->fb_aper_offset,
    FUNC_1(VAR_3->pdev, 0), VAR_1,
    VAR_2, &VAR_5);
 if (VAR_4 != 0)
  return VAR_4;

 return 0;
}
