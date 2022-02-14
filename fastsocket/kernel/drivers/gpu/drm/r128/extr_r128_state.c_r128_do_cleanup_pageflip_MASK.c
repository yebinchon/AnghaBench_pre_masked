
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ current_page; scalar_t__ page_flipping; int crtc_offset_cntl; int crtc_offset; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2)
{
 drm_r128_private_t *VAR_3 = VAR_2->dev_private;
 FUNC_1("\n");

 FUNC_2(VAR_0, VAR_3->crtc_offset);
 FUNC_2(VAR_1, VAR_3->crtc_offset_cntl);

 if (VAR_3->current_page != 0) {
  FUNC_3(VAR_2);
  FUNC_0();
 }

 VAR_3->page_flipping = 0;
 return 0;
}
