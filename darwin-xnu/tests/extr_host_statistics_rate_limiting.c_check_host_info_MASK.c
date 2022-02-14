
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct all_host_info {int host_expired_task_info; int host_vm_info_rev1; int host_vm_info_rev0; int host_vm_info64_rev0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char,char,char*,unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_2(struct all_host_info* VAR_9, unsigned long VAR_10, char VAR_11){
 char* VAR_12;
 unsigned long VAR_13,VAR_14;


 for ( VAR_14 = 0 ; VAR_14 < VAR_10; VAR_14++) {
  VAR_12 = (char*) &VAR_9[VAR_14].host_vm_info64_rev0;
  for ( VAR_13 = (VAR_0 * sizeof(int)); VAR_13< (VAR_1 * sizeof(int)); VAR_13++) {
   VAR_8;FUNC_0(VAR_12[VAR_13], VAR_11, "HOST_VM_INFO64_REV0 byte %lu iter %lu", VAR_13, VAR_14);
  }

  VAR_12 = (char*) &VAR_9[VAR_14].host_vm_info_rev0;
  for ( VAR_13 = (VAR_2 * sizeof(int)); VAR_13< (VAR_4 * sizeof(int)); VAR_13++) {
   VAR_8;FUNC_0(VAR_12[VAR_13], VAR_11, "HOST_VM_INFO_REV0 byte %lu iter %lu", VAR_13, VAR_14);
  }

  VAR_12 = (char*) &VAR_9[VAR_14].host_vm_info_rev1;
  for ( VAR_13 = (VAR_3 * sizeof(int)); VAR_13< (VAR_4 * sizeof(int)); VAR_13++) {
   VAR_8;FUNC_0(VAR_12[VAR_13], VAR_11, "HOST_VM_INFO_REV1 byte %lu iter %lu", VAR_13, VAR_14);
  }

  VAR_12 = (char*) &VAR_9[VAR_14].host_expired_task_info;
  for ( VAR_13 = (VAR_6 * sizeof(int)); VAR_13< (VAR_7 * sizeof(int)); VAR_13++) {
   VAR_8;FUNC_0(VAR_12[VAR_13], VAR_11, "TASK_POWER_INFO_COUNT byte %lu iter %lu", VAR_13, VAR_14);
  }
 }
 FUNC_1("No data overflow");

 VAR_12 = (char*) VAR_9;


 for ( VAR_13 = 0 ; VAR_13 < sizeof(struct all_host_info) ; VAR_13++ )
  for ( VAR_14 = VAR_5 - 1 ; VAR_14 < VAR_10 - 1; VAR_14++) {
   VAR_8; FUNC_0(VAR_12[VAR_13+(VAR_14 * sizeof(struct all_host_info))], VAR_12[VAR_13+((VAR_14+1) * sizeof(struct all_host_info))], "all_host_info iter %lu does not match iter %lu", VAR_14, VAR_14+1);
  }

 FUNC_1("Data was cached");
}
