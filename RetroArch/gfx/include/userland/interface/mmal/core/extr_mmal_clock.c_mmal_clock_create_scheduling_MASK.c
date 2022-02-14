
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
typedef int VCOS_STATUS_T ;
struct TYPE_8__ {void* list_pending; void* list_free; TYPE_1__* pool; } ;
struct TYPE_9__ {TYPE_2__ request; int timer; int event; int scheduling; int thread; } ;
struct TYPE_7__ {int link; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_CLOCK_PRIVATE_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 void* FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int *,int ,TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_11(MMAL_CLOCK_PRIVATE_T *VAR_9)
{
   unsigned int VAR_10;
   MMAL_BOOL_T VAR_11 = VAR_2;
   VCOS_STATUS_T VAR_12 = VAR_6;
   VCOS_UNSIGNED VAR_13;

   VAR_11 = FUNC_1(&VAR_9->timer, VAR_9);
   if (!VAR_11)
   {
      FUNC_0("failed to create timer %p", VAR_9);
      goto error;
   }

   VAR_12 = FUNC_6(&VAR_9->event, "mmal-clock sema", 0);
   if (VAR_12 != VAR_7)
   {
      FUNC_0("failed to create event semaphore %d", VAR_12);
      goto error;
   }

   VAR_9->request.list_free = FUNC_3();
   VAR_9->request.list_pending = FUNC_3();
   if (!VAR_9->request.list_free || !VAR_9->request.list_pending)
   {
      FUNC_0("failed to create list %p %p", VAR_9->request.list_free, VAR_9->request.list_pending);
      goto error;
   }


   for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
      FUNC_5(VAR_9->request.list_free, &VAR_9->request.pool[VAR_10].link);

   if (FUNC_8(&VAR_9->thread, "mmal-clock thread", ((void*)0),
                          VAR_8, VAR_9) != VAR_7)
   {
      FUNC_0("failed to create worker thread");
      goto error;
   }
   VAR_13 = FUNC_9(&VAR_9->thread);
   FUNC_10(&VAR_9->thread, 1 | (VAR_13 & VAR_5));

   VAR_9->scheduling = VAR_4;

   return VAR_3;

error:
   if (VAR_12 == VAR_7) FUNC_7(&VAR_9->event);
   if (VAR_11) FUNC_2(&VAR_9->timer);
   if (VAR_9->request.list_free) FUNC_4(VAR_9->request.list_free);
   if (VAR_9->request.list_pending) FUNC_4(VAR_9->request.list_pending);
   return VAR_1;
}
