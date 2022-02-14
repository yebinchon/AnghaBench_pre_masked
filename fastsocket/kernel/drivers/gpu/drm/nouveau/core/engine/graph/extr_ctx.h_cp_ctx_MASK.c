
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {int ctxprog_reg; scalar_t__ ctxvals_base; scalar_t__ ctxvals_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_grctx*,int) ;
 int FUNC_1 (struct nouveau_grctx*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct nouveau_grctx *VAR_3, u32 VAR_4, u32 VAR_5)
{
 VAR_3->ctxprog_reg = (VAR_4 - 0x00400000) >> 2;

 VAR_3->ctxvals_base = VAR_3->ctxvals_pos;
 VAR_3->ctxvals_pos = VAR_3->ctxvals_base + VAR_5;

 if (VAR_5 > (VAR_1 >> VAR_2)) {
  FUNC_0(VAR_3, VAR_5);
  VAR_5 = 0;
 }

 FUNC_1(VAR_3, VAR_0 | (VAR_5 << VAR_2) | VAR_3->ctxprog_reg);
}
