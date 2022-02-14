
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint64_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,size_t*,int *,int ) ;

__attribute__((used)) static uint64_t
FUNC_2()
{
 uint64_t VAR_1 = 0;
 size_t VAR_2 = sizeof(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1("kern.memorystatus_vm_map_fork_pidwatch", &VAR_1, &VAR_2, ((void*)0), 0);
 VAR_0;
 FUNC_0(VAR_3, "get sysctlbyname(kern.memorystatus_vm_map_fork_pidwatch...) failed");

 return VAR_1;
}
