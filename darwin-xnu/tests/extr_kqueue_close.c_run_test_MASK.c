
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ,void*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6()
{
 int VAR_3 = FUNC_2();
 VAR_0; FUNC_0(VAR_3, "kqueue");

 pthread_t VAR_4;
 int VAR_5 = FUNC_3(&VAR_4, ((void*)0), VAR_1,
                         (void *)(uintptr_t)VAR_3);
 VAR_0; FUNC_0(VAR_5, "pthread_create");

 FUNC_5(VAR_2 * 1000);

 VAR_5 = FUNC_1(VAR_3);
 FUNC_0(VAR_5, "close");

 VAR_5 = FUNC_4(VAR_4, ((void*)0));
 VAR_0; FUNC_0(VAR_5, "pthread_join");
}
