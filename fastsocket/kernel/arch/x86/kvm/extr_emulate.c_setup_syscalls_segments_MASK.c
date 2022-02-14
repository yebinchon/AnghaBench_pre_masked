
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int vcpu; } ;
struct kvm_segment {int g; int limit; int type; int s; int present; int db; scalar_t__ dpl; scalar_t__ base; scalar_t__ unusable; scalar_t__ l; } ;
struct TYPE_2__ {int (* get_segment ) (int ,struct kvm_segment*,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct kvm_segment*,int ,int) ;
 int FUNC_1 (int ,struct kvm_segment*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct x86_emulate_ctxt *VAR_2,
 struct kvm_segment *VAR_3, struct kvm_segment *VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(struct kvm_segment));
 VAR_1->get_segment(VAR_2->vcpu, VAR_3, VAR_0);
 FUNC_0(VAR_4, 0, sizeof(struct kvm_segment));

 VAR_3->l = 0;
 VAR_3->base = 0;
 VAR_3->g = 1;
 VAR_3->limit = 0xffffffff;
 VAR_3->type = 0x0b;
 VAR_3->s = 1;
 VAR_3->dpl = 0;
 VAR_3->present = 1;
 VAR_3->db = 1;

 VAR_4->unusable = 0;
 VAR_4->base = 0;
 VAR_4->limit = 0xffffffff;
 VAR_4->g = 1;
 VAR_4->s = 1;
 VAR_4->type = 0x03;
 VAR_4->db = 1;
 VAR_4->dpl = 0;
 VAR_4->present = 1;
}
