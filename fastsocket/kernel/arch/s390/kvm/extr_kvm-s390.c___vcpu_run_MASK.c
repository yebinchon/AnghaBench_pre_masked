
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sie_block; int * guest_gprs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {char* icptcode; int gg14; int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct kvm_vcpu *VAR_2)
{
 FUNC_8(&VAR_2->arch.sie_block->gg14, &VAR_2->arch.guest_gprs[14], 16);

 if (FUNC_9())
  FUNC_11();

 if (FUNC_13(VAR_1))
  FUNC_10();

 FUNC_4(VAR_2);

 VAR_2->arch.sie_block->icptcode = 0;
 FUNC_6();
 FUNC_2();
 FUNC_7();
 FUNC_0(VAR_2, 6, "entering sie flags %x",
     FUNC_1(&VAR_2->arch.sie_block->cpuflags));
 if (FUNC_12(VAR_2->arch.sie_block, VAR_2->arch.guest_gprs)) {
  FUNC_0(VAR_2, 3, "%s", "fault in sie instruction");
  FUNC_5(VAR_2, VAR_0);
 }
 FUNC_0(VAR_2, 6, "exit sie icptcode %d",
     VAR_2->arch.sie_block->icptcode);
 FUNC_6();
 FUNC_3();
 FUNC_7();

 FUNC_8(&VAR_2->arch.guest_gprs[14], &VAR_2->arch.sie_block->gg14, 16);
}
