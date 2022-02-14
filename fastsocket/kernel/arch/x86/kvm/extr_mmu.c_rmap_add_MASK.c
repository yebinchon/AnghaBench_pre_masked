
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_rmap_desc {int ** sptes; struct kvm_rmap_desc* more; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; int * spt; int * gfns; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct kvm_vcpu*) ;
 struct kvm_mmu_page* FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_1, u64 *VAR_2, gfn_t VAR_3)
{
 struct kvm_mmu_page *VAR_4;
 struct kvm_rmap_desc *VAR_5;
 unsigned long *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (!FUNC_2(*VAR_2))
  return VAR_8;
 VAR_3 = FUNC_6(VAR_1->kvm, VAR_3);
 VAR_4 = FUNC_4(FUNC_0(VAR_2));
 VAR_4->gfns[VAR_2 - VAR_4->spt] = VAR_3;
 VAR_6 = FUNC_1(VAR_1->kvm, VAR_3, VAR_4->role.level);
 if (!*VAR_6) {
  FUNC_5("rmap_add: %p %llx 0->1\n", VAR_2, *VAR_2);
  *VAR_6 = (unsigned long)VAR_2;
 } else if (!(*VAR_6 & 1)) {
  FUNC_5("rmap_add: %p %llx 1->many\n", VAR_2, *VAR_2);
  VAR_5 = FUNC_3(VAR_1);
  VAR_5->sptes[0] = (u64 *)*VAR_6;
  VAR_5->sptes[1] = VAR_2;
  *VAR_6 = (unsigned long)VAR_5 | 1;
 } else {
  FUNC_5("rmap_add: %p %llx many->many\n", VAR_2, *VAR_2);
  VAR_5 = (struct kvm_rmap_desc *)(*VAR_6 & ~1ul);
  while (VAR_5->sptes[VAR_0-1] && VAR_5->more) {
   VAR_5 = VAR_5->more;
   VAR_8 += VAR_0;
  }
  if (VAR_5->sptes[VAR_0-1]) {
   VAR_5->more = FUNC_3(VAR_1);
   VAR_5 = VAR_5->more;
  }
  for (VAR_7 = 0; VAR_5->sptes[VAR_7]; ++VAR_7)
   ;
  VAR_5->sptes[VAR_7] = VAR_2;
 }
 return VAR_8;
}
