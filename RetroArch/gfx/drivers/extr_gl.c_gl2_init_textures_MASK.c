
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_info_t ;
typedef int uint32_t ;
struct TYPE_4__ {int tex_w; int tex_h; int base_size; int textures; size_t tex_index; int * texture; scalar_t__ renderchain_data; int tex_min_filter; int tex_mag_filter; int wrap_mode; scalar_t__ hw_render_use; int pbo; int texture_fmt; int texture_type; int internal_fmt; } ;
typedef TYPE_1__ gl_t ;
typedef int gl2_renderchain_data_t ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *,unsigned int,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(gl_t *VAR_8, const video_info_t *VAR_9)
{
   unsigned VAR_10;
   GLenum VAR_11 = VAR_8->internal_fmt;
   GLenum VAR_12 = VAR_8->texture_type;
   GLenum VAR_13 = VAR_8->texture_fmt;
   FUNC_6(VAR_8->textures, VAR_8->texture);

   for (VAR_10 = 0; VAR_10 < VAR_8->textures; VAR_10++)
   {
      FUNC_7(VAR_8->texture[VAR_10], VAR_8->wrap_mode, VAR_8->tex_mag_filter,
            VAR_8->tex_min_filter);

      FUNC_1(
            VAR_8, (gl2_renderchain_data_t*)VAR_8->renderchain_data,
            VAR_10, VAR_11,
            VAR_13, VAR_12);
   }

   FUNC_3(VAR_4, VAR_8->texture[VAR_8->tex_index]);
}
