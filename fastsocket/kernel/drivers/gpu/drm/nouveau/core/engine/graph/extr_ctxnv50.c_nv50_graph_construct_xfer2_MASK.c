
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_grctx {int ctxvals_pos; struct nouveau_device* device; } ;
struct nouveau_device {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_grctx*,int) ;
 int FUNC_1 (struct nouveau_grctx*,int ) ;
 int FUNC_2 (struct nouveau_grctx*,int ,int ) ;
 int FUNC_3 (struct nouveau_grctx*) ;
 int FUNC_4 (struct nouveau_device*,int) ;
 int FUNC_5 (struct nouveau_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_grctx *VAR_5)
{
 struct nouveau_device *VAR_6 = VAR_5->device;
 int VAR_7;
 u32 VAR_8;
 u32 VAR_9 = FUNC_4 (VAR_5->device, 0x1540);
 int VAR_10 = 0;

 VAR_8 = (VAR_5->ctxvals_pos+0x3f)&~0x3f;

 if (VAR_6->chipset < 0xa0) {
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   VAR_5->ctxvals_pos = VAR_8 + VAR_7;


   if (VAR_7 == 0)
    FUNC_5(VAR_5, 1, 0x08100c12);
   if (VAR_9 & (1 << VAR_7))
    FUNC_3(VAR_5);
   if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_10)
    VAR_10 = (VAR_5->ctxvals_pos-VAR_8)/8;
  }
 } else {

  VAR_5->ctxvals_pos = VAR_8;


  FUNC_5(VAR_5, 1, 0x08100c12);
  if (VAR_9 & (1 << 0))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 1))
   FUNC_3(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_10)
   VAR_10 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 1;
  if (VAR_9 & (1 << 2))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 3))
   FUNC_3(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_10)
   VAR_10 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 2;
  if (VAR_9 & (1 << 4))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 5))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 6))
   FUNC_3(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_10)
   VAR_10 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 3;
  if (VAR_9 & (1 << 7))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 8))
   FUNC_3(VAR_5);
  if (VAR_9 & (1 << 9))
   FUNC_3(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_10)
   VAR_10 = (VAR_5->ctxvals_pos-VAR_8)/8;
 }
 VAR_5->ctxvals_pos = VAR_8 + VAR_10 * 8;
 VAR_5->ctxvals_pos = (VAR_5->ctxvals_pos+0x3f)&~0x3f;
 FUNC_0 (VAR_5, VAR_8);
 FUNC_1 (VAR_5, VAR_2);
 FUNC_0 (VAR_5, VAR_10);
 FUNC_1 (VAR_5, VAR_1);
 FUNC_1 (VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_4, VAR_0);
}
