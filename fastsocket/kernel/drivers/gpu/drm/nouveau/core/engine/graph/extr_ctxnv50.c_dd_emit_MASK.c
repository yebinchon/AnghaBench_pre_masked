
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {scalar_t__ mode; int ctxvals_pos; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_grctx *VAR_1, int VAR_2, u32 VAR_3) {
 int VAR_4;
 if (VAR_3 && VAR_1->mode == VAR_0)
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_0(VAR_1->data, 4 * (VAR_1->ctxvals_pos + VAR_4), VAR_3);
 VAR_1->ctxvals_pos += VAR_2;
}
