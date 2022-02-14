
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct x86_emulate_ops {int (* read_emulated ) (unsigned long,int*,int,int ) ;int (* cmpxchg_emulated ) (unsigned long,int*,int*,int,int ) ;} ;
struct decode_cache {scalar_t__* regs; } ;
struct x86_emulate_ctxt {int eflags; int vcpu; struct decode_cache decode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int*,int,int ) ;
 int FUNC_1 (unsigned long,int*,int*,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct x86_emulate_ctxt *VAR_6,
          struct x86_emulate_ops *VAR_7,
          unsigned long VAR_8)
{
 struct decode_cache *VAR_9 = &VAR_6->decode;
 u64 VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = VAR_7->read_emulated(VAR_8, &VAR_10, 8, VAR_6->vcpu);
 if (VAR_12 != 0)
  return VAR_12;

 if (((u32) (VAR_10 >> 0) != (u32) VAR_9->regs[VAR_1]) ||
     ((u32) (VAR_10 >> 32) != (u32) VAR_9->regs[VAR_4])) {

  VAR_9->regs[VAR_1] = (u32) (VAR_10 >> 0);
  VAR_9->regs[VAR_4] = (u32) (VAR_10 >> 32);
  VAR_6->eflags &= ~VAR_0;

 } else {
  VAR_11 = ((u64)VAR_9->regs[VAR_3] << 32) |
         (u32) VAR_9->regs[VAR_2];

  VAR_12 = VAR_7->cmpxchg_emulated(VAR_8, &VAR_10, &VAR_11, 8, VAR_6->vcpu);
  if (VAR_12 != 0)
   return VAR_12;
  VAR_6->eflags |= VAR_0;
 }
 return VAR_5;
}
