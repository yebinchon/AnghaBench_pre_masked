
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvc0_grctx {int dummy; } ;
struct nvc0_graph_priv {int gpc_nr; int* tpc_nr; int tpc_total; int magic_not_rop_nr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (struct nvc0_graph_priv*,int,int,int) ;
 int FUNC_6 (struct nvc0_graph_priv*,int,int) ;
 int FUNC_7 (struct nvc0_grctx*) ;
 int FUNC_8 (struct nvc0_graph_priv*,struct nvc0_grctx*) ;
 int FUNC_9 (struct nvc0_graph_priv*) ;
 int FUNC_10 (struct nvc0_graph_priv*) ;
 int FUNC_11 (struct nvc0_graph_priv*) ;
 int FUNC_12 (struct nvc0_graph_priv*) ;
 int FUNC_13 (struct nvc0_graph_priv*) ;
 int FUNC_14 (struct nvc0_graph_priv*) ;
 int FUNC_15 (struct nvc0_graph_priv*) ;
 int FUNC_16 (struct nvc0_graph_priv*) ;
 int FUNC_17 (struct nvc0_graph_priv*) ;
 int FUNC_18 (struct nvc0_graph_priv*) ;
 int FUNC_19 (struct nvc0_graph_priv*) ;
 int FUNC_20 (struct nvc0_graph_priv*) ;
 int FUNC_21 (struct nvc0_graph_priv*) ;
 int FUNC_22 (struct nvc0_graph_priv*) ;
 int FUNC_23 (struct nvc0_graph_priv*) ;
 int FUNC_24 (struct nvc0_graph_priv*) ;
 int FUNC_25 (struct nvc0_graph_priv*) ;

int
FUNC_26(struct nvc0_graph_priv *VAR_3)
{
 struct nvc0_grctx VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10[6] = {}, VAR_11[2] = {}, VAR_12;
 u32 VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15[VAR_0][2], VAR_16;
 u8 VAR_17[VAR_0], VAR_18, VAR_19;
 u8 VAR_20, VAR_21;

 VAR_5 = FUNC_8(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_3, 0x000260, 0x00000001, 0x00000000);
 FUNC_6(VAR_3, 0x400204, 0x00000000);
 FUNC_6(VAR_3, 0x400208, 0x00000000);

 FUNC_12(VAR_3);
 FUNC_13(VAR_3);
 FUNC_14(VAR_3);
 FUNC_15(VAR_3);
 FUNC_16(VAR_3);
 FUNC_17(VAR_3);
 FUNC_18(VAR_3);
 FUNC_19(VAR_3);
 FUNC_20(VAR_3);
 FUNC_21(VAR_3);
 FUNC_22(VAR_3);
 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_11(VAR_3);

 FUNC_6(VAR_3, 0x404154, 0x0);

 FUNC_3(0x003000, 0x0100, VAR_1 | VAR_2);
 FUNC_3(0x008000, 0x0100, VAR_1 | VAR_2);
 FUNC_3(0x060000, 0x1000, VAR_1);
 FUNC_4(0x40800c, 0x00000000, 8, 1);
 FUNC_4(0x408010, 0x80000000, 0, 0);
 FUNC_4(0x419004, 0x00000000, 8, 1);
 FUNC_4(0x419008, 0x00000000, 0, 0);
 FUNC_4(0x4064cc, 0x80000000, 0, 0);
 FUNC_4(0x408004, 0x00000000, 8, 0);
 FUNC_4(0x408008, 0x80000030, 0, 0);
 FUNC_4(0x418808, 0x00000000, 8, 0);
 FUNC_4(0x41880c, 0x80000030, 0, 0);
 FUNC_4(0x4064c8, 0x01800600, 0, 0);
 FUNC_4(0x418810, 0x80000000, 12, 2);
 FUNC_4(0x419848, 0x10000000, 12, 2);
 FUNC_4(0x405830, 0x02180648, 0, 0);
 FUNC_4(0x4064c4, 0x0192ffff, 0, 0);
 for (VAR_7 = 0, VAR_16 = 0; VAR_7 < VAR_3->gpc_nr; VAR_7++) {
  u16 VAR_22 = 0x0218 * VAR_3->tpc_nr[VAR_7];
  u16 VAR_23 = 0x0648 * VAR_3->tpc_nr[VAR_7];
  VAR_15[VAR_7][0] = 0x10000000 | (VAR_22 << 16) | VAR_16;
  VAR_15[VAR_7][1] = 0x00000000 | (VAR_23 << 16);
  VAR_16 += 0x0324 * VAR_3->tpc_nr[VAR_7];
 }
 for (VAR_7 = 0; VAR_7 < VAR_3->gpc_nr; VAR_7++) {
  FUNC_4(FUNC_0(VAR_7, 0x30c0), VAR_15[VAR_7][0], 0, 0);
  FUNC_4(FUNC_0(VAR_7, 0x30e4), VAR_15[VAR_7][1] | VAR_16, 0, 0);
  VAR_16 += 0x07ff * VAR_3->tpc_nr[VAR_7];
 }
 FUNC_4(0x17e91c, 0x06060609, 0, 0);
 FUNC_4(0x17e920, 0x00090a05, 0, 0);

 FUNC_6(VAR_3, 0x418c6c, 0x1);
 FUNC_6(VAR_3, 0x41980c, 0x10);
 FUNC_6(VAR_3, 0x41be08, 0x4);
 FUNC_6(VAR_3, 0x4064c0, 0x801a00f0);
 FUNC_6(VAR_3, 0x405800, 0xf8000bf);
 FUNC_6(VAR_3, 0x419c00, 0xa);

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < 4; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_3->gpc_nr; VAR_7++) {
   if (VAR_8 < VAR_3->tpc_nr[VAR_7]) {
    FUNC_6(VAR_3, FUNC_1(VAR_7, VAR_8, 0x0698), VAR_9);
    FUNC_6(VAR_3, FUNC_1(VAR_7, VAR_8, 0x04e8), VAR_9);
    FUNC_6(VAR_3, FUNC_0(VAR_7, 0x0c10 + VAR_8 * 4), VAR_9);
    FUNC_6(VAR_3, FUNC_1(VAR_7, VAR_8, 0x0088), VAR_9++);
   }

   FUNC_6(VAR_3, FUNC_0(VAR_7, 0x0c08), VAR_3->tpc_nr[VAR_7]);
   FUNC_6(VAR_3, FUNC_0(VAR_7, 0x0c8c), VAR_3->tpc_nr[VAR_7]);
  }
 }

 VAR_12 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->gpc_nr; VAR_6++)
  VAR_12 |= VAR_3->tpc_nr[VAR_6] << (VAR_6 * 4);
 FUNC_6(VAR_3, 0x406028, VAR_12);
 FUNC_6(VAR_3, 0x405870, VAR_12);

 FUNC_6(VAR_3, 0x40602c, 0x0);
 FUNC_6(VAR_3, 0x405874, 0x0);
 FUNC_6(VAR_3, 0x406030, 0x0);
 FUNC_6(VAR_3, 0x405878, 0x0);
 FUNC_6(VAR_3, 0x406034, 0x0);
 FUNC_6(VAR_3, 0x40587c, 0x0);


 FUNC_2(VAR_17, VAR_3->tpc_nr, sizeof(VAR_3->tpc_nr));

 VAR_7 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_3->tpc_total; VAR_8++) {
  do {
   VAR_7 = (VAR_7 + 1) % VAR_3->gpc_nr;
  } while (!VAR_17[VAR_7]);
  VAR_17[VAR_7]--;

  VAR_10[VAR_8 / 6] |= VAR_7 << ((VAR_8 % 6) * 5);
 }

 for (; VAR_8 < 32; VAR_8++)
  VAR_10[VAR_8 / 6] |= 7 << ((VAR_8 % 6) * 5);


 VAR_20 = 0;
 VAR_21 = VAR_3->tpc_total;
 while (!(VAR_21 & (1 << 4))) {
  VAR_21 <<= 1;
  VAR_20++;
 }

 VAR_11[0] = VAR_21 << 16;
 VAR_11[0] |= VAR_20 << 21;
 VAR_11[0] |= (((1 << (0 + 5)) % VAR_21) << 24);
 VAR_11[0] |= VAR_3->tpc_total << 8;
 VAR_11[0] |= VAR_3->magic_not_rop_nr;
 for (VAR_6 = 1; VAR_6 < 7; VAR_6++)
  VAR_11[1] |= ((1 << (VAR_6 + 5)) % VAR_21) << ((VAR_6 - 1) * 5);


 FUNC_6(VAR_3, 0x418bb8, (VAR_3->tpc_total << 8) | VAR_3->magic_not_rop_nr);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_6(VAR_3, 0x418b08 + (VAR_6 * 4), VAR_10[VAR_6]);

 FUNC_6(VAR_3, 0x41bfd0, VAR_11[0]);
 FUNC_6(VAR_3, 0x41bfe4, VAR_11[1]);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_6(VAR_3, 0x41bf00 + (VAR_6 * 4), VAR_10[VAR_6]);

 FUNC_6(VAR_3, 0x4078bc, (VAR_3->tpc_total << 8) | VAR_3->magic_not_rop_nr);
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  FUNC_6(VAR_3, 0x40780c + (VAR_6 * 4), VAR_10[VAR_6]);


 FUNC_2(VAR_17, VAR_3->tpc_nr, sizeof(VAR_3->tpc_nr));
 for (VAR_7 = 0; VAR_7 < VAR_3->gpc_nr; VAR_7++)
  VAR_14 |= ((1 << VAR_3->tpc_nr[VAR_7]) - 1) << (VAR_7 * 8);

 for (VAR_6 = 0, VAR_7 = -1, VAR_19 = -1; VAR_6 < 32; VAR_6++) {
  VAR_18 = (VAR_6 * (VAR_3->tpc_total - 1)) / 32;
  if (VAR_18 != VAR_19) {
   VAR_19 = VAR_18;
   do {
    VAR_7 = (VAR_7 + 1) % VAR_3->gpc_nr;
   } while (!VAR_17[VAR_7]);
   VAR_8 = VAR_3->tpc_nr[VAR_7] - VAR_17[VAR_7]--;

   VAR_13 |= 1 << ((VAR_7 * 8) + VAR_8);
  }

  FUNC_6(VAR_3, 0x406800 + (VAR_6 * 0x20), VAR_13);
  FUNC_6(VAR_3, 0x406c00 + (VAR_6 * 0x20), VAR_13 ^ VAR_14);
 }

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_6(VAR_3, 0x4064d0 + (VAR_6 * 0x04), 0x00000000);

 FUNC_6(VAR_3, 0x405b00, 0x201);
 FUNC_6(VAR_3, 0x408850, 0x2);
 FUNC_6(VAR_3, 0x408958, 0x2);
 FUNC_6(VAR_3, 0x419f78, 0xa);

 FUNC_25(VAR_3);
 FUNC_24(VAR_3);
 FUNC_23(VAR_3);

 FUNC_5(VAR_3, 0x000260, 0x00000001, 0x00000001);
 FUNC_6(VAR_3, 0x418800, 0x7026860a);
 FUNC_6(VAR_3, 0x41be10, 0x00bb8bc7);
 return FUNC_7(&VAR_4);
}
