
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tss_segment_16 {void* ldt; void* ds; void* ss; void* cs; void* es; void* di; void* si; void* bp; void* sp; void* bx; void* dx; void* cx; void* ax; int flag; int ip; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_rflags ) (struct kvm_vcpu*) ;} ;


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
 void* FUNC_0 (struct kvm_vcpu*,int ) ;
 void* FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_14,
    struct tss_segment_16 *VAR_15)
{
 VAR_15->ip = FUNC_2(VAR_14);
 VAR_15->flag = VAR_13->get_rflags(VAR_14);
 VAR_15->ax = FUNC_1(VAR_14, VAR_0);
 VAR_15->cx = FUNC_1(VAR_14, VAR_3);
 VAR_15->dx = FUNC_1(VAR_14, VAR_5);
 VAR_15->bx = FUNC_1(VAR_14, VAR_2);
 VAR_15->sp = FUNC_1(VAR_14, VAR_7);
 VAR_15->bp = FUNC_1(VAR_14, VAR_1);
 VAR_15->si = FUNC_1(VAR_14, VAR_6);
 VAR_15->di = FUNC_1(VAR_14, VAR_4);

 VAR_15->es = FUNC_0(VAR_14, VAR_10);
 VAR_15->cs = FUNC_0(VAR_14, VAR_8);
 VAR_15->ss = FUNC_0(VAR_14, VAR_12);
 VAR_15->ds = FUNC_0(VAR_14, VAR_9);
 VAR_15->ldt = FUNC_0(VAR_14, VAR_11);
}
