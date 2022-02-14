
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {int* ctxprog_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_grctx*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct nouveau_grctx *VAR_3, u32 VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_4 != 2) {
  VAR_8 = VAR_3->ctxprog_label[VAR_7] << VAR_2;
  if (VAR_8 == 0)
   VAR_8 = 0xff000000 | (VAR_7 << VAR_2);
 }

 FUNC_0(VAR_3, VAR_0 | (VAR_4 << 18) | VAR_8 | VAR_5 |
      (VAR_6 ? 0 : VAR_1));
}
