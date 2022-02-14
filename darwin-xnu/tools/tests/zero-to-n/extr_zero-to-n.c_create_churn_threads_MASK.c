
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sched_param*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8()
{
 if (VAR_3 == 0)
  VAR_3 = VAR_6 - 1;

 errno_t VAR_7;

 struct sched_param VAR_8 = { .sched_priority = (int)VAR_4 };
 pthread_attr_t VAR_9;


 VAR_5 = (pthread_t*) FUNC_7(sizeof(pthread_t) * VAR_3);
 FUNC_0(VAR_5);

 if ((VAR_7 = FUNC_3(&VAR_9)))
  FUNC_1(VAR_0, VAR_7, "pthread_attr_init");

 if ((VAR_7 = FUNC_4(&VAR_9, &VAR_8)))
  FUNC_1(VAR_0, VAR_7, "pthread_attr_setschedparam");

 if ((VAR_7 = FUNC_5(&VAR_9, VAR_1)))
  FUNC_1(VAR_0, VAR_7, "pthread_attr_setschedpolicy");

 for (uint32_t VAR_10 = 0 ; VAR_10 < VAR_3 ; VAR_10++) {
  pthread_t VAR_11;

  if ((VAR_7 = FUNC_6(&VAR_11, &VAR_9, VAR_2, ((void*)0))))
   FUNC_1(VAR_0, VAR_7, "pthread_create");
  VAR_5[VAR_10] = VAR_11;
 }

 if ((VAR_7 = FUNC_2(&VAR_9)))
  FUNC_1(VAR_0, VAR_7, "pthread_attr_destroy");
}
