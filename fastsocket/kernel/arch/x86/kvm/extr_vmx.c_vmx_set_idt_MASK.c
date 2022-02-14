
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct descriptor_table {int base; int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2, struct descriptor_table *VAR_3)
{
 FUNC_0(VAR_1, VAR_3->limit);
 FUNC_1(VAR_0, VAR_3->base);
}
