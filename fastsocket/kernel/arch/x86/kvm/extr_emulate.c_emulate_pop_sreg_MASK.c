
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct x86_emulate_ops {int dummy; } ;
struct decode_cache {int op_bytes; } ;
struct x86_emulate_ctxt {int vcpu; struct decode_cache decode; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,unsigned long*,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_1,
        struct x86_emulate_ops *VAR_2, int VAR_3)
{
 struct decode_cache *VAR_4 = &VAR_1->decode;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_4->op_bytes);
 if (VAR_6 != VAR_0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_1->vcpu, (u16)VAR_5, VAR_3);
 return VAR_6;
}
