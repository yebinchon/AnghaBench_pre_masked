
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {scalar_t__ mode; int ctxprog_reg; int ctxvals_base; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct nouveau_grctx *VAR_1, u32 VAR_2, u32 VAR_3)
{
 if (VAR_1->mode != VAR_0)
  return;

 VAR_2 = (VAR_2 - 0x00400000) / 4;
 VAR_2 = (VAR_2 - VAR_1->ctxprog_reg) + VAR_1->ctxvals_base;

 FUNC_0(VAR_1->data, VAR_2 * 4, VAR_3);
}
