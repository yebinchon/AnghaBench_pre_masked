
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipw_priv {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (struct ipw_priv*,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct ipw_priv *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 FUNC_2(VAR_3, VAR_0, VAR_4 & VAR_1);
 FUNC_0(" reg = 0x%8X :\n", VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 return (VAR_5 >> ((VAR_4 & 0x3) * 8)) & 0xff;
}
