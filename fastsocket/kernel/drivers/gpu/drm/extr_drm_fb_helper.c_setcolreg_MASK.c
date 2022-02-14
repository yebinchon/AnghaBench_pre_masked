
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {int length; int offset; } ;
struct TYPE_11__ {int length; int offset; } ;
struct TYPE_10__ {int length; int offset; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_13__ {TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_8__ {scalar_t__ visual; } ;
struct fb_info {TYPE_6__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; struct drm_fb_helper* par; } ;
struct drm_framebuffer {int bits_per_pixel; int depth; } ;
struct drm_fb_helper {TYPE_7__* funcs; struct drm_framebuffer* fb; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_14__ {int (* gamma_set ) (struct drm_crtc*,int,int,int,int) ;int (* gamma_get ) (struct drm_crtc*,int*,int*,int*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_crtc*,int,int,int,int) ;
 int FUNC_1 (struct drm_crtc*,int*,int*,int*,int) ;
 int FUNC_2 (struct drm_crtc*,int,int,int,int) ;
 int FUNC_3 (struct drm_crtc*,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_2, u16 VAR_3, u16 VAR_4,
       u16 VAR_5, u16 VAR_6, struct fb_info *VAR_7)
{
 struct drm_fb_helper *VAR_8 = VAR_7->par;
 struct drm_framebuffer *VAR_9 = VAR_8->fb;
 int VAR_10;

 if (VAR_7->fix.visual == VAR_1) {
  u32 *VAR_11;
  u32 VAR_12;

  if (VAR_6 > 16)
   return -VAR_0;
  VAR_11 = (u32 *)VAR_7->pseudo_palette;
  VAR_3 >>= (16 - VAR_7->var.red.length);
  VAR_4 >>= (16 - VAR_7->var.green.length);
  VAR_5 >>= (16 - VAR_7->var.blue.length);
  VAR_12 = (VAR_3 << VAR_7->var.red.offset) |
   (VAR_4 << VAR_7->var.green.offset) |
   (VAR_5 << VAR_7->var.blue.offset);
  if (VAR_7->var.transp.length > 0) {
   u32 VAR_13 = (1 << VAR_7->var.transp.length) - 1;
   VAR_13 <<= VAR_7->var.transp.offset;
   VAR_12 |= VAR_13;
  }
  VAR_11[VAR_6] = VAR_12;
  return 0;
 }

 VAR_10 = VAR_6;

 if (VAR_9->bits_per_pixel == 16) {
  VAR_10 = VAR_6 << 3;

  if (VAR_9->depth == 16 && VAR_6 > 63)
   return -VAR_0;
  if (VAR_9->depth == 15 && VAR_6 > 31)
   return -VAR_0;

  if (VAR_9->depth == 16) {
   u16 VAR_14, VAR_15, VAR_16;
   int VAR_17;
   if (VAR_6 < 32) {
    for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
     VAR_8->funcs->gamma_set(VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_10 + VAR_17);
   }

   VAR_8->funcs->gamma_get(VAR_2, &VAR_14,
          &VAR_15, &VAR_16,
          VAR_10 >> 1);

   for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
    VAR_8->funcs->gamma_set(VAR_2, VAR_14,
           VAR_4, VAR_16,
           (VAR_10 >> 1) + VAR_17);
  }
 }

 if (VAR_9->depth != 16)
  VAR_8->funcs->gamma_set(VAR_2, VAR_3, VAR_4, VAR_5, VAR_10);
 return 0;
}
