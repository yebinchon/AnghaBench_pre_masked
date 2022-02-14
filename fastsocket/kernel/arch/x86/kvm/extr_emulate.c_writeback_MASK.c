
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct x86_emulate_ops {int (* cmpxchg_emulated ) (unsigned long,int *,int *,int ,int ) ;int (* write_emulated ) (unsigned long,int *,int ,int ) ;} ;
struct TYPE_2__ {int type; int bytes; int val; int * ptr; int orig_val; } ;
struct decode_cache {TYPE_1__ dst; int lock_prefix; } ;
struct x86_emulate_ctxt {int vcpu; struct decode_cache decode; } ;





 int VAR_0 ;
 int FUNC_0 (unsigned long,int *,int *,int ,int ) ;
 int FUNC_1 (unsigned long,int *,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct x86_emulate_ctxt *VAR_1,
       struct x86_emulate_ops *VAR_2)
{
 int VAR_3;
 struct decode_cache *VAR_4 = &VAR_1->decode;

 switch (VAR_4->dst.type) {
 case 128:



  switch (VAR_4->dst.bytes) {
  case 1:
   *(u8 *)VAR_4->dst.ptr = (u8)VAR_4->dst.val;
   break;
  case 2:
   *(u16 *)VAR_4->dst.ptr = (u16)VAR_4->dst.val;
   break;
  case 4:
   *VAR_4->dst.ptr = (u32)VAR_4->dst.val;
   break;
  case 8:
   *VAR_4->dst.ptr = VAR_4->dst.val;
   break;
  }
  break;
 case 130:
  if (VAR_4->lock_prefix)
   VAR_3 = VAR_2->cmpxchg_emulated(
     (unsigned long)VAR_4->dst.ptr,
     &VAR_4->dst.orig_val,
     &VAR_4->dst.val,
     VAR_4->dst.bytes,
     VAR_1->vcpu);
  else
   VAR_3 = VAR_2->write_emulated(
     (unsigned long)VAR_4->dst.ptr,
     &VAR_4->dst.val,
     VAR_4->dst.bytes,
     VAR_1->vcpu);
  if (VAR_3 != 0)
   return VAR_3;
  break;
 case 129:

  break;
 default:
  break;
 }
 return VAR_0;
}
