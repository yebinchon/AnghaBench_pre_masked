
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_ltcg_priv {int dummy; } ;


 int FUNC_0 (struct nvc0_ltcg_priv*,char*,int,int,int) ;
 int FUNC_1 (struct nvc0_ltcg_priv*,int) ;
 int FUNC_2 (struct nvc0_ltcg_priv*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvc0_ltcg_priv *VAR_0, int VAR_1, int VAR_2)
{
 u32 VAR_3 = 0x141000 + (VAR_1 * 0x2000) + (VAR_2 * 0x400);
 u32 VAR_4 = FUNC_1(VAR_0, VAR_3 + 0x020);

 if (VAR_4) {
  FUNC_0(VAR_0, "LTC%d_LTS%d: 0x%08x\n", VAR_1, VAR_2, VAR_4);
  FUNC_2(VAR_0, VAR_3 + 0x020, VAR_4);
 }
}
