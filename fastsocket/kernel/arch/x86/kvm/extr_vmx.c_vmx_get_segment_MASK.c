
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vmx_segment_field {int ar_bytes; int selector; int limit; int base; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int type; int s; int dpl; int present; int avl; int l; int db; int g; int unusable; int selector; void* limit; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vmx_segment_field* VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3,
       struct kvm_segment *VAR_4, int VAR_5)
{
 struct kvm_vmx_segment_field *VAR_6 = &VAR_2[VAR_5];
 u32 VAR_7;

 VAR_4->base = FUNC_2(VAR_6->base);
 VAR_4->limit = FUNC_1(VAR_6->limit);
 VAR_4->selector = FUNC_0(VAR_6->selector);
 VAR_7 = FUNC_1(VAR_6->ar_bytes);
 if ((VAR_7 & VAR_0) && !VAR_1)
  VAR_7 = 0;
 VAR_4->type = VAR_7 & 15;
 VAR_4->s = (VAR_7 >> 4) & 1;
 VAR_4->dpl = (VAR_7 >> 5) & 3;
 VAR_4->present = (VAR_7 >> 7) & 1;
 VAR_4->avl = (VAR_7 >> 12) & 1;
 VAR_4->l = (VAR_7 >> 13) & 1;
 VAR_4->db = (VAR_7 >> 14) & 1;
 VAR_4->g = (VAR_7 >> 15) & 1;
 VAR_4->unusable = (VAR_7 >> 16) & 1;
}
