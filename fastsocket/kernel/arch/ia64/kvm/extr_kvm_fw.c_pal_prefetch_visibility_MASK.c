
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct ia64_pal_retval {int status; int member_3; int member_2; int member_1; int member_0; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int VAR_0 ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static struct ia64_pal_retval FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct ia64_pal_retval VAR_2 = {0, 0, 0, 0};
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;
 FUNC_1(VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 VAR_2.status = FUNC_0(VAR_4);
 if (VAR_2.status == 0) {


  FUNC_2(VAR_0,
     (void *)VAR_4, 1);

  VAR_2.status = 1;
 }
 return VAR_2;
}
