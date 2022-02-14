
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,unsigned int,struct kvm_vcpu*,int ,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(gva_t VAR_2, void *VAR_3, unsigned int VAR_4,
          struct kvm_vcpu *VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = (VAR_1->get_cpl(VAR_5) == 3) ? VAR_0 : 0;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7,
       VAR_6);
}
