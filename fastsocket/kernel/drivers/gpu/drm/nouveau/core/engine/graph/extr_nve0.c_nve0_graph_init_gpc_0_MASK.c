
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvc0_graph_priv {int tpc_total; int* tpc_nr; int gpc_nr; int magic_not_rop_nr; } ;
typedef int data ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int*,int,int) ;
 int const FUNC_5 (struct nvc0_graph_priv*,int) ;
 int FUNC_6 (struct nvc0_graph_priv*,int ,int const) ;

__attribute__((used)) static void
FUNC_7(struct nvc0_graph_priv *VAR_2)
{
 const u32 VAR_3 = FUNC_0(0x00800000, VAR_2->tpc_total);
 u32 VAR_4[VAR_1 / 8];
 u8 VAR_5[VAR_0];
 int VAR_6, VAR_7, VAR_8;

 FUNC_6(VAR_2, FUNC_2(0, 0x3018), 0x00000001);

 FUNC_4(VAR_4, 0x00, sizeof(VAR_4));
 FUNC_3(VAR_5, VAR_2->tpc_nr, sizeof(VAR_2->tpc_nr));
 for (VAR_6 = 0, VAR_7 = -1; VAR_6 < VAR_2->tpc_total; VAR_6++) {
  do {
   VAR_7 = (VAR_7 + 1) % VAR_2->gpc_nr;
  } while (!VAR_5[VAR_7]);
  VAR_8 = VAR_2->tpc_nr[VAR_7] - VAR_5[VAR_7]--;

  VAR_4[VAR_6 / 8] |= VAR_8 << ((VAR_6 % 8) * 4);
 }

 FUNC_6(VAR_2, FUNC_1(0x0980), VAR_4[0]);
 FUNC_6(VAR_2, FUNC_1(0x0984), VAR_4[1]);
 FUNC_6(VAR_2, FUNC_1(0x0988), VAR_4[2]);
 FUNC_6(VAR_2, FUNC_1(0x098c), VAR_4[3]);

 for (VAR_7 = 0; VAR_7 < VAR_2->gpc_nr; VAR_7++) {
  FUNC_6(VAR_2, FUNC_2(VAR_7, 0x0914), VAR_2->magic_not_rop_nr << 8 |
        VAR_2->tpc_nr[VAR_7]);
  FUNC_6(VAR_2, FUNC_2(VAR_7, 0x0910), 0x00040000 | VAR_2->tpc_total);
  FUNC_6(VAR_2, FUNC_2(VAR_7, 0x0918), VAR_3);
 }

 FUNC_6(VAR_2, FUNC_1(0x3fd4), VAR_3);
 FUNC_6(VAR_2, FUNC_1(0x08ac), FUNC_5(VAR_2, 0x100800));
}
