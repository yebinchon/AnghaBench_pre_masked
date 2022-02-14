
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nve0_ibus_priv {int dummy; } ;


 int FUNC_0 (struct nve0_ibus_priv*,char*,int,int ,int ,int ) ;
 int FUNC_1 (struct nve0_ibus_priv*,int,int,int) ;
 int FUNC_2 (struct nve0_ibus_priv*,int) ;

__attribute__((used)) static void
FUNC_3(struct nve0_ibus_priv *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0, 0x122120 + (VAR_1 * 0x0800));
 u32 VAR_3 = FUNC_2(VAR_0, 0x122124 + (VAR_1 * 0x0800));
 u32 VAR_4 = FUNC_2(VAR_0, 0x122128 + (VAR_1 * 0x0800));
 FUNC_0(VAR_0, "HUB%d: 0x%06x 0x%08x (0x%08x)\n", VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_0, 0x122128 + (VAR_1 * 0x0800), 0x00000200, 0x00000000);
}
