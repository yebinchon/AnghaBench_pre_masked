
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipw_priv*) ;
 int FUNC_1 (struct ipw_priv*,int ,int ) ;
 int FUNC_2 (struct ipw_priv*,int) ;
 int FUNC_3 (struct ipw_priv*,int ) ;

__attribute__((used)) static u16 FUNC_4(struct ipw_priv *VAR_5, u8 VAR_6)
{
 int VAR_7;
 u16 VAR_8 = 0;


 FUNC_1(VAR_5, VAR_3, VAR_6);


 FUNC_2(VAR_5, VAR_0);


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  u32 VAR_9 = 0;
  FUNC_2(VAR_5, VAR_0 | VAR_2);
  FUNC_2(VAR_5, VAR_0);
  VAR_9 = FUNC_3(VAR_5, VAR_4);
  VAR_8 = (VAR_8 << 1) | ((VAR_9 & VAR_1) ? 1 : 0);
 }


 FUNC_2(VAR_5, 0);
 FUNC_0(VAR_5);

 return VAR_8;
}
