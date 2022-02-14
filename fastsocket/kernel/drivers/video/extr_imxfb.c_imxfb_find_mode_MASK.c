
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxfb_info {int num_modes; struct imx_fb_videomode const* mode; } ;
struct TYPE_2__ {int name; } ;
typedef struct imx_fb_videomode {TYPE_1__ mode; } const imx_fb_videomode ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const struct imx_fb_videomode *FUNC_1(struct imxfb_info *VAR_1)
{
 struct imx_fb_videomode *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = &VAR_1->mode[0]; VAR_3 < VAR_1->num_modes; VAR_3++, VAR_2++) {
  if (!FUNC_0(VAR_2->mode.name, VAR_0))
   return VAR_2;
 }
 return ((void*)0);
}
