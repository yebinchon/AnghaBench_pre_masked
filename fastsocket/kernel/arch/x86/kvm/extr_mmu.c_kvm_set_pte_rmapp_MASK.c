
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm {int dummy; } ;
typedef int pte_t ;
typedef scalar_t__ pfn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int* FUNC_10 (struct kvm*,unsigned long*,int*) ;
 int FUNC_11 (char*,int*,int) ;
 int FUNC_12 (struct kvm*,int*) ;
 int VAR_4 ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct kvm *VAR_5, unsigned long *VAR_6,
        unsigned long VAR_7)
{
 int VAR_8 = 0;
 u64 *VAR_9, VAR_10;
 pte_t *VAR_11 = (pte_t *)VAR_7;
 pfn_t VAR_12;

 FUNC_1(FUNC_7(*VAR_11));
 VAR_12 = FUNC_8(*VAR_11);
 VAR_9 = FUNC_10(VAR_5, VAR_6, ((void*)0));
 while (VAR_9) {
  FUNC_0(!FUNC_3(*VAR_9));
  FUNC_11("kvm_set_pte_rmapp: spte %p %llx\n", VAR_9, *VAR_9);
  VAR_8 = 1;
  if (FUNC_9(*VAR_11)) {
   FUNC_12(VAR_5, VAR_9);
   FUNC_2(VAR_9, VAR_4);
   VAR_9 = FUNC_10(VAR_5, VAR_6, ((void*)0));
  } else {
   VAR_10 = *VAR_9 &~ (VAR_1);
   VAR_10 |= (u64)VAR_12 << VAR_0;

   VAR_10 &= ~VAR_2;
   VAR_10 &= ~VAR_3;
   if (FUNC_4(*VAR_9))
    FUNC_6(FUNC_13(*VAR_9));
   FUNC_2(VAR_9, VAR_10);
   VAR_9 = FUNC_10(VAR_5, VAR_6, VAR_9);
  }
 }
 if (VAR_8)
  FUNC_5(VAR_5);

 return 0;
}
