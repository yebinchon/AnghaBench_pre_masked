
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int pixel_format; int * offsets; int * pitches; int height; int width; } ;
struct drm_framebuffer {int pixel_format; int bits_per_pixel; int depth; int * offsets; int * pitches; int height; int width; } ;


 int FUNC_0 (int ,int *,int *) ;

int FUNC_1(struct drm_framebuffer *VAR_0,
       struct drm_mode_fb_cmd2 *VAR_1)
{
 int VAR_2;

 VAR_0->width = VAR_1->width;
 VAR_0->height = VAR_1->height;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_0->pitches[VAR_2] = VAR_1->pitches[VAR_2];
  VAR_0->offsets[VAR_2] = VAR_1->offsets[VAR_2];
 }
 FUNC_0(VAR_1->pixel_format, &VAR_0->depth,
        &VAR_0->bits_per_pixel);
 VAR_0->pixel_format = VAR_1->pixel_format;

 return 0;
}
