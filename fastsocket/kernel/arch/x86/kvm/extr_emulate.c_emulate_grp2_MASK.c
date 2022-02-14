
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decode_cache {int modrm_reg; int dst; int src; } ;
struct x86_emulate_ctxt {int eflags; struct decode_cache decode; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct x86_emulate_ctxt *VAR_0)
{
 struct decode_cache *VAR_1 = &VAR_0->decode;
 switch (VAR_1->modrm_reg) {
 case 0:
  FUNC_0("rol", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 1:
  FUNC_0("ror", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 2:
  FUNC_0("rcl", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 3:
  FUNC_0("rcr", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 4:
 case 6:
  FUNC_0("sal", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 5:
  FUNC_0("shr", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 case 7:
  FUNC_0("sar", VAR_1->src, VAR_1->dst, VAR_0->eflags);
  break;
 }
}
