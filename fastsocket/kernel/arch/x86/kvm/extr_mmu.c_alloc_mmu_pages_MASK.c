
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {int * pae_root; } ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int * FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_4)
{
 struct page *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4);






 VAR_5 = FUNC_1(VAR_1 | VAR_3);
 if (!VAR_5)
  goto error_1;
 VAR_4->arch.mmu.pae_root = FUNC_3(VAR_5);
 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
  VAR_4->arch.mmu.pae_root[VAR_6] = VAR_2;

 return 0;

error_1:
 FUNC_2(VAR_4);
 return -VAR_0;
}
