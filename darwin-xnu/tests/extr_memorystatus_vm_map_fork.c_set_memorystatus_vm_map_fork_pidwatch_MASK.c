
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int pid_t ;
typedef int new_value ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_2(pid_t VAR_1)
{
 uint64_t VAR_2 = (uint64_t)VAR_1;
 size_t VAR_3 = sizeof(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1("kern.memorystatus_vm_map_fork_pidwatch", ((void*)0), ((void*)0), &VAR_2, VAR_3);
 VAR_0;
 FUNC_0(VAR_4, "set sysctlbyname(kern.memorystatus_vm_map_fork_pidwatch...) failed");
 return;
}
