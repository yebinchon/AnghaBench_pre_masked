
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {int* data; scalar_t__ mode; int* ctxprog_label; int ctxprog_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_0(struct nouveau_grctx *VAR_3, int VAR_4)
{
 u32 *VAR_5 = VAR_3->data;
 int VAR_6;

 if (VAR_3->mode != VAR_2)
  return;

 VAR_3->ctxprog_label[VAR_4] = VAR_3->ctxprog_len;
 for (VAR_6 = 0; VAR_6 < VAR_3->ctxprog_len; VAR_6++) {
  if ((VAR_5[VAR_6] & 0xfff00000) != 0xff400000)
   continue;
  if ((VAR_5[VAR_6] & VAR_0) != ((VAR_4) << VAR_1))
   continue;
  VAR_5[VAR_6] = (VAR_5[VAR_6] & 0x00ff00ff) |
        (VAR_3->ctxprog_len << VAR_1);
 }
}
