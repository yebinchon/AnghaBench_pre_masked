
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int enabled ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_2()
{
 int VAR_0;
 int VAR_1;
 size_t VAR_2 = sizeof(VAR_1);
 VAR_0 = FUNC_1("kern.exc_resource_threads_enabled", &VAR_1, &VAR_2, ((void*)0), 0);

 if (VAR_0 || !VAR_1)
  FUNC_0("EXC_RESOURCE RESOURCE_TYPE_THREADS not enabled on this system");

}
