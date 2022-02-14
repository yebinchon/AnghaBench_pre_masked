
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_rmap_desc {struct kvm_rmap_desc* more; int ** sptes; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static u64 *FUNC_0(struct kvm *VAR_1, unsigned long *VAR_2, u64 *VAR_3)
{
 struct kvm_rmap_desc *VAR_4;
 struct kvm_rmap_desc *VAR_5;
 u64 *VAR_6;
 int VAR_7;

 if (!*VAR_2)
  return ((void*)0);
 else if (!(*VAR_2 & 1)) {
  if (!VAR_3)
   return (u64 *)*VAR_2;
  return ((void*)0);
 }
 VAR_4 = (struct kvm_rmap_desc *)(*VAR_2 & ~1ul);
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 while (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_0 && VAR_4->sptes[VAR_7]; ++VAR_7) {
   if (VAR_6 == VAR_3)
    return VAR_4->sptes[VAR_7];
   VAR_6 = VAR_4->sptes[VAR_7];
  }
  VAR_4 = VAR_4->more;
 }
 return ((void*)0);
}
