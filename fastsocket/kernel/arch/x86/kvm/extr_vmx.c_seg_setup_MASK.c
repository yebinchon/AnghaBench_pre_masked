
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vmx_segment_field {int ar_bytes; int limit; int base; int selector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kvm_vmx_segment_field* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 struct kvm_vmx_segment_field *VAR_4 = &VAR_2[VAR_3];
 unsigned int VAR_5;

 FUNC_0(VAR_4->selector, 0);
 FUNC_2(VAR_4->base, 0);
 FUNC_1(VAR_4->limit, 0xffff);
 if (VAR_1) {
  VAR_5 = 0x93;
  if (VAR_3 == VAR_0)
   VAR_5 |= 0x08;
 } else
  VAR_5 = 0xf3;

 FUNC_1(VAR_4->ar_bytes, VAR_5);
}
