
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VG_CLIENT_STATE_T ;
struct TYPE_3__ {int is_destroyed; int type; scalar_t__ state; int servercontext; int is_current; } ;
typedef int GLXX_CLIENT_STATE_T ;
typedef TYPE_1__ EGL_CONTEXT_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;

void FUNC_8(EGL_CONTEXT_T *VAR_4)
{
   CLIENT_THREAD_STATE_T *VAR_5 = FUNC_0();


   FUNC_6(!VAR_4->is_current);
   FUNC_6(VAR_4->is_destroyed);

   switch (VAR_4->type) {

   case 128:
      FUNC_1(VAR_3,
                VAR_5,
                VAR_1,
                FUNC_3(VAR_4->servercontext));
      FUNC_2(VAR_5);
      FUNC_7((VG_CLIENT_STATE_T *)VAR_4->state);
      break;

   case 130:
   case 129:
       FUNC_1(VAR_2,
                VAR_5,
                VAR_0,
                FUNC_3(VAR_4->servercontext));
      FUNC_2(VAR_5);
      FUNC_5((GLXX_CLIENT_STATE_T *)VAR_4->state);
      break;
   default:
      FUNC_4();
   }

   VAR_4->state = 0;
}
