
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_rmap_desc {int dummy; } ;
struct kvm_pte_chain {int dummy; } ;
struct kvm_mmu_page {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 () ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 void* VAR_4 ;
 int FUNC_3 (int *) ;
 void* VAR_5 ;

int FUNC_4(void)
{
 VAR_4 = FUNC_0("kvm_pte_chain",
         sizeof(struct kvm_pte_chain),
         0, 0, ((void*)0));
 if (!VAR_4)
  goto nomem;
 VAR_5 = FUNC_0("kvm_rmap_desc",
         sizeof(struct kvm_rmap_desc),
         0, 0, ((void*)0));
 if (!VAR_5)
  goto nomem;

 VAR_2 = FUNC_0("kvm_mmu_page_header",
        sizeof(struct kvm_mmu_page),
        0, 0, ((void*)0));
 if (!VAR_2)
  goto nomem;

 if (FUNC_2(&VAR_1, 0))
  goto nomem;

 FUNC_3(&VAR_3);

 return 0;

nomem:
 FUNC_1();
 return -VAR_0;
}
