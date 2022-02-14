
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int quit; int sem_decoded; int sem_drawn; int mutex; scalar_t__ stop_reason; } ;
typedef TYPE_1__ VIDTEX_T ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef int EGLNativeWindowType ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static VIDTEX_T *FUNC_8(EGLNativeWindowType VAR_1)
{
   VIDTEX_T *VAR_2;
   VCOS_STATUS_T VAR_3;

   VAR_2 = FUNC_0(1, sizeof(*VAR_2), "vidtex");
   if (VAR_2 == ((void*)0))
   {
      FUNC_2("Memory allocation failure");
      return ((void*)0);
   }

   VAR_3 = FUNC_5(&VAR_2->sem_decoded, "vidtex-dec", 0);
   if (VAR_3 != VAR_0)
   {
      FUNC_2("Error creating semaphore");
      goto error_ctx;
   }

   VAR_3 = FUNC_5(&VAR_2->sem_drawn, "vidtex-drw", 0);
   if (VAR_3 != VAR_0)
   {
      FUNC_2("Error creating semaphore");
      goto error_sem1;
   }

   VAR_3 = FUNC_3(&VAR_2->mutex, "vidtex");
   if (VAR_3 != VAR_0)
   {
      FUNC_2("Error creating semaphore");
      goto error_sem2;
   }

   if (FUNC_7(VAR_2, VAR_1) != 0)
   {
      FUNC_2("Error initialising EGL");
      goto error_mutex;
   }

   VAR_2->quit = 0;
   VAR_2->stop_reason = 0;

   return VAR_2;

error_mutex:
   FUNC_4(&VAR_2->mutex);
error_sem2:
   FUNC_6(&VAR_2->sem_drawn);
error_sem1:
   FUNC_6(&VAR_2->sem_decoded);
error_ctx:
   FUNC_1(VAR_2);
   return ((void*)0);
}
