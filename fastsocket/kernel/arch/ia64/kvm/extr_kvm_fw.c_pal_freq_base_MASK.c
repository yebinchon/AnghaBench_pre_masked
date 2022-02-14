
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct ia64_pal_retval {scalar_t__ v0; scalar_t__ v2; int v1; int status; } ;


 int FUNC_0 (struct ia64_pal_retval,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__*,int *) ;

__attribute__((used)) static struct ia64_pal_retval FUNC_2(struct kvm_vcpu *VAR_2)
{

 struct ia64_pal_retval VAR_3;

 FUNC_0(VAR_3, VAR_0, 0, 0, 0);





 if (VAR_3.v0 == 0) {
  VAR_3.status = FUNC_1(VAR_1,
       &VAR_3.v0,
       &VAR_3.v1);
  VAR_3.v2 = 0;
 }

 return VAR_3;
}
