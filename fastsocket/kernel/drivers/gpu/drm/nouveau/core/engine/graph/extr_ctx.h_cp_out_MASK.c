
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {scalar_t__ mode; scalar_t__ ctxprog_len; scalar_t__ ctxprog_max; int * data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct nouveau_grctx *VAR_1, u32 VAR_2)
{
 u32 *VAR_3 = VAR_1->data;

 if (VAR_1->mode != VAR_0)
  return;

 FUNC_0(VAR_1->ctxprog_len == VAR_1->ctxprog_max);
 VAR_3[VAR_1->ctxprog_len++] = VAR_2;
}
