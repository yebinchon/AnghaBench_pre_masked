
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ops {int dummy; } ;
struct TYPE_2__ {int bytes; int val; } ;
struct decode_cache {TYPE_1__ dst; } ;
struct x86_emulate_ctxt {struct decode_cache decode; } ;


 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct x86_emulate_ctxt *VAR_0,
    struct x86_emulate_ops *VAR_1)
{
 struct decode_cache *VAR_2 = &VAR_0->decode;

 return FUNC_0(VAR_0, VAR_1, &VAR_2->dst.val, VAR_2->dst.bytes);
}
