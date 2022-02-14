
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int crtc_offset_cntl; int front_offset; int page_flipping; scalar_t__ current_page; TYPE_1__* sarea_priv; void* crtc_offset; } ;
typedef TYPE_2__ drm_r128_private_t ;
struct TYPE_3__ {scalar_t__ pfCurrentPage; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_3->dev_private;
 FUNC_0("\n");

 VAR_4->crtc_offset = FUNC_1(VAR_0);
 VAR_4->crtc_offset_cntl = FUNC_1(VAR_1);

 FUNC_2(VAR_0, VAR_4->front_offset);
 FUNC_2(VAR_1,
     VAR_4->crtc_offset_cntl | VAR_2);

 VAR_4->page_flipping = 1;
 VAR_4->current_page = 0;
 VAR_4->sarea_priv->pfCurrentPage = VAR_4->current_page;

 return 0;
}
