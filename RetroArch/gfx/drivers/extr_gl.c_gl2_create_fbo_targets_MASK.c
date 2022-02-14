
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fbo_feedback; scalar_t__ fbo_feedback_texture; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_6__ {int fbo_pass; scalar_t__* fbo; scalar_t__* fbo_texture; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (float,float,float,float) ;

__attribute__((used)) static bool FUNC_9(gl_t *VAR_5, gl2_renderchain_data_t *VAR_6)
{
   unsigned VAR_7;

   FUNC_6(VAR_1, 0);
   FUNC_5(VAR_6->fbo_pass, VAR_6->fbo);

   for (VAR_7 = 0; VAR_7 < (unsigned)VAR_6->fbo_pass; VAR_7++)
   {
      GLenum VAR_8;

      FUNC_1(VAR_6->fbo[VAR_7]);
      FUNC_4(VAR_3,
            VAR_2, VAR_1, VAR_6->fbo_texture[VAR_7], 0);

      VAR_8 = FUNC_2(VAR_3);
      if (VAR_8 != VAR_4)
         goto error;
   }

   if (VAR_5->fbo_feedback_texture)
   {
      GLenum VAR_9;

      FUNC_5(1, &VAR_5->fbo_feedback);
      FUNC_1(VAR_5->fbo_feedback);
      FUNC_4(VAR_3,
            VAR_2, VAR_1,
            VAR_5->fbo_feedback_texture, 0);

      VAR_9 = FUNC_2(VAR_3);
      if (VAR_9 != VAR_4)
         goto error;



      FUNC_8(0.0f, 0.0f, 0.0f, 0.0f);
      FUNC_7(VAR_0);
   }

   return 1;

error:
   FUNC_3(VAR_6->fbo_pass, VAR_6->fbo);
   if (VAR_5->fbo_feedback)
      FUNC_3(1, &VAR_5->fbo_feedback);
   FUNC_0("[GL]: Failed to set up frame buffer objects. Multi-pass shading will not work.\n");
   return 0;
}
