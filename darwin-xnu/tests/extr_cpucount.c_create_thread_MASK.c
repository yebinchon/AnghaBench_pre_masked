
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct sched_param*) ;
 int FUNC_5 (int *,int *,void* (*) (void*),int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static pthread_t
FUNC_7(void *(*VAR_2)(void *), uint32_t VAR_3)
{
 int VAR_4;
 pthread_t VAR_5;
 pthread_attr_t VAR_6;

 struct sched_param VAR_7 = { .sched_priority = (int)VAR_3 };

 VAR_4 = FUNC_2(&VAR_6);
 VAR_1; FUNC_0(VAR_4, "pthread_attr_init");

 VAR_4 = FUNC_3(&VAR_6, VAR_0);
 VAR_1; FUNC_0(VAR_4, "pthread_attr_setdetachstate");

 VAR_4 = FUNC_4(&VAR_6, &VAR_7);
 VAR_1; FUNC_0(VAR_4, "pthread_attr_setschedparam");

 VAR_4 = FUNC_5(&VAR_5, &VAR_6, VAR_2, ((void*)0));
 VAR_1; FUNC_0(VAR_4, "pthread_create");

 if (VAR_3 == 97)
  FUNC_6(VAR_5);

 VAR_4 = FUNC_1(&VAR_6);
 VAR_1; FUNC_0(VAR_4, "pthread_attr_destroy");

 return VAR_5;
}
