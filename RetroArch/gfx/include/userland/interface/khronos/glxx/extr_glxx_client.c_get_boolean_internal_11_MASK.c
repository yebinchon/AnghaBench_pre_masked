
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t client; } ;
struct TYPE_7__ {TYPE_2__* attrib; TYPE_1__ active_texture; } ;
struct TYPE_6__ {int enabled; } ;
typedef int GLenum ;
typedef int GLboolean ;
typedef TYPE_3__ GLXX_CLIENT_STATE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_3__* FUNC_0 (int *) ;




 size_t VAR_7 ;



 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(CLIENT_THREAD_STATE_T *VAR_8, GLenum VAR_9, GLboolean *VAR_10)
{
   GLXX_CLIENT_STATE_T *VAR_11 = FUNC_0(VAR_8);

   FUNC_2(VAR_11 != ((void*)0));

   switch (VAR_9) {
   case 129:
      VAR_10[0] = VAR_11->attrib[VAR_6].enabled;
      return 1;
   case 132:
      VAR_10[0] = VAR_11->attrib[VAR_3].enabled;
      return 1;
   case 134:
      VAR_10[0] = VAR_11->attrib[VAR_0].enabled;
      return 1;
   case 130:
      VAR_10[0] = VAR_11->attrib[VAR_11->active_texture.client - VAR_7 + VAR_5].enabled;
      return 1;
   case 131:
      VAR_10[0] = VAR_11->attrib[VAR_4].enabled;
      return 1;
   case 133:
      VAR_10[0] = VAR_11->attrib[VAR_1].enabled;
      return 1;
   case 128:
      VAR_10[0] = VAR_11->attrib[VAR_2].enabled;
      return 1;
   default:
      FUNC_1();
      break;
   }

   return 0;
}
