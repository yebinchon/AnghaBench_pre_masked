
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {void (* func ) (void*) ;int id; int thread; void* userdata; } ;
struct sched_param {int sched_priority; } ;
typedef struct thread_data sthread_t ;
typedef int pthread_attr_t ;


 int FUNC_0 (int *,int ,int ,struct thread_data*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct thread_data*) ;
 int FUNC_3 (struct sched_param*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sched_param*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int *,int ,struct thread_data*) ;
 int VAR_1 ;

sthread_t *FUNC_10(void (*VAR_2)(void*), void *VAR_3, int VAR_4)
{




   bool VAR_5 = 0;
   struct thread_data *VAR_6 = ((void*)0);
   sthread_t *VAR_7 = (sthread_t*)FUNC_1(1, sizeof(*VAR_7));

   if (!VAR_7)
      return ((void*)0);

   VAR_6 = (struct thread_data*)FUNC_1(1, sizeof(*VAR_6));
   if (!VAR_6)
      goto error;

   VAR_6->func = VAR_2;
   VAR_6->userdata = VAR_3;
      VAR_5 = FUNC_9(&VAR_7->id, ((void*)0), VAR_1, VAR_6) == 0;






   if (VAR_5)
      return VAR_7;

error:
   if (VAR_6)
      FUNC_2(VAR_6);
   FUNC_2(VAR_7);
   return ((void*)0);
}
