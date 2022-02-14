
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvclock_vcpu_time_info {int dummy; } ;
typedef int cycle_t ;
struct TYPE_2__ {struct pvclock_vcpu_time_info time; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvclock_vcpu_time_info*) ;
 int VAR_0 ;

cycle_t FUNC_3(void)
{
        struct pvclock_vcpu_time_info *VAR_1;
 cycle_t VAR_2;

 VAR_1 = &FUNC_0(VAR_0)->time;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_0);
 return VAR_2;
}
