
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t server; } ;
struct TYPE_7__ {TYPE_2__* attrib; TYPE_1__ active_texture; } ;
struct TYPE_6__ {int * value; } ;
typedef int GLfloat ;
typedef int GLenum ;
typedef TYPE_3__ GLXX_CLIENT_STATE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* FUNC_0 (int *) ;




 size_t VAR_4 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(CLIENT_THREAD_STATE_T *VAR_5, GLenum VAR_6, GLfloat *VAR_7)
{
   GLXX_CLIENT_STATE_T *VAR_8 = FUNC_0(VAR_5);

   int VAR_9;

   switch (VAR_6) {
   case 129:
   {




      for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
         VAR_7[VAR_9] = VAR_8->attrib[VAR_8->active_texture.server - VAR_4 + VAR_3].value[VAR_9];
      return 4;
   }
   case 131:
   {
      for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
         VAR_7[VAR_9] = VAR_8->attrib[VAR_0].value[VAR_9];
      return 4;
   }
   case 130:
   {
      for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
         VAR_7[VAR_9] = VAR_8->attrib[VAR_1].value[VAR_9];
      return 3;
   }
   case 128:
      VAR_7[0] = VAR_8->attrib[VAR_2].value[0];
      return 1;
   default:
      FUNC_1();
      break;
   }

   return 0;
}
