
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor; int major; int config; scalar_t__ dpy; } ;
typedef TYPE_1__ egl_ctx_data_t ;
typedef scalar_t__ (* egl_accept_config_cb_t ) (void*,scalar_t__,int ) ;
typedef int EGLint ;
typedef int EGLenum ;
typedef scalar_t__ EGLDisplay ;
typedef int EGLConfig ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (scalar_t__,int const*,int *,int,int*) ;
 int FUNC_3 (scalar_t__,int *,int ,int*) ;
 int FUNC_4 (scalar_t__,int*,int*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,void*) ;
 scalar_t__ FUNC_7 (int) ;

bool FUNC_8(egl_ctx_data_t *VAR_3,
      EGLenum VAR_4,
      void *VAR_5,
      EGLint *VAR_6, EGLint *VAR_7,
      EGLint *VAR_8, const EGLint *VAR_9,
      egl_accept_config_cb_t VAR_10)
{
   EGLint VAR_11;
   EGLConfig *VAR_12 = ((void*)0);
   EGLint VAR_13 = 0;
   int VAR_14 = -1;
   EGLDisplay VAR_15 = FUNC_6(VAR_4, VAR_5);

   if (VAR_15 == VAR_0)
   {
      FUNC_0("[EGL]: Couldn't get EGL display.\n");
      return 0;
   }

   VAR_3->dpy = VAR_15;

   if (!FUNC_4(VAR_3->dpy, VAR_6, VAR_7))
      return 0;

   FUNC_1("[EGL]: EGL version: %d.%d\n", *VAR_6, *VAR_7);

   if (!FUNC_3(VAR_3->dpy, ((void*)0), 0, VAR_8) || *VAR_8 < 1)
   {
      FUNC_0("[EGL]: No configs to choose from.\n");
      return 0;
   }

   VAR_12 = (EGLConfig*)FUNC_7(*VAR_8 * sizeof(*VAR_12));
   if (!VAR_12)
      return 0;

   if (!FUNC_2(VAR_3->dpy, VAR_9,
            VAR_12, *VAR_8, &VAR_13) || !VAR_13)
   {
      FUNC_0("[EGL]: No EGL configs with appropriate attributes.\n");
      return 0;
   }

   for (VAR_11 = 0; VAR_11 < *VAR_8; VAR_11++)
   {
      if (!VAR_10 || VAR_10(VAR_5, VAR_3->dpy, VAR_12[VAR_11]))
      {
         VAR_3->config = VAR_12[VAR_11];
         break;
      }
   }

   FUNC_5(VAR_12);

   if (VAR_11 == *VAR_8)
   {
      FUNC_0("[EGL]: No EGL config found which satifies requirements.\n");
      return 0;
   }

   VAR_3->major = VAR_1;
   VAR_3->minor = VAR_2;

   return 1;
}
