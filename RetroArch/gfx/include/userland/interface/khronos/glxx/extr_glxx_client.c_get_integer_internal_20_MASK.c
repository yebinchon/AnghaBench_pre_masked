
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pack; int unpack; } ;
struct TYPE_5__ {TYPE_1__ alignment; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_2__ GLXX_CLIENT_STATE_T ;
typedef int CLIENT_THREAD_STATE_T ;


 TYPE_2__* FUNC_0 (int *) ;


 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(CLIENT_THREAD_STATE_T *VAR_0, GLenum VAR_1, GLint *VAR_2)
{
   GLXX_CLIENT_STATE_T *VAR_3 = FUNC_0(VAR_0);

   FUNC_2(VAR_3 != ((void*)0));

   switch (VAR_1) {
   case 128:
      VAR_2[0] = VAR_3->alignment.unpack;
      return 1;
   case 129:
      VAR_2[0] = VAR_3->alignment.pack;
      return 1;
   default:
      FUNC_1();
      break;
   }

   return 0;
}
