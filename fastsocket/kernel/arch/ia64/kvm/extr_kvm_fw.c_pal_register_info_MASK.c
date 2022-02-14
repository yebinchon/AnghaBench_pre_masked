
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct ia64_pal_retval {int v2; int v1; int status; int member_3; int member_2; int member_1; int member_0; } ;


 int FUNC_0 (long,int *,int *) ;
 int FUNC_1 (struct kvm_vcpu*,long*,long*,long*,long*) ;

__attribute__((used)) static struct ia64_pal_retval FUNC_2(struct kvm_vcpu *VAR_0)
{

 struct ia64_pal_retval VAR_1 = {0, 0, 0, 0};
 long VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_1(VAR_0, &VAR_2, &VAR_3, &VAR_4, &VAR_5);
 VAR_1.status = FUNC_0(VAR_3, &VAR_1.v1, &VAR_1.v2);

 return VAR_1;
}
