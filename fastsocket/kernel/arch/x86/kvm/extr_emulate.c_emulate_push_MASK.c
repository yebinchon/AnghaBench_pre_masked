
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* ptr; int val; int bytes; int type; } ;
struct TYPE_3__ {int val; } ;
struct decode_cache {int * regs; TYPE_2__ dst; int op_bytes; TYPE_1__ src; } ;
struct x86_emulate_ctxt {struct decode_cache decode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct decode_cache*,int ,int ) ;
 int FUNC_1 (struct decode_cache*,int *,int ) ;
 int FUNC_2 (struct x86_emulate_ctxt*) ;

__attribute__((used)) static inline void FUNC_3(struct x86_emulate_ctxt *VAR_2)
{
 struct decode_cache *VAR_3 = &VAR_2->decode;

 VAR_3->dst.type = VAR_0;
 VAR_3->dst.bytes = VAR_3->op_bytes;
 VAR_3->dst.val = VAR_3->src.val;
 FUNC_1(VAR_3, &VAR_3->regs[VAR_1], -VAR_3->op_bytes);
 VAR_3->dst.ptr = (void *) FUNC_0(VAR_3, FUNC_2(VAR_2),
            VAR_3->regs[VAR_1]);
}
