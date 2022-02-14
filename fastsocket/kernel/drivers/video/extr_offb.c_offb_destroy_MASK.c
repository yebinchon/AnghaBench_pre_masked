
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int aperture_size; int aperture_base; scalar_t__ screen_base; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 if (VAR_0->screen_base)
  FUNC_1(VAR_0->screen_base);
 FUNC_2(VAR_0->aperture_base, VAR_0->aperture_size);
 FUNC_0(VAR_0);
}
