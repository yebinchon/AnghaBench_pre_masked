
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_translation {int linear_address; int valid; int physical_address; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvm_vcpu*,int,int,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;

int FUNC_2(struct kvm_vcpu *VAR_0,
                               struct kvm_translation *VAR_1)
{
 int VAR_2;
 gva_t VAR_3;
 u8 VAR_4;
 u8 VAR_5;

 VAR_3 = VAR_1->linear_address;
 VAR_4 = (VAR_1->linear_address >> 32) & 0xff;
 VAR_5 = (VAR_1->linear_address >> 40) & 0x1;

 VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_4, VAR_5);
 if (VAR_2 < 0) {
  VAR_1->valid = 0;
  return 0;
 }

 VAR_1->physical_address = FUNC_1(VAR_0, VAR_2, VAR_3);

 VAR_1->valid = 1;

 return 0;
}
