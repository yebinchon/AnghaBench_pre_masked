
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hrtimer {int dummy; } ;
struct TYPE_2__ {struct hrtimer hlt_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct hrtimer *VAR_2 = &VAR_1->arch.hlt_timer;

 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2, VAR_0);
}
