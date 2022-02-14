
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvclock_vcpu_time_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vcpu_info; } ;
struct TYPE_3__ {struct pvclock_vcpu_time_info time; } ;


 TYPE_2__* VAR_0 ;
 unsigned long FUNC_0 (struct pvclock_vcpu_time_info*) ;

unsigned long FUNC_1(void)
{
 struct pvclock_vcpu_time_info *VAR_1 =
  &VAR_0->vcpu_info[0].time;

 return FUNC_0(VAR_1);
}
