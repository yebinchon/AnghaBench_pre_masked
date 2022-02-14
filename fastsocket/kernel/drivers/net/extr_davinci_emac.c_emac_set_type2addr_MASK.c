
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_priv {int dummy; } ;


 char FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct emac_priv*,int,char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct emac_priv *VAR_3, u32 VAR_4,
          char *VAR_5, int VAR_6, int VAR_7)
{
 u32 VAR_8;
 FUNC_2(VAR_2, VAR_6);
 VAR_8 = ((VAR_5[3] << 24) | (VAR_5[2] << 16) | (VAR_5[1] << 8) | (VAR_5[0]));

 FUNC_2(VAR_0, VAR_8);
 VAR_8 = ((VAR_5[5] << 8) | VAR_5[4] | ((VAR_4 & 0x7) << 16) | (VAR_7 << 19) | FUNC_0(20));

 FUNC_2(VAR_1, VAR_8);
 FUNC_1(VAR_3, VAR_4, VAR_5);
}
