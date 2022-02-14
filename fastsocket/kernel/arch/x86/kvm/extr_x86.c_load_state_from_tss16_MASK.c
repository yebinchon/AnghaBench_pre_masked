
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tss_segment_16 {int flag; int ds; int ss; int cs; int es; int ldt; int di; int si; int bp; int sp; int bx; int dx; int cx; int ax; int ip; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* set_rflags ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 TYPE_1__* VAR_13 ;
 int FUNC_4 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_14,
     struct tss_segment_16 *VAR_15)
{
 FUNC_3(VAR_14, VAR_15->ip);
 VAR_13->set_rflags(VAR_14, VAR_15->flag | 2);
 FUNC_2(VAR_14, VAR_0, VAR_15->ax);
 FUNC_2(VAR_14, VAR_3, VAR_15->cx);
 FUNC_2(VAR_14, VAR_5, VAR_15->dx);
 FUNC_2(VAR_14, VAR_2, VAR_15->bx);
 FUNC_2(VAR_14, VAR_7, VAR_15->sp);
 FUNC_2(VAR_14, VAR_1, VAR_15->bp);
 FUNC_2(VAR_14, VAR_6, VAR_15->si);
 FUNC_2(VAR_14, VAR_4, VAR_15->di);





 FUNC_1(VAR_14, VAR_15->ldt, VAR_11);
 FUNC_1(VAR_14, VAR_15->es, VAR_10);
 FUNC_1(VAR_14, VAR_15->cs, VAR_8);
 FUNC_1(VAR_14, VAR_15->ss, VAR_12);
 FUNC_1(VAR_14, VAR_15->ds, VAR_9);





 if (FUNC_0(VAR_14, VAR_15->ldt, VAR_11))
  return 1;

 if (FUNC_0(VAR_14, VAR_15->es, VAR_10))
  return 1;

 if (FUNC_0(VAR_14, VAR_15->cs, VAR_8))
  return 1;

 if (FUNC_0(VAR_14, VAR_15->ss, VAR_12))
  return 1;

 if (FUNC_0(VAR_14, VAR_15->ds, VAR_9))
  return 1;
 return 0;
}
