
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int video_smooth; } ;
struct TYPE_12__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_11__ {int smooth; } ;
struct TYPE_13__ {scalar_t__ tex_min_filter; scalar_t__ wrap_mode; unsigned int textures; size_t tex_index; int * texture; int tex_mag_filter; int tex_mipmap; TYPE_3__ video_info; int shader_data; TYPE_2__* shader; } ;
typedef TYPE_5__ gl_t ;
typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;
struct TYPE_10__ {int (* wrap_type ) (int ,int) ;int (* mipmap_input ) (int ,unsigned int) ;int (* filter_type ) (int ,int,int*) ;} ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(gl_t *VAR_5)
{
   unsigned VAR_6, VAR_7;
   GLenum VAR_8;
   GLuint VAR_9;
   enum gfx_wrap_type VAR_10;
   bool VAR_11 = 0;
   settings_t *VAR_12 = FUNC_0();

   FUNC_1(VAR_5, 0);

   if (!VAR_5->shader->filter_type(VAR_5->shader_data,
            1, &VAR_11))
      VAR_11 = VAR_12->bools.video_smooth;

   VAR_7 = 1;
   VAR_10 = VAR_5->shader->wrap_type(VAR_5->shader_data, 1);
   VAR_8 = FUNC_3(VAR_10);
   VAR_5->tex_mipmap = VAR_5->shader->mipmap_input(VAR_5->shader_data, VAR_7);
   VAR_5->video_info.smooth = VAR_11;
   VAR_9 = VAR_5->tex_mipmap ? (VAR_11 ?
         VAR_1 : VAR_3)
      : (VAR_11 ? VAR_0 : VAR_2);

   if (VAR_9 == VAR_5->tex_min_filter && VAR_8 == VAR_5->wrap_mode)
      return;

   VAR_5->tex_min_filter = VAR_9;
   VAR_5->tex_mag_filter = FUNC_2(VAR_5->tex_min_filter);
   VAR_5->wrap_mode = VAR_8;

   for (VAR_6 = 0; VAR_6 < VAR_5->textures; VAR_6++)
   {
      if (!VAR_5->texture[VAR_6])
         continue;

      FUNC_5(VAR_5->texture[VAR_6], VAR_5->wrap_mode, VAR_5->tex_mag_filter,
            VAR_5->tex_min_filter);
   }

   FUNC_4(VAR_4, VAR_5->texture[VAR_5->tex_index]);
   FUNC_1(VAR_5, 1);
}
