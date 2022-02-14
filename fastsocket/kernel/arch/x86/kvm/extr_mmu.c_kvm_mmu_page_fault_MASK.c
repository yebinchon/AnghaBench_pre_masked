
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int mmio_exits; } ;
struct TYPE_10__ {int (* page_fault ) (struct kvm_vcpu*,int ,int ) ;} ;
struct TYPE_6__ {TYPE_5__ mmu; } ;
struct kvm_vcpu {TYPE_4__* run; TYPE_2__ stat; TYPE_1__ arch; } ;
typedef int gva_t ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_8__ {int ndata; int suberror; } ;
struct TYPE_9__ {TYPE_3__ internal; int exit_reason; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ,void*,int) ;

int FUNC_4(struct kvm_vcpu *VAR_2, gva_t VAR_3, u32 VAR_4,
         void *VAR_5, int VAR_6)
{
 int VAR_7;
 enum emulation_result VAR_8;

 VAR_7 = VAR_2->arch.mmu.page_fault(VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  goto out;

 if (!VAR_7) {
  VAR_7 = 1;
  goto out;
 }

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7)
  goto out;

 VAR_8 = FUNC_3(VAR_2, VAR_3, 0, VAR_5, VAR_6);

 switch (VAR_8) {
 case 130:
  return 1;
 case 129:
  ++VAR_2->stat.mmio_exits;
  return 0;
 case 128:
  VAR_2->run->exit_reason = VAR_0;
  VAR_2->run->internal.suberror = VAR_1;
  VAR_2->run->internal.ndata = 0;
  return 0;
 default:
  FUNC_0();
 }
out:
 return VAR_7;
}
