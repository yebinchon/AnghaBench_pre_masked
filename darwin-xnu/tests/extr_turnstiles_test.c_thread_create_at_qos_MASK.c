
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qos_class_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_5 (int ,scalar_t__*,int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(qos_class_t VAR_2, void * (*VAR_3)(void *), int VAR_4)
{
 qos_class_t VAR_5;
 pthread_t VAR_6;
        pthread_attr_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_0, 0, VAR_1);
 if (VAR_8 != 0) {
  FUNC_1("set priority failed\n");
 }

        FUNC_2(&VAR_7);
        FUNC_3(&VAR_7, VAR_2, 0);
        FUNC_4(&VAR_6, &VAR_7, VAR_3, (void *)VAR_4);

 FUNC_1("pthread created\n");
 FUNC_5(VAR_6, &VAR_5, ((void*)0));
        FUNC_0(VAR_5, (qos_class_t)VAR_2, ((void*)0));
}
