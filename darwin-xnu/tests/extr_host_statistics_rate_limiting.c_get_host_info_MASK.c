
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct all_host_info {int host_expired_task_info2; int host_expired_task_info; int host_cpu_load_info; int host_vm_info_rev2; int host_vm_info_rev1; int host_vm_info_rev0; int host_load_info; int host_extmod_info64; int host_vm_info64_rev1; int host_vm_info64_rev0; } ;
typedef int host_t ;
typedef int host_info_t ;
typedef int host_info64_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (int ,int *) ;
 int VAR_16 ;
 int FUNC_1 (int ,int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,unsigned int*) ;

__attribute__((used)) static void
FUNC_3(struct all_host_info* VAR_17, host_t VAR_18, int VAR_19){
 int VAR_20;
 unsigned int VAR_21;
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++){
  VAR_21 = VAR_9;
  VAR_16;FUNC_0(FUNC_2(VAR_18, VAR_8, (host_info64_t)&VAR_17[VAR_20].host_vm_info64_rev0, &VAR_21), ((void*)0));
  VAR_21 = VAR_10;
  VAR_16;FUNC_0(FUNC_2(VAR_18, VAR_8, (host_info64_t)&VAR_17[VAR_20].host_vm_info64_rev1, &VAR_21), ((void*)0));
  VAR_21 = VAR_4;
  VAR_16;FUNC_0(FUNC_2(VAR_18, VAR_3, (host_info64_t)&VAR_17[VAR_20].host_extmod_info64, &VAR_21), ((void*)0));
  VAR_21 = VAR_6;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_5, (host_info_t)&VAR_17[VAR_20].host_load_info, &VAR_21), ((void*)0));
  VAR_21 = VAR_11;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_7, (host_info_t)&VAR_17[VAR_20].host_vm_info_rev0, &VAR_21), ((void*)0));
  VAR_21 = VAR_12;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_7, (host_info_t)&VAR_17[VAR_20].host_vm_info_rev1, &VAR_21), ((void*)0));
  VAR_21 = VAR_13;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_7, (host_info_t)&VAR_17[VAR_20].host_vm_info_rev2, &VAR_21), ((void*)0));
  VAR_21 = VAR_1;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_0, (host_info_t)&VAR_17[VAR_20].host_cpu_load_info, &VAR_21), ((void*)0));
  VAR_21 = VAR_14;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_2, (host_info_t)&VAR_17[VAR_20].host_expired_task_info, &VAR_21), ((void*)0));
  VAR_21 = VAR_15;
  VAR_16;FUNC_0(FUNC_1(VAR_18, VAR_2, (host_info_t)&VAR_17[VAR_20].host_expired_task_info2, &VAR_21), ((void*)0));

 }

}
