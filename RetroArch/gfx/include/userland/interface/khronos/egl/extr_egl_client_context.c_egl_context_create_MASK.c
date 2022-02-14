
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * shared_state; } ;
typedef TYPE_1__ VG_CLIENT_STATE_T ;
typedef int VG_CLIENT_SHARED_STATE_T ;
struct TYPE_8__ {int type; int is_current; int is_destroyed; void* servercontext; int * state; int renderbuffer; int configname; int display; int name; } ;
typedef int GLXX_CLIENT_STATE_T ;
typedef int EGL_CONTEXT_TYPE_T ;
typedef TYPE_2__ EGL_CONTEXT_T ;
typedef int EGLDisplay ;
typedef int EGLContext ;
typedef int EGLConfig ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int ,int *,int ,void*,int const) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;

EGL_CONTEXT_T *FUNC_14(EGL_CONTEXT_T *VAR_7, EGLContext VAR_8, EGLDisplay VAR_9, EGLConfig VAR_10, EGL_CONTEXT_TYPE_T VAR_11)
{
   EGL_CONTEXT_T *VAR_12 = (EGL_CONTEXT_T *)FUNC_8(sizeof(EGL_CONTEXT_T), "EGL_CONTEXT_T");
   if (!VAR_12)
      return 0;

   VAR_12->name = VAR_8;
   VAR_12->display = VAR_9;
   VAR_12->configname = VAR_10;

   VAR_12->type = VAR_11;

   VAR_12->renderbuffer = VAR_3;

   VAR_12->is_current = 0;
   VAR_12->is_destroyed = 0;

   switch (VAR_11) {

   case 128:
   {
      VG_CLIENT_SHARED_STATE_T *VAR_13;
      if (VAR_7) {
         VAR_13 = ((VG_CLIENT_STATE_T *)VAR_7->state)->shared_state;
         FUNC_9(VAR_13);
      } else {
         VAR_13 = FUNC_10();
         if (!VAR_13) {
            FUNC_7(VAR_12);
            return 0;
         }
      }

      VAR_12->state = FUNC_12(VAR_13);
      FUNC_11(VAR_13);
      if (!VAR_12->state) {
         FUNC_7(VAR_12);
         return 0;
      }

      {
      CLIENT_THREAD_STATE_T *VAR_14 = FUNC_0();

      VAR_12->servercontext = FUNC_2(FUNC_1(VAR_6,
                                                             VAR_14,
                                                             VAR_2,
                                                             VAR_7 ? VAR_7->servercontext : 0,
                                                          VAR_7 ? VAR_7->type : 128 ));
      }
      if (!VAR_12->servercontext) {
         FUNC_13((VG_CLIENT_STATE_T *)VAR_12->state);
         FUNC_7(VAR_12);
         return 0;
      }

      break;
   }

   case 130:
   {
      GLXX_CLIENT_STATE_T *VAR_15 = (GLXX_CLIENT_STATE_T *)FUNC_8(sizeof(GLXX_CLIENT_STATE_T), "GLXX_CLIENT_STATE_T");
      if (!VAR_15) {
         FUNC_7(VAR_12);
         return 0;
      }

      VAR_12->state = VAR_15;
      if (FUNC_4(VAR_15)) {
         CLIENT_THREAD_STATE_T *VAR_16 = FUNC_0();
         VAR_12->servercontext = FUNC_2(FUNC_1(VAR_4,
                                                             VAR_16,
                                                             VAR_0,
                                                             VAR_7 ? VAR_7->servercontext : 0,
                                                             VAR_7 ? VAR_7->type : 130 ));
         if (!VAR_12->servercontext) {
            FUNC_6(VAR_15);
            FUNC_7(VAR_12);
            return 0;
         }
      }
      break;
   }
   case 129:
   {
      GLXX_CLIENT_STATE_T *VAR_17 = (GLXX_CLIENT_STATE_T *)FUNC_8(sizeof(GLXX_CLIENT_STATE_T), "GLXX_CLIENT_STATE_T");
      if (!VAR_17) {
         FUNC_7(VAR_12);
         return 0;
      }

      VAR_12->state = VAR_17;

      if (FUNC_5(VAR_17)) {
         CLIENT_THREAD_STATE_T *VAR_18 = FUNC_0();
         VAR_12->servercontext = FUNC_2(FUNC_1(VAR_5,
                                                             VAR_18,
                                                             VAR_1,
                                                             VAR_7 ? VAR_7->servercontext : 0,
                                                             VAR_7 ? VAR_7->type : 129 ));
         if (!VAR_12->servercontext) {
            FUNC_6(VAR_17);
            FUNC_7(VAR_12);
            return 0;
         }
      }
      break;
   }
   default:
      FUNC_3();
      break;
   }

   return VAR_12;
}
