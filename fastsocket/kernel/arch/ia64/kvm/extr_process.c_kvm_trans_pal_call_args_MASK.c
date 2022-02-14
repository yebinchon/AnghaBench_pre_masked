
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thash_data {unsigned long page_flags; unsigned long gpaddr; int ps; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (unsigned long) ;
 struct thash_data* FUNC_5 (unsigned long) ;
 struct thash_data* FUNC_6 (struct kvm_vcpu*,unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_7(struct kvm_vcpu *VAR_2,
      unsigned long VAR_3)
{
 struct thash_data *VAR_4;
 unsigned long VAR_5, VAR_6;

 if (!FUNC_3(VAR_2)) {

  VAR_4 = FUNC_6(VAR_2, VAR_3, VAR_0);
  if (VAR_4)
   VAR_5 = VAR_4->page_flags & VAR_1;
  else {
   VAR_4 = FUNC_5(VAR_3);
   if (!VAR_4)
    return 0;
   VAR_5 = VAR_4->gpaddr & VAR_1;
  }

  VAR_6 = VAR_3 & (FUNC_1(VAR_4->ps) - 1);
  VAR_3 = FUNC_0(VAR_5, VAR_4->ps) | VAR_6;
 }
 VAR_3 = FUNC_4(VAR_3 << 1 >> 1);

 return (unsigned long)FUNC_2(VAR_3);
}
