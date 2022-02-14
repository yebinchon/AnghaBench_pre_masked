
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secure_kern ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_0 = 0;
 size_t VAR_1 = sizeof(VAR_0);

 FUNC_0(FUNC_2("kern.secure_kernel", &VAR_0,
   &VAR_1, ((void*)0), 0), ((void*)0));

 if (VAR_0) {
  FUNC_1("secure kernel: processor_set_tasks will not return kernel_task");
 }
}
