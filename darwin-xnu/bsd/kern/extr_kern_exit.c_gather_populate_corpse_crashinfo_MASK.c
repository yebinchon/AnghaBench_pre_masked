
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int task_t ;
struct TYPE_2__ {scalar_t__ ri_phys_footprint; } ;
struct rusage_superset {TYPE_1__ ri; } ;
typedef int proc_t ;
typedef int mach_exception_data_type_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,struct rusage_superset*,int ,int ,int *,int,void*) ;

void FUNC_2(proc_t VAR_1, task_t VAR_2,
  mach_exception_data_type_t VAR_3, mach_exception_data_type_t VAR_4,
  uint64_t *VAR_5, int VAR_6, void *VAR_7)
{
 struct rusage_superset VAR_8;

 FUNC_0(VAR_1, &VAR_8.ri, VAR_0);
 VAR_8.ri.ri_phys_footprint = 0;
 FUNC_1(VAR_1, VAR_2, &VAR_8, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7);
}
