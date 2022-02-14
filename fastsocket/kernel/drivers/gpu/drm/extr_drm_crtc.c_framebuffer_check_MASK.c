
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct drm_mode_fb_cmd2 {int width; int height; unsigned int* pitches; unsigned int* offsets; int * handles; int pixel_format; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_mode_fb_cmd2 const*) ;

__attribute__((used)) static int FUNC_6(const struct drm_mode_fb_cmd2 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_0("bad framebuffer format 0x%08x\n", VAR_3->pixel_format);
  return VAR_4;
 }

 VAR_5 = FUNC_1(VAR_3->pixel_format);
 VAR_6 = FUNC_4(VAR_3->pixel_format);
 VAR_7 = FUNC_2(VAR_3->pixel_format);

 if (VAR_3->width == 0 || VAR_3->width % VAR_5) {
  FUNC_0("bad framebuffer width %u\n", VAR_3->height);
  return -VAR_0;
 }

 if (VAR_3->height == 0 || VAR_3->height % VAR_6) {
  FUNC_0("bad framebuffer height %u\n", VAR_3->height);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  unsigned int VAR_9 = VAR_3->width / (VAR_8 != 0 ? VAR_5 : 1);
  unsigned int VAR_10 = VAR_3->height / (VAR_8 != 0 ? VAR_6 : 1);
  unsigned int VAR_11 = FUNC_3(VAR_3->pixel_format, VAR_8);

  if (!VAR_3->handles[VAR_8]) {
   FUNC_0("no buffer object handle for plane %d\n", VAR_8);
   return -VAR_0;
  }

  if ((uint64_t) VAR_9 * VAR_11 > VAR_2)
   return -VAR_1;

  if ((uint64_t) VAR_10 * VAR_3->pitches[VAR_8] + VAR_3->offsets[VAR_8] > VAR_2)
   return -VAR_1;

  if (VAR_3->pitches[VAR_8] < VAR_9 * VAR_11) {
   FUNC_0("bad pitch %u for plane %d\n", VAR_3->pitches[VAR_8], VAR_8);
   return -VAR_0;
  }
 }

 return 0;
}
