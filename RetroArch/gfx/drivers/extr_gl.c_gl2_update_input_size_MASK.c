
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int coord; } ;
struct TYPE_5__ {unsigned int* last_width; size_t tex_index; unsigned int* last_height; int tex_w; int tex_h; int base_size; int textures; TYPE_1__ tex_info; scalar_t__ empty_buf; int texture_fmt; int texture_type; } ;
typedef TYPE_2__ gl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,float,float) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(gl_t *VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6, bool VAR_7)
{
   float VAR_8, VAR_9;

   if ((VAR_4 != VAR_3->last_width[VAR_3->tex_index] ||
            VAR_5 != VAR_3->last_height[VAR_3->tex_index]) && VAR_3->empty_buf)
   {


      VAR_3->last_width[VAR_3->tex_index] = VAR_4;
      VAR_3->last_height[VAR_3->tex_index] = VAR_5;

      if (VAR_7)
      {
         FUNC_1(VAR_2,
               FUNC_4(VAR_4 * sizeof(uint32_t)));






         FUNC_2(VAR_0,
               0, 0, 0, VAR_3->tex_w, VAR_3->tex_h, VAR_3->texture_type,
               VAR_3->texture_fmt, VAR_3->empty_buf);

      }
   }


   else if ((VAR_4 !=
            VAR_3->last_width[(VAR_3->tex_index + VAR_3->textures - 1) % VAR_3->textures]) ||
         (VAR_5 !=
          VAR_3->last_height[(VAR_3->tex_index + VAR_3->textures - 1) % VAR_3->textures])) { }
   else
      return;

   VAR_8 = (float)VAR_4 / VAR_3->tex_w;
   VAR_9 = (float)VAR_5 / VAR_3->tex_h;
   FUNC_3(VAR_3->tex_info.coord, VAR_8, VAR_9);
}
