
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv64; } ;
struct TYPE_4__ {scalar_t__ tv64; } ;
struct TYPE_6__ {int last_exit_type; int* timing_min_duration; TYPE_2__ timing_last_enter; TYPE_1__ timing_exit; scalar_t__ timing_last_exit; scalar_t__* timing_sum_quad_duration; scalar_t__* timing_sum_duration; scalar_t__* timing_max_duration; scalar_t__* timing_count_type; } ;
struct kvm_vcpu {int mutex; TYPE_3__ arch; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 int VAR_2;


 FUNC_0();
 FUNC_2(&VAR_1->mutex);

 VAR_1->arch.last_exit_type = 0xDEAD;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->arch.timing_count_type[VAR_2] = 0;
  VAR_1->arch.timing_max_duration[VAR_2] = 0;
  VAR_1->arch.timing_min_duration[VAR_2] = 0xFFFFFFFF;
  VAR_1->arch.timing_sum_duration[VAR_2] = 0;
  VAR_1->arch.timing_sum_quad_duration[VAR_2] = 0;
 }
 VAR_1->arch.timing_last_exit = 0;
 VAR_1->arch.timing_exit.tv64 = 0;
 VAR_1->arch.timing_last_enter.tv64 = 0;

 FUNC_3(&VAR_1->mutex);
 FUNC_1();
}
