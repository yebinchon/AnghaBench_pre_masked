
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct modeset_buf {int map; scalar_t__ size; scalar_t__ handle; scalar_t__ stride; int fb_id; int pixel_format; int height; int width; } ;
struct drm_mode_map_dumb {int bpp; int depth; int offset; scalar_t__ handle; scalar_t__ size; scalar_t__ pitch; int fb_id; int height; int width; scalar_t__ flags; int member_0; } ;
struct drm_mode_fb_cmd {int bpp; int depth; int offset; scalar_t__ handle; scalar_t__ size; scalar_t__ pitch; int fb_id; int height; int width; scalar_t__ flags; int member_0; } ;
struct drm_mode_create_dumb {int bpp; int depth; int offset; scalar_t__ handle; scalar_t__ size; scalar_t__ pitch; int fb_id; int height; int width; scalar_t__ flags; int member_0; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ,int ,struct drm_mode_map_dumb*) ;
 int FUNC_2 (int ,scalar_t__,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_8, struct modeset_buf *VAR_9,
      int VAR_10, uint32_t VAR_11)
{
   struct drm_mode_create_dumb VAR_12 = {0};
   struct drm_mode_map_dumb VAR_13 = {0};
   struct drm_mode_fb_cmd VAR_14 = {0};

   VAR_12.width = VAR_9->width;
   VAR_12.height = VAR_9->height;
   VAR_12.bpp = VAR_10 * 8;
   VAR_12.flags = 0;
   VAR_12.pitch = 0;
   VAR_12.size = 0;
   VAR_12.handle = 0;
   FUNC_1(VAR_7.fd, VAR_1, &VAR_12);


   VAR_14.width = VAR_12.width;
   VAR_14.height = VAR_12.height;
   VAR_14.bpp = VAR_12.bpp;
   VAR_14.pitch = VAR_12.pitch;
   VAR_14.handle = VAR_12.handle;
   VAR_14.depth = 24;


   FUNC_1(VAR_7.fd,VAR_0,&VAR_14);
   VAR_13.handle=VAR_12.handle;
   FUNC_1(VAR_7.fd,VAR_2,&VAR_13);

   VAR_9->pixel_format = VAR_11;
   VAR_9->fb_id = VAR_14.fb_id;
   VAR_9->stride = VAR_12.pitch;
   VAR_9->size = VAR_12.size;
   VAR_9->handle = VAR_12.handle;


   VAR_9->map = FUNC_2(0, VAR_9->size, VAR_5 | VAR_6, VAR_4,
         VAR_8, VAR_13.offset);
   if (VAR_9->map == VAR_3)
   {
      FUNC_0 ("DRM: cannot mmap dumb buffer\n");
      return 0;
   }

   return 0;
}
