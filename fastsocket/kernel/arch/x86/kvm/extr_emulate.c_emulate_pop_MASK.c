
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ops {int (* read_emulated ) (int ,void*,int,int ) ;} ;
struct decode_cache {int * regs; } ;
struct x86_emulate_ctxt {int vcpu; struct decode_cache decode; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct decode_cache*,int ,int ) ;
 int FUNC_1 (struct decode_cache*,int *,int) ;
 int FUNC_2 (struct x86_emulate_ctxt*) ;
 int FUNC_3 (int ,void*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct x86_emulate_ctxt *VAR_1,
         struct x86_emulate_ops *VAR_2,
         void *VAR_3, int VAR_4)
{
 struct decode_cache *VAR_5 = &VAR_1->decode;
 int VAR_6;

 VAR_6 = VAR_2->read_emulated(FUNC_0(VAR_5, FUNC_2(VAR_1),
       VAR_5->regs[VAR_0]),
    VAR_3, VAR_4, VAR_1->vcpu);
 if (VAR_6 != 0)
  return VAR_6;

 FUNC_1(VAR_5, &VAR_5->regs[VAR_0], VAR_4);
 return VAR_6;
}
