
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qos_class_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,void* (*) (void*),int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(qos_class_t VAR_2, void * (*VAR_3)(void *))
{
 qos_class_t VAR_4;
 pthread_t VAR_5;
        pthread_attr_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_0, 0, VAR_1);
 if (VAR_7 != 0) {
  FUNC_0("set priority failed\n");
 }

        FUNC_1(&VAR_6);
        FUNC_2(&VAR_6, VAR_2, 0);
        FUNC_3(&VAR_5, &VAR_6, VAR_3, ((void*)0));

 FUNC_0("pthread created\n");
 FUNC_4(VAR_5, &VAR_4, ((void*)0));
}
