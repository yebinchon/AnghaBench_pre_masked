
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* render_callback ) () ;void (* flush_callback ) (int) ;} ;
typedef TYPE_1__ VG_CLIENT_STATE_T ;
struct TYPE_7__ {int type; scalar_t__ state; } ;
struct TYPE_6__ {void (* render_callback ) () ;void (* flush_callback ) (int) ;} ;
typedef TYPE_2__ GLXX_CLIENT_STATE_T ;
typedef TYPE_3__ EGL_CONTEXT_T ;





 int FUNC_0 () ;

void FUNC_1(EGL_CONTEXT_T *VAR_0,
                               void (*VAR_1)(void),
                               void (*VAR_2)(bool),
                               void (*VAR_3)(void),
                               void (*VAR_4)(bool))
{
   switch (VAR_0->type) {
      case 130:
      {
         GLXX_CLIENT_STATE_T *VAR_5 = (GLXX_CLIENT_STATE_T *)VAR_0->state;
         VAR_5->render_callback = VAR_1;
         VAR_5->flush_callback = VAR_2;
         break;
      }
      case 129:
      {
         GLXX_CLIENT_STATE_T *VAR_6 = (GLXX_CLIENT_STATE_T *)VAR_0->state;
         VAR_6->render_callback = VAR_1;
         VAR_6->flush_callback = VAR_2;
         break;
      }
      case 128:
      {
         VG_CLIENT_STATE_T *VAR_7 = (VG_CLIENT_STATE_T *)VAR_0->state;
         VAR_7->render_callback = VAR_3;
         VAR_7->flush_callback = VAR_4;
         break;
      }
      default:
         FUNC_0();
   }
}
