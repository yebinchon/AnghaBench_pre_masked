
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
struct decode_cache {TYPE_1__ src; } ;
struct x86_emulate_ctxt {int vcpu; struct decode_cache decode; } ;
struct kvm_segment {int selector; } ;
struct TYPE_4__ {int (* get_segment ) (int ,struct kvm_segment*,int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ,struct kvm_segment*,int) ;

__attribute__((used)) static void FUNC_2(struct x86_emulate_ctxt *VAR_1, int VAR_2)
{
 struct decode_cache *VAR_3 = &VAR_1->decode;
 struct kvm_segment VAR_4;

 VAR_0->get_segment(VAR_1->vcpu, &VAR_4, VAR_2);

 VAR_3->src.val = VAR_4.selector;
 FUNC_0(VAR_1);
}
