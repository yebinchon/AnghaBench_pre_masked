
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 struct kvm_memory_slot* FUNC_0 (struct kvm*,int ) ;
 int* FUNC_1 (int ,struct kvm_memory_slot*,int) ;
 int FUNC_2 (struct kvm*,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_0,
    gfn_t VAR_1,
    int VAR_2)
{
 struct kvm_memory_slot *VAR_3;
 int *VAR_4;

 VAR_1 = FUNC_2(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2);
  return *VAR_4;
 }

 return 1;
}
