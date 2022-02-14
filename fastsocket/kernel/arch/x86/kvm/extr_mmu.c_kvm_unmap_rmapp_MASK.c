
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;
 int* FUNC_2 (struct kvm*,unsigned long*,int *) ;
 int FUNC_3 (char*,int*,int) ;
 int FUNC_4 (struct kvm*,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_2, unsigned long *VAR_3,
      unsigned long VAR_4)
{
 u64 *VAR_5;
 int VAR_6 = 0;

 while ((VAR_5 = FUNC_2(VAR_2, VAR_3, ((void*)0)))) {
  FUNC_0(!(*VAR_5 & VAR_0));
  FUNC_3("kvm_rmap_unmap_hva: spte %p %llx\n", VAR_5, *VAR_5);
  FUNC_4(VAR_2, VAR_5);
  FUNC_1(VAR_5, VAR_1);
  VAR_6 = 1;
 }
 return VAR_6;
}
