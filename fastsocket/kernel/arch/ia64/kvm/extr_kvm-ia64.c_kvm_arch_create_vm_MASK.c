
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_sn2; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 struct kvm* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 int FUNC_2 (char*) ;
 struct kvm* FUNC_3 () ;
 int FUNC_4 (struct kvm*) ;

struct kvm *FUNC_5(void)
{
 struct kvm *VAR_1 = FUNC_3();

 if (FUNC_1(VAR_1))
  return FUNC_0(-VAR_0);

 VAR_1->arch.is_sn2 = FUNC_2("sn2");

 FUNC_4(VAR_1);

 return VAR_1;

}
