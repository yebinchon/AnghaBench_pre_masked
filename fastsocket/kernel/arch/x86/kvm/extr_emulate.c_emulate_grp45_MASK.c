
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ops {int dummy; } ;
struct TYPE_2__ {long val; } ;
struct decode_cache {int modrm_reg; long eip; TYPE_1__ src; int dst; } ;
struct x86_emulate_ctxt {int eflags; struct decode_cache decode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct x86_emulate_ctxt*) ;

__attribute__((used)) static inline int FUNC_2(struct x86_emulate_ctxt *VAR_1,
          struct x86_emulate_ops *VAR_2)
{
 struct decode_cache *VAR_3 = &VAR_1->decode;

 switch (VAR_3->modrm_reg) {
 case 0:
  FUNC_0("inc", VAR_3->dst, VAR_1->eflags);
  break;
 case 1:
  FUNC_0("dec", VAR_3->dst, VAR_1->eflags);
  break;
 case 2: {
  long int VAR_4;
  VAR_4 = VAR_3->eip;
  VAR_3->eip = VAR_3->src.val;
  VAR_3->src.val = VAR_4;
  FUNC_1(VAR_1);
  break;
 }
 case 4:
  VAR_3->eip = VAR_3->src.val;
  break;
 case 6:
  FUNC_1(VAR_1);
  break;
 }
 return VAR_0;
}
