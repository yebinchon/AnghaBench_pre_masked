
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_10__ {TYPE_3__* gl; int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_4__ gl_raster_t ;
struct TYPE_8__ {float height; } ;
struct TYPE_9__ {TYPE_2__ vp; } ;
struct TYPE_7__ {scalar_t__ (* get_line_height ) (int ) ;} ;
typedef float GLfloat ;


 int FUNC_0 (TYPE_4__*,char const*,unsigned int,float,float const*,float,float,unsigned int,int *) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
      gl_raster_t *VAR_0, const char *VAR_1, GLfloat VAR_2,
      const GLfloat VAR_3[4], GLfloat VAR_4, GLfloat VAR_5,
      unsigned VAR_6,
      video_frame_info_t *VAR_7)
{
   float VAR_8;
   int VAR_9 = 0;


   if (!VAR_0->font_driver->get_line_height)
   {
      FUNC_0(VAR_0,
            VAR_1, (unsigned)FUNC_2(VAR_1), VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6,
            VAR_7);
      return;
   }

   VAR_8 = (float) VAR_0->font_driver->get_line_height(VAR_0->font_data) *
                     VAR_2 / VAR_0->gl->vp.height;

   for (;;)
   {
      const char *VAR_10 = FUNC_1(VAR_1, '\n');
      unsigned VAR_11 = VAR_10
         ? (unsigned)(VAR_10 - VAR_1) : (unsigned)FUNC_2(VAR_1);


      FUNC_0(VAR_0,
            VAR_1, VAR_11, VAR_2, VAR_3, VAR_4,
            VAR_5 - (float)VAR_9*VAR_8, VAR_6,
            VAR_7);

      if (!VAR_10)
         break;

      VAR_1 += VAR_11 + 1;
      VAR_9++;
   }
}
