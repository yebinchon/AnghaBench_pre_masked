
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * funcs; } ;
struct radeon_fbdev {TYPE_3__ helper; struct radeon_device* rdev; } ;
struct TYPE_7__ {struct radeon_fbdev* rfbdev; } ;
struct TYPE_6__ {int real_vram_size; } ;
struct radeon_device {int ddev; int num_crtc; TYPE_2__ mode_info; TYPE_1__ mc; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_fbdev*) ;
 struct radeon_fbdev* FUNC_6 (int,int ) ;
 int VAR_3 ;

int FUNC_7(struct radeon_device *VAR_4)
{
 struct radeon_fbdev *VAR_5;
 int VAR_6 = 32;
 int VAR_7;


 if (FUNC_0(VAR_4) || VAR_4->mc.real_vram_size <= (32*1024*1024))
  VAR_6 = 8;

 VAR_5 = FUNC_6(sizeof(struct radeon_fbdev), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->rdev = VAR_4;
 VAR_4->mode_info.rfbdev = VAR_5;
 VAR_5->helper.funcs = &VAR_3;

 VAR_7 = FUNC_1(VAR_4->ddev, &VAR_5->helper,
     VAR_4->num_crtc,
     VAR_2);
 if (VAR_7) {
  FUNC_5(VAR_5);
  return VAR_7;
 }

 FUNC_3(&VAR_5->helper);


 FUNC_4(VAR_4->ddev);

 FUNC_2(&VAR_5->helper, VAR_6);
 return 0;
}
