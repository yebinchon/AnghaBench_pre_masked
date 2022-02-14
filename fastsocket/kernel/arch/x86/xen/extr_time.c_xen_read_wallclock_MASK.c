
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct pvclock_wall_clock {int dummy; } ;
struct shared_info {struct pvclock_wall_clock wc; } ;
struct pvclock_vcpu_time_info {int dummy; } ;
struct TYPE_2__ {struct pvclock_vcpu_time_info time; } ;


 struct shared_info* VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvclock_wall_clock*,struct pvclock_vcpu_time_info*,struct timespec*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timespec *VAR_2)
{
 struct shared_info *VAR_3 = VAR_0;
 struct pvclock_wall_clock *VAR_4 = &(VAR_3->wc);
        struct pvclock_vcpu_time_info *VAR_5;

 VAR_5 = &FUNC_0(VAR_1)->time;
 FUNC_2(VAR_4, VAR_5, VAR_2);
 FUNC_1(VAR_1);
}
