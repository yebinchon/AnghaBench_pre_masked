
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv10_graph_priv {int dummy; } ;
struct nv10_graph_chan {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nv10_graph_priv* FUNC_3 (struct nv10_graph_chan*) ;
 int FUNC_4 (struct nv10_graph_priv*,int,int,int) ;
 int FUNC_5 (struct nv10_graph_priv*,int) ;
 int FUNC_6 (struct nv10_graph_priv*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct nv10_graph_chan *VAR_7, int VAR_8, u32 VAR_9)
{
 struct nv10_graph_priv *VAR_10 = FUNC_3(VAR_7);
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15[0x60/4];
 u32 VAR_16, VAR_17[5];
 int VAR_18, VAR_19 = -1;







 for (VAR_18 = 0; VAR_18 < 8; VAR_18++) {
  int VAR_20 = FUNC_5(VAR_10, FUNC_1(VAR_18, 0)) & 0xfff;

  if (VAR_20 == 0x56 || VAR_20 == 0x96 || VAR_20 == 0x99) {
   VAR_19 = VAR_18;
   break;
  }
 }

 if (VAR_19 < 0 || !VAR_9)
  return;


 VAR_16 = FUNC_5(VAR_10, VAR_2);
 for (VAR_18 = 0; VAR_18 < 5; VAR_18++)
  VAR_17[VAR_18] = FUNC_5(VAR_10, FUNC_2(VAR_18));


 VAR_11 = FUNC_5(VAR_10, VAR_4);
 VAR_12 = FUNC_5(VAR_10, VAR_6);
 VAR_13 = FUNC_5(VAR_10, VAR_5);
 VAR_14 = FUNC_5(VAR_10, VAR_3);

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_15); VAR_18++)
  VAR_15[VAR_18] = FUNC_5(VAR_10, 0x4007a0 + 4 * VAR_18);


 for (VAR_18 = 0; VAR_18 < 5; VAR_18++)
  FUNC_6(VAR_10, FUNC_2(VAR_18),
   FUNC_5(VAR_10, FUNC_1(VAR_19, VAR_18)));
 FUNC_4(VAR_10, VAR_2, 0xe000, VAR_19 << 13);


 FUNC_6(VAR_10, VAR_3, 0);
 FUNC_6(VAR_10, VAR_4,
  0x2c000000 | VAR_8 << 20 | VAR_19 << 16 | 0x18c);
 FUNC_6(VAR_10, VAR_6, VAR_9);
 FUNC_4(VAR_10, VAR_1, 0, 0x10000);
 FUNC_4(VAR_10, VAR_0, 0x00000001, 0x00000001);
 FUNC_4(VAR_10, VAR_0, 0x00000001, 0x00000000);


 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_15); VAR_18++)
  FUNC_6(VAR_10, 0x4007a0 + 4 * VAR_18, VAR_15[VAR_18]);

 FUNC_6(VAR_10, VAR_3, VAR_14);
 FUNC_6(VAR_10, VAR_4, VAR_11);
 FUNC_6(VAR_10, VAR_6, VAR_12);
 FUNC_6(VAR_10, VAR_5, VAR_13);


 for (VAR_18 = 0; VAR_18 < 5; VAR_18++)
  FUNC_6(VAR_10, FUNC_2(VAR_18), VAR_17[VAR_18]);
 FUNC_6(VAR_10, VAR_2, VAR_16);
}
