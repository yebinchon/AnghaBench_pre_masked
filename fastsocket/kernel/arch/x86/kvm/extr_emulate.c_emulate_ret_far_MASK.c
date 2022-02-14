
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int u16 ;
struct x86_emulate_ops {int dummy; } ;
struct decode_cache {unsigned long eip; int op_bytes; } ;
struct x86_emulate_ctxt {int vcpu; struct decode_cache decode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*,unsigned long*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_2,
      struct x86_emulate_ops *VAR_3)
{
 struct decode_cache *VAR_4 = &VAR_2->decode;
 int VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4->eip, VAR_4->op_bytes);
 if (VAR_5 != VAR_1)
  return VAR_5;
 if (VAR_4->op_bytes == 4)
  VAR_4->eip = (u32)VAR_4->eip;
 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_6, VAR_4->op_bytes);
 if (VAR_5 != VAR_1)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_2->vcpu, (u16)VAR_6, VAR_0);
 return VAR_5;
}
