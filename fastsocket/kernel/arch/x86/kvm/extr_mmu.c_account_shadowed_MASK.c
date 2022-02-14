
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,int ) ;
 int* FUNC_1 (int ,struct kvm_memory_slot*,int) ;
 int FUNC_2 (struct kvm*,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_3, gfn_t VAR_4)
{
 struct kvm_memory_slot *VAR_5;
 int *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 for (VAR_7 = VAR_1;
      VAR_7 < VAR_2 + VAR_0; ++VAR_7) {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_7);
  *VAR_6 += 1;
 }
}
