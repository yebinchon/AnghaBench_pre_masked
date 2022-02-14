
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
 int VAR_1 ;
 int FUNC_0 (int ,void*,unsigned int,struct kvm_vcpu*,int,int*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(gva_t VAR_3, void *VAR_4, unsigned int VAR_5,
    struct kvm_vcpu *VAR_6, u32 *VAR_7)
{
 u32 VAR_8 = (VAR_2->get_cpl(VAR_6) == 3) ? VAR_1 : 0;
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_8 | VAR_0, VAR_7);
}
