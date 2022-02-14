
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned long*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct kvm*,unsigned long*,unsigned long) ;
 int* FUNC_5 (struct kvm*,unsigned long*,int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_1, unsigned long *VAR_2,
    unsigned long VAR_3)
{
 u64 *VAR_4;
 int VAR_5 = 0;
 if (!VAR_0)
  return FUNC_4(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_5(VAR_1, VAR_2, ((void*)0));
 while (VAR_4) {
  int VAR_6;
  u64 VAR_7 = *VAR_4;
  FUNC_0(!FUNC_3(VAR_7));
  VAR_6 = VAR_7 & VAR_0;
  if (VAR_6) {
   VAR_5 = 1;
   FUNC_1((FUNC_2(VAR_0) - 1),
     (unsigned long *)VAR_4);
  }
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_4);
 }
 return VAR_5;
}
