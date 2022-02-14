
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_ltcg_priv {int subp_nr; } ;
struct nouveau_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvc0_ltcg_priv*,int,int,int) ;
 int FUNC_2 (struct nvc0_ltcg_priv*,int) ;
 int FUNC_3 (struct nvc0_ltcg_priv*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_subdev *VAR_0)
{
 struct nvc0_ltcg_priv *VAR_1 = (void *)VAR_0;
 u32 VAR_2;

 VAR_2 = FUNC_2(VAR_1, 0x00017c);
 while (VAR_2) {
  u32 VAR_3, VAR_4 = FUNC_0(VAR_2) - 1;
  for (VAR_3 = 0; VAR_3 < VAR_1->subp_nr; VAR_3++)
   FUNC_3(VAR_1, VAR_4, VAR_3);
  VAR_2 &= ~(1 << VAR_4);
 }




 FUNC_1(VAR_1, 0x000640, 0x02000000, 0x00000000);
}
