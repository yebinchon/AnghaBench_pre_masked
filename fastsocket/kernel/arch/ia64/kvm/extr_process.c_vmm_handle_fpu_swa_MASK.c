
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {unsigned long cr_iip; int cr_ifs; int pr; int ar_fpsr; int cr_ipsr; } ;
struct TYPE_7__ {unsigned long status; } ;
typedef TYPE_1__ fpswa_ret_t ;
struct TYPE_9__ {scalar_t__ ri; } ;
struct TYPE_8__ {int * i64; } ;
typedef TYPE_2__ IA64_BUNDLE ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct kvm_vcpu* VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,unsigned long,TYPE_2__*) ;
 TYPE_5__* FUNC_1 (struct kvm_pt_regs*) ;
 TYPE_1__ FUNC_2 (int,TYPE_2__*,int *,int *,unsigned long*,int *,int *,struct kvm_pt_regs*) ;

unsigned long FUNC_3(int VAR_3, struct kvm_pt_regs *VAR_4,
     unsigned long VAR_5)
{
 struct kvm_vcpu *VAR_6 = VAR_2;
 IA64_BUNDLE VAR_7;
 unsigned long VAR_8;
 fpswa_ret_t VAR_9;

 VAR_8 = VAR_4->cr_iip;





 if (!VAR_3 && (FUNC_1(VAR_4)->ri == 0))
  VAR_8 -= 16;

 if (FUNC_0(VAR_6, VAR_8, &VAR_7))
  return -VAR_1;

 if (!VAR_7.i64[0] && !VAR_7.i64[1])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_3, &VAR_7, &VAR_4->cr_ipsr, &VAR_4->ar_fpsr,
   &VAR_5, &VAR_4->pr, &VAR_4->cr_ifs, VAR_4);
 return VAR_9.status;
}
