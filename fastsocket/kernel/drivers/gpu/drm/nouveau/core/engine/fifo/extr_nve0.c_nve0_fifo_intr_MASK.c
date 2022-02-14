
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int uevent; } ;
struct nve0_fifo_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nve0_fifo_priv*,char*,int) ;
 int FUNC_3 (struct nve0_fifo_priv*,int,int,int) ;
 int FUNC_4 (struct nve0_fifo_priv*,int) ;
 int FUNC_5 (struct nve0_fifo_priv*,char*) ;
 int FUNC_6 (struct nve0_fifo_priv*,int,int) ;
 int FUNC_7 (struct nve0_fifo_priv*,int) ;
 int FUNC_8 (struct nve0_fifo_priv*,int) ;

__attribute__((used)) static void
FUNC_9(struct nouveau_subdev *VAR_0)
{
 struct nve0_fifo_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_4(VAR_1, 0x002140);
 u32 VAR_3 = FUNC_4(VAR_1, 0x002100) & VAR_2;

 if (VAR_3 & 0x00000100) {
  FUNC_5(VAR_1, "unknown status 0x00000100\n");
  FUNC_6(VAR_1, 0x002100, 0x00000100);
  VAR_3 &= ~0x00000100;
 }

 if (VAR_3 & 0x10000000) {
  u32 VAR_4 = FUNC_4(VAR_1, 0x00259c);
  u32 VAR_5 = VAR_4;

  while (VAR_5) {
   int VAR_6 = FUNC_0(VAR_5) - 1;
   FUNC_8(VAR_1, VAR_6);
   VAR_5 &= ~(1 << VAR_6);
  }

  FUNC_6(VAR_1, 0x00259c, VAR_4);
  VAR_3 &= ~0x10000000;
 }

 if (VAR_3 & 0x20000000) {
  u32 VAR_7 = FUNC_4(VAR_1, 0x0025a0);
  u32 VAR_8 = VAR_7;

  while (VAR_8) {
   int VAR_9 = FUNC_0(VAR_8) - 1;
   FUNC_7(VAR_1, VAR_9);
   VAR_8 &= ~(1 << VAR_9);
  }

  FUNC_6(VAR_1, 0x0025a0, VAR_7);
  VAR_3 &= ~0x20000000;
 }

 if (VAR_3 & 0x40000000) {
  FUNC_5(VAR_1, "unknown status 0x40000000\n");
  FUNC_3(VAR_1, 0x002a00, 0x00000000, 0x00000000);
  VAR_3 &= ~0x40000000;
 }

 if (VAR_3 & 0x80000000) {
  FUNC_1(VAR_1->base.uevent, 0);
  FUNC_6(VAR_1, 0x002100, 0x80000000);
  VAR_3 &= ~0x80000000;
 }

 if (VAR_3) {
  FUNC_2(VAR_1, "unhandled status 0x%08x\n", VAR_3);
  FUNC_6(VAR_1, 0x002100, VAR_3);
  FUNC_6(VAR_1, 0x002140, 0);
 }
}
