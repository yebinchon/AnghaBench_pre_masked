
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* gl_term ) (TYPE_2__*) ;} ;
struct TYPE_6__ {scalar_t__ display; scalar_t__ context; TYPE_1__ ops; int surface; int * native_window; } ;
typedef TYPE_2__ RASPITEX_STATE ;
typedef int EGLint ;
typedef int EGLConfig ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int const*,int *,int,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,scalar_t__,int const*) ;
 int FUNC_2 (scalar_t__,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(RASPITEX_STATE *VAR_5,
                                  const EGLint VAR_6[], const EGLint VAR_7[])
{
   EGLConfig VAR_8;
   EGLint VAR_9;

   FUNC_9("%s", VAR_4);

   if (VAR_5->native_window == ((void*)0))
   {
      FUNC_8("%s: No native window", VAR_4);
      goto error;
   }

   VAR_5->display = FUNC_3(VAR_0);
   if (VAR_5->display == VAR_2)
   {
      FUNC_8("%s: Failed to get EGL display", VAR_4);
      goto error;
   }

   if (! FUNC_5(VAR_5->display, 0, 0))
   {
      FUNC_8("%s: eglInitialize failed", VAR_4);
      goto error;
   }

   if (! FUNC_0(VAR_5->display, VAR_6, &VAR_8,
                         1, &VAR_9))
   {
      FUNC_8("%s: eglChooseConfig failed", VAR_4);
      goto error;
   }

   VAR_5->surface = FUNC_2(VAR_5->display,
                             VAR_8, VAR_5->native_window, ((void*)0));
   if (VAR_5->surface == VAR_3)
   {
      FUNC_8("%s: eglCreateWindowSurface failed", VAR_4);
      goto error;
   }

   VAR_5->context = FUNC_1(VAR_5->display,
                             VAR_8, VAR_1, VAR_7);
   if (VAR_5->context == VAR_1)
   {
      FUNC_8("%s: eglCreateContext failed", VAR_4);
      goto error;
   }

   if (!FUNC_6(VAR_5->display, VAR_5->surface,
                       VAR_5->surface, VAR_5->context))
   {
      FUNC_8("%s: Failed to activate EGL context", VAR_4);
      goto error;
   }

   return 0;

error:
   FUNC_8("%s: EGL error 0x%08x", VAR_4, FUNC_4());
   VAR_5->ops.gl_term(VAR_5);
   return -1;
}
