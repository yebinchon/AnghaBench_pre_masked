
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* metaphysical_saved_rr0; void* metaphysical_saved_rr4; int mode_flags; void* metaphysical_rr0; void* metaphysical_rr4; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (size_t,void*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*,char*) ;
 int * VAR_9 ;
 void* FUNC_8 (int ) ;

void FUNC_9(struct kvm_vcpu *VAR_10)
{
 unsigned long VAR_11;

 FUNC_6(VAR_11);





 VAR_10->arch.metaphysical_saved_rr0 = FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_1]));
 VAR_10->arch.metaphysical_saved_rr4 = FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_5]));

 if (FUNC_5(VAR_10)) {
  if (VAR_10->arch.mode_flags & VAR_0)
   FUNC_7(VAR_10, "Machine Status conflicts!\n");

  FUNC_3((VAR_1 << VAR_8), VAR_10->arch.metaphysical_rr0);
  FUNC_1();
  FUNC_3((VAR_5 << VAR_8), VAR_10->arch.metaphysical_rr4);
  FUNC_1();
 } else {
  FUNC_3((VAR_1 << VAR_8),
    VAR_10->arch.metaphysical_saved_rr0);
  FUNC_1();
  FUNC_3((VAR_5 << VAR_8),
    VAR_10->arch.metaphysical_saved_rr4);
  FUNC_1();
 }
 FUNC_3((VAR_2 << VAR_8),
   FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_2])));
 FUNC_1();
 FUNC_3((VAR_3 << VAR_8),
   FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_3])));
 FUNC_1();
 FUNC_3((VAR_4 << VAR_8),
   FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_4])));
 FUNC_1();
 FUNC_3((VAR_6 << VAR_8),
   FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_6])));
 FUNC_1();
 FUNC_3((VAR_7 << VAR_8),
   FUNC_8(FUNC_0(VAR_10, VAR_9[VAR_7])));
 FUNC_1();
 FUNC_4();
 FUNC_2(VAR_11);
}
