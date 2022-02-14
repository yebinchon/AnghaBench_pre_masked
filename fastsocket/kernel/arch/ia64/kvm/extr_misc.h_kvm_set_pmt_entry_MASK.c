
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
typedef unsigned long u64 ;
struct kvm {int dummy; } ;
typedef size_t gfn_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long* FUNC_1 (struct kvm*) ;

__attribute__((used)) static inline void FUNC_2(struct kvm *VAR_0, gfn_t VAR_1,
  u64 VAR_2, u64 VAR_3)
{
 uint64_t *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2) | VAR_3;
 VAR_4[VAR_1] = VAR_5;
}
