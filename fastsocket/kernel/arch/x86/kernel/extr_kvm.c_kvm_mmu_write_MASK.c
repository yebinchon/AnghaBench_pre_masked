
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct TYPE_2__ {int op; } ;
struct kvm_mmu_op_write_pte {unsigned long pte_phys; int pte_val; TYPE_1__ header; } ;
typedef unsigned long __u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 struct page* FUNC_1 (void*) ;
 int FUNC_2 (struct kvm_mmu_op_write_pte*,int) ;
 unsigned long FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, u64 VAR_4)
{
 __u64 VAR_5;
 struct kvm_mmu_op_write_pte VAR_6;
 VAR_5 = (unsigned long)FUNC_0(VAR_3);

 VAR_6.header.op = VAR_0;
 VAR_6.pte_val = VAR_4;
 VAR_6.pte_phys = VAR_5;

 FUNC_2(&VAR_6, sizeof VAR_6);
}
