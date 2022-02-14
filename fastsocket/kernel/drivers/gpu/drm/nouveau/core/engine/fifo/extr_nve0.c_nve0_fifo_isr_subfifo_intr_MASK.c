
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nve0_fifo_priv {int base; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nve0_fifo_priv*,char*,int,...) ;
 int FUNC_3 (struct nve0_fifo_priv*,int) ;
 int FUNC_4 (struct nve0_fifo_priv*,int,int) ;
 int VAR_0 ;
 int FUNC_5 (struct nve0_fifo_priv*,int,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct nve0_fifo_priv *VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_3(VAR_1, 0x040108 + (VAR_2 * 0x2000));
 u32 VAR_4 = FUNC_3(VAR_1, 0x0400c0 + (VAR_2 * 0x2000));
 u32 VAR_5 = FUNC_3(VAR_1, 0x0400c4 + (VAR_2 * 0x2000));
 u32 VAR_6 = FUNC_3(VAR_1, 0x040120 + (VAR_2 * 0x2000)) & 0xfff;
 u32 VAR_7 = (VAR_4 & 0x00070000) >> 16;
 u32 VAR_8 = (VAR_4 & 0x00003ffc);
 u32 VAR_9 = VAR_3;

 if (VAR_3 & 0x00200000) {
  if (VAR_8 == 0x0054) {
   if (!FUNC_5(VAR_1, VAR_6, 0x0500, 0x00000000))
    VAR_9 &= ~0x00200000;
  }
 }

 if (VAR_3 & 0x00800000) {
  if (!FUNC_5(VAR_1, VAR_6, VAR_8, VAR_5))
   VAR_9 &= ~0x00800000;
 }

 if (VAR_9) {
  FUNC_2(VAR_1, "SUBFIFO%d:", VAR_2);
  FUNC_0(VAR_0, VAR_9);
  FUNC_6("\n");
  FUNC_2(VAR_1,
    "SUBFIFO%d: ch %d [%s] subc %d mthd 0x%04x data 0x%08x\n",
    VAR_2, VAR_6,
    FUNC_1(&VAR_1->base, VAR_6),
    VAR_7, VAR_8, VAR_5);
 }

 FUNC_4(VAR_1, 0x0400c0 + (VAR_2 * 0x2000), 0x80600008);
 FUNC_4(VAR_1, 0x040108 + (VAR_2 * 0x2000), VAR_3);
}
