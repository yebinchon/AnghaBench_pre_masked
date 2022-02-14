
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int uevent; } ;
struct nvc0_fifo_priv {TYPE_1__ base; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nvc0_fifo_priv*,char*,int,...) ;
 int FUNC_3 (struct nvc0_fifo_priv*,char*,int) ;
 int FUNC_4 (struct nvc0_fifo_priv*,int,int,int) ;
 int FUNC_5 (struct nvc0_fifo_priv*,int) ;
 int FUNC_6 (struct nvc0_fifo_priv*,char*,int) ;
 int FUNC_7 (struct nvc0_fifo_priv*,int,int) ;
 int FUNC_8 (struct nvc0_fifo_priv*,int) ;
 int FUNC_9 (struct nvc0_fifo_priv*,int) ;

__attribute__((used)) static void
FUNC_10(struct nouveau_subdev *VAR_0)
{
 struct nvc0_fifo_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2 = FUNC_5(VAR_1, 0x002140);
 u32 VAR_3 = FUNC_5(VAR_1, 0x002100) & VAR_2;

 if (VAR_3 & 0x00000001) {
  u32 VAR_4 = FUNC_5(VAR_1, 0x00252c);
  FUNC_6(VAR_1, "INTR 0x00000001: 0x%08x\n", VAR_4);
  FUNC_7(VAR_1, 0x002100, 0x00000001);
  VAR_3 &= ~0x00000001;
 }

 if (VAR_3 & 0x00000100) {
  u32 VAR_5 = FUNC_5(VAR_1, 0x00254c);
  FUNC_6(VAR_1, "INTR 0x00000100: 0x%08x\n", VAR_5);
  FUNC_7(VAR_1, 0x002100, 0x00000100);
  VAR_3 &= ~0x00000100;
 }

 if (VAR_3 & 0x00010000) {
  u32 VAR_6 = FUNC_5(VAR_1, 0x00256c);
  FUNC_6(VAR_1, "INTR 0x00010000: 0x%08x\n", VAR_6);
  FUNC_7(VAR_1, 0x002100, 0x00010000);
  VAR_3 &= ~0x00010000;
 }

 if (VAR_3 & 0x01000000) {
  u32 VAR_7 = FUNC_5(VAR_1, 0x00258c);
  FUNC_6(VAR_1, "INTR 0x01000000: 0x%08x\n", VAR_7);
  FUNC_7(VAR_1, 0x002100, 0x01000000);
  VAR_3 &= ~0x01000000;
 }

 if (VAR_3 & 0x10000000) {
  u32 VAR_8 = FUNC_5(VAR_1, 0x00259c);
  u32 VAR_9 = VAR_8;

  while (VAR_9) {
   int VAR_10 = FUNC_0(VAR_9) - 1;
   FUNC_9(VAR_1, VAR_10);
   VAR_9 &= ~(1 << VAR_10);
  }

  FUNC_7(VAR_1, 0x00259c, VAR_8);
  VAR_3 &= ~0x10000000;
 }

 if (VAR_3 & 0x20000000) {
  u32 VAR_11 = FUNC_5(VAR_1, 0x0025a0);
  u32 VAR_12 = VAR_11;

  while (VAR_12) {
   int VAR_13 = FUNC_0(VAR_12) - 1;
   FUNC_8(VAR_1, VAR_13);
   VAR_12 &= ~(1 << VAR_13);
  }

  FUNC_7(VAR_1, 0x0025a0, VAR_11);
  VAR_3 &= ~0x20000000;
 }

 if (VAR_3 & 0x40000000) {
  u32 VAR_14 = FUNC_5(VAR_1, 0x0025a4);
  u32 VAR_15 = FUNC_4(VAR_1, 0x002a00, 0x00000000, 0x00000);
  FUNC_2(VAR_1, "INTR 0x40000000: 0x%08x 0x%08x\n",
          VAR_14, VAR_15);
  VAR_3 &= ~0x40000000;
 }

 if (VAR_3 & 0x80000000) {
  u32 VAR_16 = FUNC_4(VAR_1, 0x0025a8, 0x00000000, 0x00000000);
  FUNC_1(VAR_1->base.uevent, 0);
  FUNC_2(VAR_1, "INTR 0x80000000: 0x%08x\n", VAR_16);
  VAR_3 &= ~0x80000000;
 }

 if (VAR_3) {
  FUNC_3(VAR_1, "unhandled status 0x%08x\n", VAR_3);
  FUNC_7(VAR_1, 0x002100, VAR_3);
  FUNC_7(VAR_1, 0x002140, 0);
 }
}
